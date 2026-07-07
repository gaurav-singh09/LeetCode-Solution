class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long add=0;
        
        while(n>0){
            long long r=n%10;
            add+=r;
            if(r>0)sum*=10;
            sum+=r;
            n/=10;
        }
        long long s=0;
        while(sum>0){
            long long p=sum%10;
            s*=10;
            s+=p;
            sum/=10;
        }
        // string s=to_string(sum);
        // reverse(s.begin(),s.end());
        // sum=stoll(s); 
        return s*add; 

        
    }
};