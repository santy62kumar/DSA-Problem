class Solution {
public:

    int find_num(int n){
        int prod=1;

        while(n){
            int temp=n%10;
            n=n/10;
            prod*=temp;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {
        
        for(int i=n;i<=n+10; i++){

            if(find_num(i)%t==0){
                return i;
            }
        
        }
        
        return -1;
    }
};