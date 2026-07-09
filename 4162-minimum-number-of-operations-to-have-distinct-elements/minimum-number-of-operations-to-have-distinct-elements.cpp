class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        int dup=0;
        for(unordered_map<int,int>::iterator it=freq.begin();it!=freq.end();it++){
            if(it->second>1){
                dup++;
            }
        }

        if(dup==0){
            return 0;
        }

        int count=0;
        for(int i=0;i<nums.size();i+=3){
            count++;
            for(int j=i;j<i+3&&j<nums.size();j++){
                if(freq[nums[j]]==2){
                    dup--;
                }
                freq[nums[j]]--;
            }
            if(dup==0){
                return count;
            }
        }
        return count;
    }
};