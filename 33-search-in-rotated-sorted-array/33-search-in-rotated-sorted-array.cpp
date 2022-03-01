class Solution {
public:
    int binarySearch(vector<int>& arr, int s, int e, int t){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == t){
            return mid;
        }
        if(arr[mid]<t){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}
int pivot(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid]>= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return s;
}
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    if(nums.size() == 1 || nums[0] == target){
    if(nums[0] == target)
       return 0;
     return -1;
     }
    int piv = pivot(nums,n);
   	int findLeft = binarySearch(nums,0,piv-1,target);
    int findRight = binarySearch(nums,piv,n-1,target);
    return max(findLeft,findRight);  
    }
};