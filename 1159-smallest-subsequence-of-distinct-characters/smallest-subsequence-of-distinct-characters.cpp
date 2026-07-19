class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26);
        for(int i=0;i<s.length();i++){
            last[s[i]-'a']=i;
        }
        stack<char> st;
        vector<bool> vis(26,false);
        for(int i=0;i<s.length();i++){
            if(vis[s[i]-'a']){
                continue;
            }
            while(!st.empty()&&st.top()>s[i]&&last[st.top()-'a']>i){
                vis[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            vis[s[i]-'a']=true;
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};