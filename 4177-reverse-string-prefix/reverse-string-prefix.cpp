class Solution {
public:
    string reversePrefix(string s, int k) {
        int i=0;
        while(i>=0&&i<k/2){
            char temp=s[i];
            s[i]=s[k-i-1];
            s[k-i-1]=temp;
            i++;
        }
        return s;
    }
};