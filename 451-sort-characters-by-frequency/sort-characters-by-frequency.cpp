// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map<char,int> freq;
//         int n=s.length();
//         for(int i=0;i<n;i++){
//                 freq[s[i]]++;
//         }
//         vector<pair<int,char>> arr;
//         for(auto it=freq.begin();it!=freq.end();it++){
//             arr.push_back({it->second,it->first});
//         }
//         sort(arr.rbegin(),arr.rend());
//         string ans="";
//         for(int i=0;i<arr.size();i++){
//             ans.append(arr[i].first,arr[i].second);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        int n=s.length();
        for(int i=0;i<n;i++){
                freq[s[i]]++;
        }
        vector<pair<int,char>> arr;
        for(auto it=freq.begin();it!=freq.end();it++){
            arr.push_back({it->second,it->first});
        }
        sort(arr.rbegin(),arr.rend());
        string answer="";
        for(int i=0;i<arr.size();i++){
           answer.append(arr[i].first,arr[i].second);
        }
        return answer;
    }
};