class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<=n; i++){
            int l = i;
            int r = n - i;
            if(!containsZero(l) && !containsZero(r)){
                return {l, r};
            }
        }
        return {};
    }

    bool containsZero(int n){
        string str = to_string(n);
        return str.find('0') != string::npos;
    }
};