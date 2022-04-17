class Solution {
public:
    int findLeft(vector<int>& nums, int target, int n) {
        int beg = 0;
        int end = n - 1;
        int mid = (beg+end)/2;
        int ans = -1;
        while(beg<=end){
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target)
                end = mid -1;
            else
                beg = mid + 1;
            mid = (beg + end)/2;
        }
        return ans;
    }
    
    int findRight(vector<int>& nums, int target, int n) {
        int beg = 0;
        int end = nums.size() - 1;
        int mid = beg + (end - beg)/2;
        int ans = -1;
        while(beg<=end){
            if(nums[mid] == target){
                ans = mid;
                beg = mid + 1;
            }
            else if(nums[mid] > target)
                end = mid -1;
            else
                beg = mid + 1;
            mid = beg + (end - beg)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2);
        v[0] = findLeft(nums, target, nums.size());
        v[1] = findRight(nums, target, v[0]);
        return v;
    }
};