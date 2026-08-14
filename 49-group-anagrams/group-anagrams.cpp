class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        unordered_map<string,vector<string>> mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string s=strs[i];
            string k=s;
            sort(s.begin(),s.end());
            mp[s].push_back(k);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            answer.push_back(it->second); 
        }
        return answer;
    }
};