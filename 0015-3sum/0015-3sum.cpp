class Solution {
public:
   
    vector<vector<int>> threeSum(vector<int>& nums) {
       int left=0 , right = nums.size()-1;
       vector<vector<int>> res;
       vector<int> r;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-2;++i){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            left = i+1;
            right=nums.size()-1;
            while(left < right){
                  int sum = nums[i] + nums[left] + nums[right];
                  if(sum == 0) {
                     r.push_back(nums[i]);
                     r.push_back(nums[left]);
                     r.push_back(nums[right]);
             
                     res.push_back(r);
                     r.clear();

                     left++;
                     right--;

                     while(left < right && nums[left] == nums[left-1]) left++;
                     while(left < right && nums[right] == nums[right+1]) right--;
             

                 }
                 else if(sum > 0){
                     right--;
                 }
                 else left++;
            }
       }
       return res;
    }
};