class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxA = 0, maxD = 0;
        for(int i=0; i<dimensions.size(); i++){
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            int currD = l*l + w*w;

            if(currD > maxD || (currD == maxD && l*w>maxA)){
                maxD = currD;
                maxA = l*w;
            }
        }
        return maxA;
    }
};