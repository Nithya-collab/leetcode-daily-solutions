class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<float> st;
        if(nums.size() == 2) return 1;
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left < right){
            // if(nums[left] == nums[right]) {
            //     st.insert(nums[left]/2);
            // }

            st.insert((float)(nums[left]+nums[right])/2);
            left++;
            right--;
        }
        return st.size();
    }
};