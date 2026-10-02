class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int clset = nums[0]+nums[1]+nums[2];
       int res = 0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;++i){
        //    if(i>0&&nums[i]==nums[i-1]) continue;
            int left = i+1;
            int right=nums.size()-1;
            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
                int temp = abs(sum-target);
                if(abs(sum-target) < abs(clset-target)) clset = sum;
                if(sum == target) return sum;
                else if(sum > target) right--;
                else left++;
                
            }
       } 
       return clset;
    }
};