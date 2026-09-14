class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>freq;
        for(auto it:mp){
            freq.push_back(it.second);

        }
        sort(freq.begin(),freq.end());
        int fn=freq.size();
        int szlft=0;
        int cnt=0;
        for(int i=fn-1;i>=0;i--){
            szlft+=freq[i];
            cnt++;
            if(szlft>=(n/2)) break;
            
        }
        return cnt;
        
    }
};