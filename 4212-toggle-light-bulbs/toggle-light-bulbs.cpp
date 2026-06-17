class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> freq;
        set<int> ans;
        int n=bulbs.size();
        for(int i=0;i<n;i++){
            freq[bulbs[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[bulbs[i]]%2==1){
                ans.insert(bulbs[i]);
            }
        }
        vector<int> result(ans.begin(), ans.end());
       return result;
    }
};