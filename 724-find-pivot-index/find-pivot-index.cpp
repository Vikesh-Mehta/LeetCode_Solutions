class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tSum = 0;
        for(int num : nums){
            tSum += num;
        }
        int lSum = 0;

        for(int i=0; i<nums.size(); i++){
            int rSum = tSum - lSum - nums[i];
            if(lSum == rSum) return i;
            lSum += nums[i];
        }
        return -1;
    }
};