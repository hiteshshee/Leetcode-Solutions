//revisit required(didnt understand)
class Solution {
public:
    bool check(vector<vector<int>>&dist,int x){
        int n=dist.size();
        if(dist[0][0]<x)return false;
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(n,0));
        q.push({0,0});
        vis[0][0]=1;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int r=it.first;
            int c=it.second;
            if(r==n-1&&c==n-1)return true;
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<n&&!vis[nr][nc]&&dist[nr][nc]>=x){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        return false;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int r=it.first;
            int c=it.second;
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<n&&dist[nr][nc]>dist[r][c]+1){
                    dist[nr][nc]=dist[r][c]+1;
                    q.push({nr,nc});
                }
            }
        }

        int l=0,h=2*n,ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(dist,mid)){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return ans;
    }
};