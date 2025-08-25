class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()){
            return {};
        }
        vector<int> result;
        int m = mat.size();
        int n = mat[0].size();
        int r =0 ,c = 0;
        bool goingUp = true;
        for (int i = 0; i < m * n; ++i) {
            result.push_back(mat[r][c]);

            if (goingUp) {
                r--;
                c++;
                if (r < 0 || c >= n) { 
                    if (c >= n) { 
                        c = n - 1;
                        r += 2;
                    } else { 
                        r = 0;
                    }
                    goingUp = false;
                }
            } else { 
                r++;
                c--;
                if (r >= m || c < 0) { 
                    if (r >= m) { 
                        r = m - 1;
                        c += 2;
                    } else { 
                        c = 0;
                    }
                    goingUp = true;
                }
            }
        }
        return result;
    }
};