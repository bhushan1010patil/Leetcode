//input 5 output: 2



#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int findComplement(int num){    
            if(num == 0) return 1;
            int num_bits = log2(num) + 1;
            int mask = (unsigned)(1 << num_bits) - 1;
            return num ^ mask;
        }
};



int main()
{
    cout<<"Leetcode Number complement"<<endl;
    int n;
    cout << "Enter no: ";
    cin >> n;
    
    Leetcode obj;
    cout<<obj.findComplement(n)<<endl;

    return 0;
}