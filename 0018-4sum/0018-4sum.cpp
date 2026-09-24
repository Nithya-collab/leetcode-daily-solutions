class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<int> r;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;++i){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n-2;++j){
                   if(j>i+1 && nums[j] == nums[j-1]) continue;
                   int left=j+1;
                   int right=nums.size()-1;
                   while(left < right){
                       long sum = (long)nums[i]+nums[j]+nums[left]+nums[right];
                       if(sum == target){
                           r.push_back(nums[i]);
                           r.push_back(nums[j]);
                           r.push_back(nums[left]);
                           r.push_back(nums[right]);

                           res.push_back(r);
                           r.clear();

                            left++;
                            right--;
                            while(left < right && nums[left] == nums[left-1]) left++;
                            while(left < right && nums[right] == nums[right+1]) right--;
                       }
                       else if(sum > target) right--;
                       else left++;
                   }
            }
        }
        return res;
    }
};

/*
int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
            }
            */