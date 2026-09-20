class Solution {
public:
    int reverseDegree(string s) {
        int pdt=0;
        int sum=0;
        for (int i=0;i<s.length();i++){
            pdt=(i+1)*(123-(int)s[i]);
            sum+=pdt;
        }
        return sum;
        
    }
};