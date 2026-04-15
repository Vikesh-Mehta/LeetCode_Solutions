class Solution {
    public int reverse(int x) {
        long reverses = 0;

        while(x != 0){
            reverses = reverses * 10 + (x % 10);
            x /= 10;
        }

        if(reverses > Integer.MAX_VALUE || reverses < Integer.MIN_VALUE){
            return 0;
        }

        return (int) reverses;
    }
}