class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n=messages.size();
        vector<int> words;
        for(int i=0;i<n;i++){
            string temp=messages[i];
            int l=0;
            int count=1;
            while(l<temp.length()){
                if(temp[l]==' '){
                    count++;
                    l++;
                }
                l++;
            }
            words.push_back(count);
        } 
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[senders[i]]=mp[senders[i]]+words[i];
        }
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            ans=max(it->second,ans);
        }
        string answer="A";
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==ans){
                answer=max(answer,it->first);
            }
        }
        return answer;
    }

};