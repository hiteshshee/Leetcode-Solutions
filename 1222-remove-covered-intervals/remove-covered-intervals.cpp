class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            else{
                return a[0]<b[0];
            }
        });
        vector<vector<int>> temp;
        temp.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            int m=temp.size()-1;
            if(temp[m][0]<=intervals[i][0]&&temp[m][1]>=intervals[i][1]){
                continue;
            }
            else{
                temp.push_back(intervals[i]);
            }
        }
        return temp.size();
    }
};