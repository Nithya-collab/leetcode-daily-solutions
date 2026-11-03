class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        // if(nums.size() <= 1) return {0,0};
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                // if(i!=j){
                    if(abs(i-j) >= indexDifference && abs(nums[i]-nums[j]) >= valueDifference){
                        return {i,j};
                    // }
                }
            }
        }
        if(nums.size()-1 >= indexDifference && nums[0]-nums[0] >= valueDifference) return {0,0};
        return {-1,-1};
    }
};