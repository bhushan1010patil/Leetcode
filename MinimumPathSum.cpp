
//input   [ [1, 3, 1], [1, 5, 1], [4, 2, 1] ]
//output: 7


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int minPathSum(vector<vector<int>>& grid){
            int m = grid.size();
            if(m == 0) return 0;
            int n = grid[0].size();
            if(n == 0) return 0;

            vector<vector<int>> paths(grid);

            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(i-1 >= 0 && j-1 >= 0)
                        paths[i][j] += min(paths[i-1][j], paths[i][j-1]);
                    else{
                        if(i-1 >= 0)
                            paths[i][j] += paths[i-1][j];
                        if(j-1 >= 0)
                            paths[i][j] += paths[i][j-1];
                    }
                }
            }
            return paths[m-1][n-1];
        }
};



int main()
{
    cout<<"Leetcode String shifts"<<endl;

    int row, col;
    cout << "Enter row and col of vector: ";
    cin >> row >> col;
    
    vector<vector<int>> vec(row, vector<int>(col));
    int ele;

    cout << "Enter element in vector: "<<endl;
    for (int i = 0; i < row; i++){
        for(int j =0; j < col; j++){
            cin >> ele;
            vec[i][j] = ele;
        }
        cout <<endl;
    }
    

    Leetcode obj;
    cout<<obj.minPathSum(vec)<<endl;

    return 0;
}