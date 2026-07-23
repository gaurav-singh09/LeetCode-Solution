class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        if(n==2) return 2;
        int msb=0;
        while((1<<(msb+1))<=n){
            msb++;
        }

        return 1<<(msb+1);
    }
};