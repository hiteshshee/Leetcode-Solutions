// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int n=s.size();
//         for(int i=0;i<n/2;i++){
//             swap(s[i],s[n-1-i]);
//         }
//     }
// };
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<n/2){
            int temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
        
    }
};