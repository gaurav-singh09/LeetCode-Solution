class Solution {
public:
    int cnt=0;
    void merge(vector<int>& arr, int low, int mid, int high) {
        // Create temp arrays
        vector<int> temp;
        int left = low, right = mid + 1;

        // Merge two sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        // Copy remaining elements from left half
        while (left <= mid)
            temp.push_back(arr[left++]);

        // Copy remaining elements from right half
        while (right <= high)
            temp.push_back(arr[right++]);

        // Copy sorted elements back to original array
        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }

    void cntpairs(vector<int>& arr,int low,int mid , int high ){
        int right=mid+1;
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>2LL*arr[right]){
                right++;
            }
            cnt+=(right-(mid+1));
        }
    }
    // Recursive merge sort function
    void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;

        // Find the middle index
        int mid = low +(high-low)/2;

        // Recursively sort left half
        mergeSort(arr, low, mid);

        // Recursively sort right half
        mergeSort(arr, mid + 1, high);

        cntpairs(arr, low, mid, high);

        // Merge the two sorted halves
        merge(arr, low, mid, high);
    }
    int reversePairs(vector<int>& nums) {
        cnt=0;
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return cnt;
    }
};