//input "abcdab" "bdacb"  output: 4


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int longestCommonSubsequence(string str1, string str2){
            int m = str1.length();
            int n = str2.length();

            vector<vector<int>> lcs(m+1, vector<int>(n+1, 0));
            for(int i = 1; i <= m; i++){
                for(int j = 1; j <= n; ++j){
                    if(str1[i-1] == str2[j-1])
                        lcs[i][j] = 1 + lcs[i-1][j-1];
                    else
                        lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
                }
            }    

            return lcs[m][n];
        }
};

int main()
{
    cout <<"Leetcode - Longest common subsequence"<<endl;
    
    string str1, str2;
    cout << "Enter str1: ";
    cin >> str1;
    cout << "Enter str2: ";
    cin >> str2;
    
    Leetcode obj;
    cout<<obj.longestCommonSubsequence(str1, str2);
    cout<<endl;

    return 0;
}