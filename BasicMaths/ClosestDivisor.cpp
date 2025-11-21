class Solution {
public:
    vector<int> closestDivisors(int num) {
        int x[] = {num + 1, num + 2};
        vector<int> closestDivisor;

        for (int n : x) {
            vector<int> currclosest = GetClosestDivisor(n);
            if (closestDivisor.empty() || closestDivisor[2] > currclosest[2]) {
                closestDivisor = currclosest;
            }
        }

        if (!closestDivisor.empty())
            closestDivisor.pop_back();
        return closestDivisor;
    }


    vector<int> GetClosestDivisor(int x) {
        vector<int> v;

        for (int i = sqrt(x); i >= 1; i--) {
            if (x % i == 0) {
                v.push_back(i);          
                v.push_back(x / i);      
                v.push_back((x / i) - i);
                return v;
            }
        }

        return v; 
    }

};