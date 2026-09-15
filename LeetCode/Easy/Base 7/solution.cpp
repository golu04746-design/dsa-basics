class Solution {
public:
    string convertToBase7(int num) {
        int p=num;
        string v="";
        vector<int>v1;
        if(num==0) return "0";
        
        if (num<0){
            p=-1*p;
            v+="-";
            
        }
        while(p!=0){
            v1.push_back(p%7);
            p=p/7;

        }
            reverse(v1.begin(),v1.end());
            for(int i=0;i<v1.size();i++){
                v=v+to_string(v1[i]);
            }
    
return v;
        
    }
};