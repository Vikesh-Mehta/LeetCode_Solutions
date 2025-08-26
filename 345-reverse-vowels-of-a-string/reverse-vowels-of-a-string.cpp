class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> mapp = {'a','A','e','E','i','I','o','O','u','U'};
        int left = 0; int right = s.length() - 1;

        while(left < right){
            while(left < right && mapp.find(s[left]) == mapp.end()){
                left ++;
            }

            while(left < right && mapp.find(s[right]) == mapp.end()){
                right --;
            }

            if(left < right){
                swap(s[left], s[right]);
                left ++;
                right--;
            }
        }
        return s;
    }
};