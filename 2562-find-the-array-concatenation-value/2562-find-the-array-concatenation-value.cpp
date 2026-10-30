class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum = 0;
        int left=0,right=nums.size()-1;
        while(left < right){
            sum += stoll(to_string(nums[left])+to_string(nums[right]));
            left++;
            right--;
        }
        left == right ? sum+=nums[left] : 0;
        return sum;
    }
};