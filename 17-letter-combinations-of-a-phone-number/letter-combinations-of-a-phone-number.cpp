class Solution {
public:
vector<string> ans;
vector<string> mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(int idx,string &digits,string &curr){
        if(idx==digits.length()){
            ans.push_back(curr);
            return;
        }
        string letters=mp[digits[idx]-'0'];
        for(int i=0;i<letters.length();i++){
            curr.push_back(letters[i]);
            solve(idx+1,digits,curr);
            curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        int k=digits.length();
        if(k==0){
            return {};
        }
        string curr;
        solve(0,digits,curr);
        return ans;
    }
};