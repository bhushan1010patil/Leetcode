
//input 5 7  output: 4
//input 5 12  output: 0
//input 17 28  output: 16


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int rangeBitwiseAND(int m, int n){
            int shifts = 0;
            while (m < n){
                m >>= 1;
                n >>= 1;
                shifts++;
            }
        
            return n << shifts;
        }
};



int main()
{
    cout<<"Leetcode - Bitwise AND of number range"<<endl;
    int m, n;
    cout << "Enter m & n: ";
    cin >>m >> n;
    
    Leetcode obj;
    cout<<" "<<obj.rangeBitwiseAND(m,n);
    cout<<endl;

    return 0;
}