/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
 class Solution {
public:
    bool isPalindrome(int x) {
        int oldNum = x;
        long revNum = 0;
        while(x>0){
            int digit=x%10; 
            revNum = revNum*10 + digit;
            x=x/10;// 12 1 0
        }
        if(oldNum==revNum)return true;
        else return false;
    }

    bool isPalindromeOptimal(int x){
    if (x < 0) return false;
        unsigned int h = x;
        unsigned int k = 0;
        while(h > 0) {
            k = k * 10 + h % 10;
            h /=10;
        }
        return k == x;
}
};