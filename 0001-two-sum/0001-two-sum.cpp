class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    for(int i=0;i<nums.size();++i){
    //     for(int j=i+1;j<nums.size();++j){
    //         if(nums[i]+nums[j] == target) return {i,j};
    //     }
    //    }
    //    return {};

//    unordered_map<int,int> ump;
//    for(int i=0;i<nums.size();++i){
//        int need = target-nums[i];
//        if(ump.find(need)!=ump.end()) { 
//           return {ump[need],i};
//        }

//        ump[nums[i]]=i;
//    }
//   return {};

     unordered_map<int,int> ump;
     for(int i=0;i<nums.size();++i){
         int t = target-nums[i];

         if(ump.find(t) != ump.end()){
              return {ump[t],i};
         }

         ump[nums[i]]=i;
     }
      return {};
    }
};