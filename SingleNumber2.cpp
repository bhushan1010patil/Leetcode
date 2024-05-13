
//input  [2, 2, 3, 2]
//output 3

#include <bits/stdc++.h>
using namespace std;

class Leetcode137
{
public:
    int singleNumber(vector<int>& nums){
        /*
        int result =0;
        int bits[32]={0};

        for(int i = 0; i < 32; ++i){
            for(int n : nums){
                bits[i] += n >> i & 1;
                bits[i] %= 3;
            }
        }

        for(int i = 0; i < 32; ++i){
            result |= (bits[i] << i);
        }
        
        return result;
        */

       int ones = 0, twos = 0, thrice = 0;
       for(int n : nums){
            twos = twos | (ones & n);
            ones = ones ^ n;
            thrice = ones & twos;
            ones &= ~thrice;
            twos &= ~thrice;
       }
       return ones;
    }
};

int main()
{
    cout << "Leetcode-137 Single number" << endl;

    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    cout << endl;
    vector<int> v;
    int ele;

    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;

    Leetcode137 obj;
    cout << obj.singleNumber(v)<<endl;
    return 0;
}