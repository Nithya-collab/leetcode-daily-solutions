class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left < right){
            if(nums[left] < 0){
                if(abs(nums[left]) == nums[right])
                     return nums[right];
                 else if(abs(nums[left]) > nums[right]){
                left++;
            }
            else right--;  
            }
           else left++;
        }
        return -1;
    }
};