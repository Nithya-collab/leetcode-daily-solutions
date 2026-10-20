class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1Ptr=0,n2Ptr=0;

        while(n1Ptr < nums1.size() && n2Ptr < nums2.size()){
            if(nums1[n1Ptr] == nums2[n2Ptr]) return nums1[n1Ptr];
            else if(nums1[n1Ptr] > nums2[n2Ptr]) {
                n2Ptr++;
            }
            else n1Ptr++;
        }   
        return -1;
    }
};