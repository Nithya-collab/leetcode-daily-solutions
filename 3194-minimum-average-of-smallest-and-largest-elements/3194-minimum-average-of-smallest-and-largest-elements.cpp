class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> v;
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left < right){
            v.push_back((double)(nums[left]+nums[right])/2);
            left++;
            right--;
        }

        if(left == right) v.push_back(nums[left]);

        auto min=std::ranges::min_element(v);

        return *min;
    }
};