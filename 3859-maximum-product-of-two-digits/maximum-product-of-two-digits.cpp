class Solution {
public:
    int maxProduct(int n) {
        vector<int> array;
        while(n>0){
            int s=n%10;
            array.push_back(s);
            n=n/10;
        }
        int p=array.size();
        sort(array.begin(),array.end());
        return array[p-1]*array[p-2];
    }
};