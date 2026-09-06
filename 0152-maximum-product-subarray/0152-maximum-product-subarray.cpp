class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int bestmin_ending_i=nums[0];
        int bestmax_ending_i=nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int v1=nums[i];
            int v2=bestmin_ending_i*nums[i];
            int v3=bestmax_ending_i*nums[i];
            bestmax_ending_i=max(v1, max(v2, v3));
            bestmin_ending_i=min(v1, min(v2, v3));

            ans= max(ans, max(bestmin_ending_i, bestmax_ending_i));
            

        }

        return ans;

    }
};