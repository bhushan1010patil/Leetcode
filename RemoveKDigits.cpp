
//input num: "1432219" K: 3  output:  "1219"
//input num: "10200" K: 1  output:  "200"

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeKdigits(string num, int k){
       if(k == num.length())
            return "0";
        
        int  i = 0;
        while(k > 0){
            i = (i > 0) ? (i - 1) : 0;
            while(i < num.length()-1 && num[i] <= num[i+1])
                i++;
            
            num.erase(num.begin() + i);
            k--;
        }
        //"00054" --> "54", "000" --> ""
        auto non_zero = num.find_first_not_of("0");
        num.erase(0, non_zero);

        if(num.length() == 0)
            return "0";
       return num;
    }
};

int main()
{
    cout << "Leetcode-137 Single element in sorted array" << endl;

    string num;
    cout << "Enter string of nums: ";
    cin >> num;
    cout << endl;
    int k;
    cout << "Enter K: ";
    cin >> k;
    cout << endl;

    Solution obj;
    cout << obj.removeKdigits(num, k)<<endl;
    return 0;
}