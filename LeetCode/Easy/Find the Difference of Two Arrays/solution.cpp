class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>res;
        set<int>answer0;
        set<int>answer1;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(mp2.find(nums1[i])==mp2.end()) answer0.insert(nums1[i]);
        }
         for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mp1.find(nums2[i])==mp1.end()) answer1.insert(nums2[i]);
        }
        vector<int>answer00;
        vector<int>answer11;
        for(int i:answer0){
            answer00.push_back(i);
        }
         for(int i:answer1){
            answer11.push_back(i);
        }
        res.push_back(answer00);
        res.push_back(answer11);
        return res;



        
    }
};