
//input "abc" [[0,1], [1,2]] output: "cab"
//input "abcdefg" [[1,1], [1,1], [0,2], [1,3]]  output: "efgabcd"


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        string stringShift(string s, vector<vector<int>>& shift){
            if(s.length() <= 1)
                return s;

            int left_shift = 0;
            int right_shift = 0;
            string result = "";

            for(vector<int> v : shift){
                if(v[0] == 0)
                    left_shift += v[1];
                else
                    right_shift += v[1];
            }

            if(left_shift > right_shift){
                left_shift -= right_shift;
                left_shift %= s.length();
                result += s.substr(left_shift, s.length() - left_shift);
                result += s.substr(0,left_shift);
            }else
            {
                right_shift -= left_shift;
                right_shift %= s.length();
                result += s.substr(s.length() - right_shift, right_shift);
                result += s.substr(0, s.length() - right_shift);
            }

            return result;
        }
};



int main()
{
    cout<<"Leetcode String shifts"<<endl;

    int row, col; string str;
    cout<<"Enter string: ";
    cin>> str;
    
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
    cout<<obj.stringShift(str, vec)<<endl<<endl;

    return 0;
}