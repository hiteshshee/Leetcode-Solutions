class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        vector<bool>freql(26,false);
        vector<bool>frequ(26,false);
        for(int i=0;i<word.length();i++){
            if(islower(word[i])){
                freql[word[i]-'a']=true;
            }
            if(isupper(word[i])){
                frequ[word[i]-'A']=true;
            }
        }
        for(int i=0;i<26;i++){
            if(freql[i]&&frequ[i]){
                count++;
            }
        }
        return count;
    }
};