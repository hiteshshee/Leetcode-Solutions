class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        int n=words.size();
        for(int i=0;i<n;i++){
            freq[words[i]]++;
        }
        vector<string> answer;
        vector<int> count;
        for(auto it=freq.begin();it!=freq.end();it++){
            count.push_back(it->second);
        }
        sort(count.rbegin(),count.rend());
        vector<int> dem;
        for(int i=0;i<k;i++){
            dem.push_back(count[i]);
        }
        int l;
        for(l=0;l<k;l++){
            if(l>0 && dem[l]==dem[l-1]){
                continue;
            }
            vector<string> temp;
            for(auto it=freq.begin();it!=freq.end();it++){
                if(it->second==dem[l]){
                    temp.push_back(it->first);
                }
            }
            sort(temp.begin(),temp.end());
            for(int i=0;i<temp.size() && answer.size()<k;i++){
                answer.push_back(temp[i]);
            }
        }
        return answer;
    }
};