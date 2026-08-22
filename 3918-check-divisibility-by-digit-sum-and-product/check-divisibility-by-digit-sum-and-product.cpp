class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int p=n;
        while(p>0){
            sum+=p%10;
            product*=p%10;
            p/=10;

        }
        if(n%(sum+product)==0) return true;
        else return false;
    }
};