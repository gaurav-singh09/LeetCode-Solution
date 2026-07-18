class Solution {
public:
    // int gcd(int mini, int maxi){
    //     int a=1;
    //     int i=1;
    //     while(i<=mini){
    //         if(maxi%i==0) a=i;
    //         i++;
    //     }
    //     return a;
    // }
    int findGCD(vector<int>& arr) {
        int n=arr.size();
        int mini=arr[0];
        int maxi=arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]<mini) mini=arr[i];
            if(arr[i]>maxi) maxi=arr[i];
            
        }
        return gcd(mini,maxi);
        
    }
};