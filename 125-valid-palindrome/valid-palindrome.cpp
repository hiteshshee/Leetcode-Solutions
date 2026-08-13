// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string s2 = "";

//         for (int i = 0; i < s.length(); i++) {
//             if (isalnum(s[i])) {
//                 s2.push_back(tolower(s[i]));
//             }
//         }

//         int low = 0;
//         int high = s2.length() - 1;

//         while (low < high) {
//             if (s2[low] != s2[high]) {
//                 return false;
//             }
//             low++;
//             high--;
//         }

//         return true;
//     }
// };
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isalnum(s[l])){
                l++;
            }
            else if(!isalnum(s[r])){
                r--;
            }
            else{
                if(tolower(s[l])==tolower(s[r])){
                    l++;
                    r--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};