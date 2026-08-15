// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n=s.length();
//         int l=0;
//         int r=0;
//         unordered_map<char,int> map;
//         int maxlen=0;
//         while(r<n){
            
//             if(map.find(s[r])!=map.end()){
//                 if(map[s[r]]>=l){
//                     l=1+map[s[r]];
//                 }
//             }
//             maxlen=max(maxlen,r-l+1);
//             map[s[r]]=r;
//             r++;
//         }
//         return maxlen;
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        int r=0;
        unordered_map<char,int> mp;
        int maxlen=0;
        while(r<n){
            if(mp.find(s[r])!=mp.end()){
                if(mp[s[r]]>=l){
                    l=mp[s[r]]+1;
                }
            }
            maxlen=max(maxlen,r-l+1);
            mp[s[r]]=r;
            r++;
            
        }
        return maxlen;
    }
};