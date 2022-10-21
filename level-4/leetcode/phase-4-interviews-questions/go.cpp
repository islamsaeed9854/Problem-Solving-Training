#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < matrix.size(); k++)
                    {
                        matrix[k][j] = matrix[k][j] != 0 ? 'a' : 0;
                    }
                    for (int k = 0; k < matrix[i].size(); k++)
                    {
                        matrix[i][k] = matrix[i][k] != 0 ? 'a' : 0;
                    }
                }
            }
        }
        
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 'a')
                {
                   matrix[i][j]=0;
                }
            }
        }
    }
};
int main(){
    cout << INT_MIN << endl;
    cout <<   (int)pow(-2,31) << endl;
}