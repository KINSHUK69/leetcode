class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int s;        
        for(auto i=nums.begin();i!=nums.end();++i){            
            s+=*i;
            sum.push_back(s);            
        }
        return sum;       
                
        
    }
};
