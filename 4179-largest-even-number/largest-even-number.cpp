class Solution {
public:
    string largestEven(string s) {
        int n=s.length();
        string temp=s;
        while(n!=0){
        if(temp.back()=='2'){
            return temp;
        }
        else{
            temp="";
            n=n-1;
            for(int i=0;i<n;i++){
                temp=temp+s[i];
            }
        }
        }
        return temp;
    }
};