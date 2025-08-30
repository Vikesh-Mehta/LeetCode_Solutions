class Solution {
public:
    int mds(string &word1, string &word2, int m, int n, vector<vector<int>> &dp){
        if(m == 0) return n;
        if(n == 0) return m;

        if(dp[m][n] != -1) return dp[m][n];

        if(word1[m-1] == word2[n-1]){
            return dp[m][n] = mds(word1, word2, m-1, n-1, dp);
        }

        return dp[m][n] = 1 + min({mds(word1, word2, m, n-1, dp), mds(word1, word2, m-1, n, dp), mds(word1, word2, m-1, n-1, dp)});
    }
    
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return mds(word1, word2, m, n, dp);
    }
};