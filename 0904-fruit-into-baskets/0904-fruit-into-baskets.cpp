class Solution {
public:
    int totalFruit(vector<int>& s) {
        

        int n=s.size();
        int k=2;
        unordered_map<int,int> mp;
        int low=0;
        int res=INT_MIN;
        //i=high
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            
            while(mp.size()>k){
                
                mp[s[low]]--;
                low++;
                if(mp[s[low-1]]==0){
                    //remove
                    
                    mp.erase(s[low-1]);
                }
                
            }
            
            if(mp.size()<=k){
                int len=i-low+1;
                res=max(res,len);
            }
        }
        if(res==INT_MIN)
        return -1;
        return res;
    }
};