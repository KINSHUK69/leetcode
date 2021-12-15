
class Solution {
public:
    vector<int> countBits(int n) {
     vector<int>ans;
        int count;
        for(int i=0;i<=n;i++){
            count=0;
            int num=i;
            while(num>0){
                if(num&1){
                count++;
               }
            num=num>>1;
            }
            ans.push_back(count);
        }
    
        return ans;
    }
};
