class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.length();
        set<char> st;
        string prefix="";
        int count=0;
        for(int i=0;i<n;i++){
            prefix=prefix+s[i];
            st.insert(s[i]);
            if(st.size()==prefix.length()%3){
                count++;
            }
            
        }
        return count;
    }
};