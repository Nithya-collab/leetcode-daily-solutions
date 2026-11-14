class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int x : nums){
            if(x >= 0) pos.push_back(x);
            else neg.push_back(x);
        }

        int pPtr=0 , nPtr=0;
        int i=0;
        while(pPtr < pos.size() && nPtr < neg.size()){
            if(pPtr <= nPtr){
                 nums[i++] = pos[pPtr++];
            }
            else nums[i++]=neg[nPtr++];
        }
        while(pPtr < pos.size()){ nums[i++] = pos[pPtr++];}
        while(nPtr < neg.size()){ nums[i++] = neg[nPtr++];}
        return nums;
    }
};