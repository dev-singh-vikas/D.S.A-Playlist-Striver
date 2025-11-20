#include <math.h>

class Solution {
public:
    int primePalindrome(int n) {
        if (n <= 2) return 2;
        if (n <= 3) return 3;
        if (n <= 5) return 5;
        if (n <= 7) return 7;
        if (n <= 11) return 11;

        for (int i = 1; i < 200000; i++) {
            int p = makePalindrome(i);
            if (p >= n && isPrime(p))
                return p;
        }
        return -1;
    } 
    
    bool isPrime(int n) 
    {
        if (n < 2) return false;
        if (n % 2 == 0) return n == 2;
        int r = sqrt(n);
        for (int i = 3; i <= r; i += 2)
            if (n % i == 0) return false;
        return true;
    }

    int makePalindrome(int x) 
    {
        int res = x;
        x /= 10;
        while (x > 0) {
            res = res * 10 + (x % 10);
            x /= 10;
        }
        return res;
    }
};

class SoutionOptimal{
public:
    bool isPrime(int n)
    {
        for(int i=2;i*i<=n;i++)
            if(n%i==0) return false;
        return true;
    }
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size()-1;
        while(i<=j)
        {
            if(s[i] != s[j]) return false;
            i++, j--;
        }
        return true;
    }
    int primePalindrome(int n) 
    {
        if(n <= 2) return 2;
        if(n >= 9989900) return 100030001;
        if(n <= 11 and isPrime(n)) return n;

        for(int i=n+1;i<=2e8+5;i++)
        {
            if(isPrime(i) and isPalindrome(to_string(i)))
                return i;
        }
        return -1;
    }

}