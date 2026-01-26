class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());   
        int minDiff = INT_MAX;

        for(size_t i=1; i<arr.size(); i++){
            minDiff = min(minDiff, arr[i] - arr[i-1]);
        }

        for(size_t i=1; i<arr.size(); i++){
            if(arr[i] - arr[i-1] == minDiff){
                result.push_back({arr[i-1], arr[i]});
            }
        }
        return result;
    }
};