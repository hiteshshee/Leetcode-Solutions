class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int>freq(10,0);
        for(int i=0;i<n;i++){
            freq[digits[i]]++;
        }

        int ans = 0;

        for(int num = 100; num<1000;num+=2){
            int x = num;

            int ones = x%10;
            x = x/10;

            int tens = x%10;
            x = x/10;

            int hundreds = x;

            vector<int> need(10,0);
            need[ones]++;
            need[tens]++;
            need[hundreds]++;

            bool possible = true;

            for(int d = 0;d<=9;d++){
                if(need[d] > freq[d]){
                    possible = false;
                    break;
                }
            }
            if(possible) ans++;
            
        }
        return ans;
    }
};