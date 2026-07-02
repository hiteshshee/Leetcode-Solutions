//revisit required
class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid,int health) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> best(m,vector<int>(n,-1));
        queue<pair<pair<int,int>,int>> q;

        int h=health-grid[0][0];
        if(h<=0) return false;
        q.push({{0,0},h});
        best[0][0]=h;

        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};

        while(!q.empty()){
            auto cur=q.front();
            q.pop();

            int r=cur.first.first,c=cur.first.second;
            int hp=cur.second;

            if(r==m-1&&c==n-1) {
                return true;
            }
            for(int i=0;i<4;i++){
                int nr=r+dr[i],nc=c+dc[i];

                if(nr>=0&&nr<m&&nc>=0&&nc<n){
                    int nh=hp-grid[nr][nc];

                    if(nh>0&&nh>best[nr][nc]){
                        best[nr][nc]=nh;
                        q.push({{nr,nc},nh});
                    }
                }
            }
        }

        return false;
    }
};