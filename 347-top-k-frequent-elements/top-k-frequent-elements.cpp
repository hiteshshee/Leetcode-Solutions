class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> answer;
        unordered_map<int,int> freq;

        for(int x:nums){
            freq[x]++;
        }
        vector<int> demo;

        for(auto it=freq.begin();it!=freq.end();it++){
            demo.push_back(it->first);
        }
        while(k--){
            int x=demo[0];

            for(int i=1;i<demo.size();i++){
                if(freq[demo[i]]>freq[x])
                    x=demo[i];
            }

            answer.push_back(x);
            demo.erase(find(demo.begin(),demo.end(),x));
        }

        return answer;
    }
};