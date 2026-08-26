class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        int n=s.size();
        unordered_map<char,int> mp;
        int low=0;
        int res=INT_MIN;
        if(s.size()==0) return 0;
        //i=high
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            
            while(mp.size()<(i-low+1)){
                
                mp[s[low]]--;
                low++;
                if(mp[s[low-1]]==0){
                    //remove
                    
                    mp.erase(s[low-1]);
                }
                
            }
            
            if(mp.size()==(i-low+1)){
                int len=i-low+1;
                res=max(res,len);
            }
        }
        if(res==INT_MIN)
        return -1;
        return res;

    }
};