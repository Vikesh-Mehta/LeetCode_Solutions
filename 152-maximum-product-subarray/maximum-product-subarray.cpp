class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) return 0;

        int cMax = nums[0];
        int cMin = nums[0];
        int mProd = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] < 0){
                swap(cMax, cMin);
            }

            cMax = max(nums[i], cMax * nums[i]);
            cMin = min(nums[i], cMin * nums[i]);

            mProd = max(cMax, mProd);
        }
        return mProd;
    }
};