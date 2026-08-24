class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int high=0, low=0;
        int sum=0;
        int res=INT_MAX;
        bool temp=false;

        while(high<n){
            sum+= nums[high];

            while(sum>=target){
                temp=true;
                int len= high-low+1;
                res=min(len, res);
                sum-=nums[low];
                low++;
            }
            high++;


        }
        if(temp)
        return res;
        else return 0;
    }
};