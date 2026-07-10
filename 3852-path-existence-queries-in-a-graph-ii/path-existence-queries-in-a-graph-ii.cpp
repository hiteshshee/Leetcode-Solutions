class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({nums[i],i});
        }

        sort(a.begin(),a.end());

        vector<int> val(n),pos(n),comp(n);
        for(int i=0;i<n;i++){
            val[i]=a[i].first;
            pos[a[i].second]=i;
        }

        int id=0;
        comp[0]=0;
        for(int i=1;i<n;i++){
            if(val[i]-val[i-1]>maxDiff){
                id++;
            }
            comp[i]=id;
        }

        vector<int> nxt(n);
        for(int i=0;i<n;i++){
            int j=upper_bound(val.begin(),val.end(),val[i]+maxDiff)-val.begin();
            nxt[i]=j-1;
        }

        int LOG=18;
        vector<vector<int>> up(LOG,vector<int>(n));

        for(int i=0;i<n;i++){
            up[0][i]=nxt[i];
        }

        for(int k=1;k<LOG;k++){
            for(int i=0;i<n;i++){
                up[k][i]=up[k-1][up[k-1][i]];
            }
        }

        vector<int> ans;

        for(int i=0;i<queries.size();i++){
            int u=queries[i][0];
            int v=queries[i][1];

            if(u==v){
                ans.push_back(0);
                continue;
            }

            int l=pos[u];
            int r=pos[v];

            if(l>r){
                swap(l,r);
            }

            if(comp[l]!=comp[r]){
                ans.push_back(-1);
                continue;
            }

            int cur=l;
            int steps=0;

            for(int k=LOG-1;k>=0;k--){
                if(up[k][cur]<r){
                    cur=up[k][cur];
                    steps+=(1<<k);
                }
            }

            steps++;
            ans.push_back(steps);
        }

        return ans;
    }
};