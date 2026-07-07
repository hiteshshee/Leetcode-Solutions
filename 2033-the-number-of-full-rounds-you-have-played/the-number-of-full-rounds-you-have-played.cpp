class Solution {
public:
    int numberOfRounds(string loginTime, string logoutTime) {
        string hhin="";
        string hhout="";
        string mmin="";
        string mmout="";
        for(int i=0;i<2;i++){
            hhin=hhin+loginTime[i];
            hhout=hhout+logoutTime[i];
        }
        for(int i=3;i<5;i++){
            mmin=mmin+loginTime[i];
            mmout=mmout+logoutTime[i];
        }
        int hin=stoi(hhin);
        int hout=stoi(hhout);
        int min=stoi(mmin);
        int mout=stoi(mmout);
        int start=hin*60+min;
        int end=hout*60+mout;
        if(end<start){
            end=end+24*60;
        }
        start=((start+14)/15)*15;
        end=(end/15)*15;

        return max(0,(end-start)/15);
    }
};