class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        for(int i=0;i<nums1.size();++i){
            for(int j=0;j<nums1[i].size();++j){

            }
        }

        int i=0;
        int x=0;
        while(i < nums1.size() && x < nums2.size()){
            if(nums1[i][0] < nums2[x][0]){
                 result.push_back(nums1[i]);
                 ++i;
            }
            else if(nums1[i][0] > nums2[x][0]){
                result.push_back(nums2[x]);
                ++x;
            }
            else {
                int temp = nums1[i][1]+nums2[x][1];
                nums1[i][1]= temp;
                result.push_back(nums1[i]);
                ++i;
                ++x;
            }
        }
        while(i<nums1.size()){
            result.push_back(nums1[i]);
            ++i;
        }

        while(x < nums2.size()){
            result.push_back(nums2[x]);
            ++x;
        }

        return result;
    }
};