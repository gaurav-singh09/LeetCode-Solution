class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int m) {
        int n=bookings.size();
        vector<int>v(m,0);
        for(int i=0;i<n;i++){
            int s=bookings[i][0]-1;
            int e=bookings[i][1]-1;
            while(s<=e){
                v[s]+=bookings[i][2];
                s++;
            }
        }
        return v;
    }
};