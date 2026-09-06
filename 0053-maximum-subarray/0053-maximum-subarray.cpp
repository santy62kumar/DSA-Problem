class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int bestending_i=nums[0];
        int ans =nums[0];
        for(int i=1;i<nums.size();i++){

            int v1=bestending_i+nums[i];
            int v2=nums[i];
            bestending_i=max(v1, v2);

            ans=max(bestending_i, ans);


        }

        return ans;
    }
};