class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        int b = bits.size();

        while(i<b-1){
            if(bits[i] == 1){
                i += 2;
            }else{
                i += 1;
            }
        }
        return i == b-1;
    }
};