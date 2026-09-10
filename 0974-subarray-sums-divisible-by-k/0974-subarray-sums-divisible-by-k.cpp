class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int res = 0;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            int last_sum = sum%k;
            if(last_sum < 0) last_sum += k;   

            if(mp.find(last_sum) != mp.end()) {
                res += mp[last_sum];
            }

            mp[last_sum]++;
        }

        return res;
    }
};