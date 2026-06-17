class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        vector<long long> len(n);

        long long cur = 0;
        const long long LIMIT = 1e15 + 1;

        for(int i = 0; i < n; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                cur++;
            }
            else if(s[i] == '*') {
                if(cur > 0) cur--;
            }
            else if(s[i] == '#') {
                cur = min(LIMIT, cur * 2);
            }
            else if(s[i] == '%') {
                
            }

            len[i] = cur;
        }

        if(k >= cur) return '.';

        long long L = cur;

        for(int i = n - 1; i >= 0; i--) {

            if(s[i] >= 'a' && s[i] <= 'z') {

                if(k == L - 1)
                    return s[i];

                L--;
            }

            else if(s[i] == '#') {

                long long oldL = L / 2;
                k %= oldL;
                L = oldL;
            }

            else if(s[i] == '%') {

                k = L - 1 - k;
            }

            else if(s[i] == '*') {

                L++;
            }
        }

        return '.';
    }
};