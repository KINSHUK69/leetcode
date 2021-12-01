class Solution 
{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> temp;
        for(auto i=0;i!=nums.size();i++)
        {
             for(auto j=i+1;j!=nums.size();j++)
             {
                 if(nums[i]+nums[j]==target)
                 {
                    temp.push_back(i);
                    temp.push_back(j);
                     break;
                      
                 }
                  break;
            
             }
        
       }
        return temp;
}
};
