class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged;
        int i = 0;
        int j = 0;
        int count = 0;
       while(i<m || j<n)
       {
           if(i<m && j<n)
           { 
               if(nums1[i]<nums2[j])
                   merged.push_back(nums1[i++]);
               else
                   merged.push_back(nums2[j++]);
           }
           else
           {
               if(i<m&&j>=n)
                   merged.push_back(nums1[i++]);
               else if(i>=m&&j<n)
                    merged.push_back(nums2[j++]);
           }
                
                
       }
    nums1 = merged;
    }
  
};