#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int prod = 1, ze = 0;
        for (auto i : nums)
        {
            if (i)
                prod *= i;
            else
                ze++;
        }
        vector<int> ans;
        for (auto i : nums)
        {
            if (ze >= 2)
                ans.push_back(0);
            else if (i && ze == 1)
                ans.push_back(0);
            else if (!i && ze == 1)
                ans.push_back(prod);
            else
                ans.push_back(prod / i);
        }

        return ans;
    }
};
int main()
{
}