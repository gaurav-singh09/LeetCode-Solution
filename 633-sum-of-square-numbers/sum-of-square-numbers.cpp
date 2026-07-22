class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  root=sqrt(c);
        long long  i=0;
        long long  j=root;
        while(i<=j){
            long long t=(i*i)+(j*j);
            if(t==c) return true;
            else if (t<c)i++;
            else j--;
        }

        return false;
        
    }
};