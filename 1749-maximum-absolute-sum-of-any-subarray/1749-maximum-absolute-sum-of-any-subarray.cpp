class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minsum=nums[0];
        int maxsum=nums[0];
        int ans=abs(nums[0]);

        for(int i=1;i<nums.size();i++){

            int v1=max(maxsum+nums[i], nums[i]);
            int v2= min(minsum+nums[i], nums[i]);

            minsum= v2;
            maxsum=v1;

            ans= max(max(abs(v1), abs(v2)), ans);

        }

        return ans;


    }
};