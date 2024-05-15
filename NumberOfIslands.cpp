
//input   [[1, 1, 0, 0, 0], [1, 1, 0, 0, 0], [0, 0, 1, 0, 0], [0, 0, 0, 1, 1]]
//output: 3


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int numsIslands(vector<vector<char>>& grid){
            int H = grid.size();
            if(!H)return 0;
            int W = grid[0].size();
            if(!W) return 0;

            int count = 0;

            for(int i = 0; i < H; i++){
                for(int j = 0; j < W; j++){
                    if(grid[i][j] == '1'){
                        count++;
                        dfs(grid, i, j);
                    }
                }
            }

            return count;
        }

        void dfs(vector<vector<char>>& grid, int x,int y){
            grid[x][y] = '0';

            if(x+1 < grid.size() && grid[x+1][y] == '1')
                dfs(grid, x+1, y);
            if(x-1 >= 0 && grid[x-1][y] == '1')
                dfs(grid, x-1, y);
            if(y-1 >= 0 && grid[x][y-1] == '1')
                dfs(grid, x, y-1);
            if(y+1 < grid[0].size() && grid[x][y+1] == '1')
                dfs(grid, x, y+1);
        }
};



int main()
{
    cout<<"Leetcode String shifts"<<endl;

    int row, col;
    cout << "Enter row and col of vector: ";
    cin >> row >> col;
    
    vector<vector<char>> vec(row, vector<char>(col));
    char ch;

    cout << "Enter element in vector: "<<endl;
    for (int i = 0; i < row; i++){
        for(int j =0; j < col; j++){
            cin >> ch;
            vec[i][j] = ch;
        }
        cout <<endl;
    }
    

    Leetcode obj;
    cout<<obj.numsIslands(vec)<<endl;

    return 0;
}