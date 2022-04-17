class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int beg = 0;
        int end = arr.size() - 1;
        int mid = end/2;
        while(beg<=end){
            if(arr[mid]>arr[mid + 1] && arr[mid] > arr[mid - 1])
                return mid;
            else if(arr[mid] < arr[mid + 1])
                beg = mid + 1;
            else
                end = mid - 1;
            mid = (beg + end)/2;
        }
        return mid;
    }
};