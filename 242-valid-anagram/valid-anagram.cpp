// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int n=s.length();
//         int m=t.length();
//         if(n!=m){
//             return false;
//         }
//         vector<char> chars1;
//         vector<char> chars2;
//         for(int i=0;i<n;i++){
//             chars1.push_back(s[i]);
//         }
//         for(int i=0;i<n;i++){
//             chars2.push_back(t[i]);
//         }
//         int count=0;
//         sort(chars1.begin(),chars1.end());
//         sort(chars2.begin(),chars2.end());
//         string s1="";
//         string s2="";
//         for(int i=0;i<n;i++){
//             s1.push_back(chars1[i]);
//             s2.push_back(chars2[i]);
//         }
//         for(int i=0;i<n;i++){
//         if(s1[i]==s2[i]){
//             count++;
//         }
//         }
//         if(count==n){
//             return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        if(n!=m){
            return false;
        }
        // vector<int> freq(26,0);
        // vector<int> freq2(26,0);
        // for(int i=0;i<n;i++){
        //     freq[s[i]-'a']++;
        //     freq2[t[i]-'a']++;
        // }
        // sort(freq.begin(),freq.end());
        // sort(freq2.begin(),freq2.end());
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};