class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        for(int i=0;i<s.length();i++){
            string temp="";
            while(i<s.length() && s[i]!=' '){
                temp=temp+s[i];
                i++;
            }
            words.push_back(temp);
        }
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        if(pattern.length()!=words.size()){
            return false;
        }
        for(int i=0;i<pattern.length();i++){
            char c=pattern[i];
            string str=words[i];
            if(mp1.count(c) && mp1[c]!=str){
                return false;
            }
            if(mp2.count(str) && mp2[str]!=c){
                return false;
            }
            mp1[c]=str;
            mp2[str]=c;
        }
        return true;
    }
};