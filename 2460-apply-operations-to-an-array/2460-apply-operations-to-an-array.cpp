class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i] == nums[i+1]){
                nums[i]=2*nums[i];
                nums[i+1]=0;
            }
        }

        for(int wt=0;wt<nums.size();++wt){
            for(int rd=wt+1;rd<nums.size();++rd){
                if(nums[wt] == 0 && nums[rd] != 0){
                    swap(nums[wt],nums[rd]);
                }
            }
        }
        return nums;
    }
};