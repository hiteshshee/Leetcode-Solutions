class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.length();
        int count=0;
        unordered_map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[text[i]]++;
        }
        while(freq['b']>=1&&freq['a']>=1&&freq['l']>=2&&freq['o']>=2&&freq['n']>=1){
            count++;
            freq['b']--;
            freq['a']--;
            freq['l']--;
            freq['l']--;
            freq['o']--;
            freq['o']--;
            freq['n']--;
        }
        return count;
    }
};