class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg = 0;
        int end = nums.size() - 1;
        int mid = 0;
       while(end>=beg){
           int mid = (beg + end)/2;
           if(nums[mid] > target)
               end = mid - 1;
           else if(nums[mid] < target)
               beg = mid + 1;
           else
                return mid;
       }
        return -1;
    }
};