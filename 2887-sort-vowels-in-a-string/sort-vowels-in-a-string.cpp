class Solution {
public:
    string sortVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        vector<char> V;

        for(char c : s){
            if(vowels.count(c)){
                V.push_back(c);
            }
        }

        sort(V.begin(), V.end());

        string result = "";
        int vI = 0;
        for(char c : s){
            if(vowels.count(c)){
                result.push_back(V[vI++]);
            } else{
                result.push_back(c);
            }
        }
        return result;
    }
};