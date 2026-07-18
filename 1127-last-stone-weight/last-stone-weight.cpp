class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {

        while(arr.size()>1){
            
            sort(arr.begin(),arr.end());
            int i=arr[arr.size()-2];
            int j=arr[arr.size()-1];
            arr.pop_back();
            arr.pop_back();
            if((j-i)!=0){
                arr.push_back(j-i);
            }
            else continue;

        }
        return arr.empty()?0: arr[0];
    }
};