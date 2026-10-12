class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {

        int i=0;
        int j=0;
        vector<vector<int>> res;
        

        while(i<f.size()&& j<s.size()){

            int str1=f[i][0];
            int end1=f[i][1];
            int str2=s[j][0];
            int end2=s[j][1];

            
            if(str1<=str2){
                if(end1>=str2){

                    end1=min(end1, end2);
                    str1= max(str1, str2);
                    res.push_back({str1, end1});
                }
                
                
                

            }
            else{
                if(end2>=str1){

                    end2=min(end1, end2);
                    str2= max(str1, str2);
                    res.push_back({str2, end2});
                }

            }

            if(f[i][1]< s[j][1]){
                i++;
            }else{
                j++;
            }


        }
        return res;


        
    }
};