class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i] == nums[i+1]){
                nums[i]=2*nums[i];
                nums[i+1]=0;
            }
        }

        // for(int wt=0;wt<nums.size();++wt){
        //     for(int rd=wt+1;rd<nums.size();++rd){
        //         if(nums[wt] == 0 && nums[rd] != 0){
        //             swap(nums[wt],nums[rd]);
        //         }
        //     }
        // }
       int i=0 , j=1;
       while(j < nums.size()){
           if(nums[i] == 0){
               if(nums[j] != 0){
                    swap(nums[i],nums[j]);
                    ++i;
                    ++j;
               }
               else ++j;
           }
           
               else if(nums[i] != 0) {
                ++i;
                ++j;
               }
            //    else if(nums[j] == 0)  ++j;
       }
        return nums;
    }
};