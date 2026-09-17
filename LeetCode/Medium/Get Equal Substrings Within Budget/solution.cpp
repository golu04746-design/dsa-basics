class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>v;
        for(int i=0;i<s.length();i++){
            v.push_back(abs(s[i]-t[i]));

        }        
        int r=0;
        int l=0;
        int res=INT_MIN;
        int sum=0;
        while(r<s.length()){
            sum+=v[r];
            while(sum>maxCost){
                sum-=v[l];
                l++;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};