class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        int larger=INT_MIN;
        while(left < right){
            larger=(nums[left]+nums[right]) > larger ? nums[left]+nums[right] : larger;

            left++;
            right--;
        }
        return larger;
    }
};