class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        while(left <= right){
            if(nums[left]%2==0) left++;
            else if (nums[right]%2!=0) right--;
            else {
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
              
        }
        // int i=0;
        // for(int j=0;j<nums.size();++j){
        //     if(nums[j]%2 == 0){
        //           swap(nums[i],nums[j]);
        //           i++;
        //     }
        // }
        return nums;
    }
};