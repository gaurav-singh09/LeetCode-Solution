class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int>v(10,0);
        for(int d:digits){
            v[d]++;
        }
        int ans=0;
        for(int i=100;i<=998;i+=2){
            int ones=i%10;
            int tens=(i/10)%10;
            int hundreds=i/100;

            v[ones]--;
            v[tens]--;
            v[hundreds]--;
            if(v[ones]>=0 && v[tens]>=0 && v[hundreds]>=0)ans++;

            v[ones]++;
            v[tens]++;
            v[hundreds]++;
        }
        return ans;
    }
};