class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        int nodel=nums[0];
        int onedel= INT_MIN;
        int ans =nums[0];

        for(int i=1;i<nums.size();i++){

            int pevnodel= nodel;
            int prevonedel=onedel;

            nodel= max(pevnodel+nums[i], nums[i]);

            if(prevonedel==INT_MIN){
                onedel= pevnodel;
            }
            else{
                onedel=max(pevnodel, prevonedel+nums[i]);

            }
            

            ans=max(ans, max(onedel, nodel));
        }

        return ans;
    }
};