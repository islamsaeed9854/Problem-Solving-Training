#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int conv(int n, int x,int y){
        return x*n+y;
    }
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>v;
        int sz = original.size();
        if(n*m!= sz)
        return v;
        
        vector<vector<int>> arr(m, vector<int>(n));
        for(int i = 0; i < m ; i++){
            for(int j= 0 ;j < n;j++){
              arr[i][j] = original[conv(n,i,j)];
            }
        }
        for(int i = 0; i < m ; i++){
            for(int j= 0 ;j < n;j++){
             cout << arr[i][j] <<" ";
            }
            cout << endl;
        }
        return arr;
    }
};
int main()
{
   Solution s;
   vector<int> v = {1,2,3,4};
   s.construct2DArray(v,1,4) ;
     
}