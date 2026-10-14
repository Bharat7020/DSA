class Solution {
public:
    bool isPalindrome(int x) {
        // A negative number is not a palindrome, and numbers ending with zero (except zero itself) aren't palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int ans = 0;
        int original = x; // Store the original value of x
        
        while (x > 0) {
            int digit = x % 10;  // Get the last digit of x
            
            // Check for overflow/underflow before updating ans
            if (ans > INT_MAX / 10) {
                return false; // Return false if reversing x would cause overflow
            }
            
            ans = ans * 10 + digit; // Append the digit to the reversed number
            x /= 10; // Remove the last digit from x
        }
        
        // Compare the reversed number with the original number
        return original == ans;
    }
};
