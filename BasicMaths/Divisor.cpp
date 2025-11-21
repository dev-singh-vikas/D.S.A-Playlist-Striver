#include <vector>
class Solution {
public:
    bool isThree(int n) {
       if(n<=3) return false;
       int count=2;
       for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            if((n/i)==i)count++;
            else count+=2;
        }
        if(count>3)return false;
       }
       return count==3;
    }

   int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum+=GetFourDivisorSum(nums[i]);
        }
        return sum;
    }

    int GetFourDivisorSum(int x){
        if(x<6)return 0;
        
        unsigned int divCount = 2;
        int result=1+x;

        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                if(i*i != x){
                    result = result + i + (x/i);
                    divCount+=2;
                }else{
                    result = result + i;
                    divCount++;
                }
            }
            if(divCount>4) return 0;
        }
        return divCount == 4 ? result : 0;
    }
};