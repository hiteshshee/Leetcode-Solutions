class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0,vowels=0;

        while(i<n&&s[i]!=' '){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowels++;
            }
            i++;
        }

        i++;

        while(i<n){
            int start=i;
            int cnt=0;

            while(i<n&&s[i]!=' '){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    cnt++;
                }
                i++;
            }

            if(cnt==vowels){
                reverse(s.begin()+start,s.begin()+i);
            }
            i++;
        }

        return s;
    }
};