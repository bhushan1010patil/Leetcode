
//input   [ ["1","0","1","0","0"], ["1","0","1","1","1"], ["1","1","1","1","1"], ["1","0","1","0","0"], ["1","0","0","1","0"] ]
//output: 4


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int maximalSquare(vector<vector<char>>& matrix){
            int r = matrix.size();
            if(r == 0) return 0;
            int c = matrix[0].size();
            if(c == 0) return 0;

            int max_square = 0;
            vector<vector<int>> sol(r, vector<int>(c, 0));
            for(int i = 0; i < r; ++i){
                for(int j = 1; j < c; ++j){
                    if(i == 0 || j == 0){
                        if(matrix[i][j] == '1'){
                            sol[i][j] = 1;
                            max_square = max(max_square, sol[i][j]);
                        }
                    }
                    else{
                        if(matrix[i][j] == '1'){
                            sol[i][j] = 1 + min({sol[i-1][j-1], sol[i-1][j], sol[i][j-1]});
                            max_square = max(max_square, sol[i][j]);
                        }
                    }
                }
            }

            return max_square*max_square;
        }
};



int main()
{
    cout<<"Leetcode String shifts"<<endl;

    int row, col;
    cout << "Enter row and col of vector: ";
    cin >> row >> col;
    
    vector<vector<char>> vec(row, vector<char>(col));
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
    cout<<obj.maximalSquare(vec)<<endl;

    return 0;
}