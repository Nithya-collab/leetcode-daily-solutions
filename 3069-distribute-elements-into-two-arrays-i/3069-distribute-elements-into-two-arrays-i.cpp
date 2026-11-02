class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        // step 1 : declare two vectors
        //step 2 : fixed nums[1] goest to arr1 nums[2] goes to arr2
        //steps 3 : balace operations rules : arr1[arr1.size()-1] > arr2[arr2.size()-1] append current value to arr1 else arr2;
        // step 4 : concate both arr => arr1 + arr2 
        // step 5 : stop

        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        
        for(int i=2;i<nums.size();++i){
            if(arr1[arr1.size()-1] > arr2[arr2.size()-1]) arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }

        if(arr2.size() > 0) for(int x : arr2) arr1.push_back(x);

        return arr1;
    }
};