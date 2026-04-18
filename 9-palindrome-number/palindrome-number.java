class Solution {
    public boolean isPalindrome(int x) {
        if(x<0 || (x != 0 && x%10 == 0)) return false;
        int rev = 0;
        int nums = x;

        while(nums > rev){
            rev = rev * 10 + (nums%10);
            nums/= 10;
        }
        return nums == rev/10 || nums == rev;
    }
}