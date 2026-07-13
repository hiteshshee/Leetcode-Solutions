class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int shh=stoi(startTime.substr(0,2));
        int smm=stoi(startTime.substr(3,2));
        int sss=stoi(startTime.substr(6,2));
        int ehh=stoi(endTime.substr(0,2));
        int emm=stoi(endTime.substr(3,2));
        int ess=stoi(endTime.substr(6,2));
        int hh=ehh-shh;
        int mm=emm-smm;
        int ss=ess-sss;

        return (hh*3600)+(mm*60)+(ss);
        
    }
};