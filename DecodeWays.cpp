// input  "12"
// output 2

// input  "123"
// output 3

// input  "10"
// output 1

#include <bits/stdc++.h>
using namespace std;

class Leetcode91
{
public:
    int numsDecodings(string s)
    {
        if (s.length() < 1)
            return 0;

        if (s[0] == '0')
            return 1;

        int val1 = 1;
        int val2 = 1;

        for (int i = 1; i < s.length(); ++i)
        {
            int d1 = s[i] - '0';
            int d2 = (s[i - 1] - '0') * 10 + d1;
            int val = 0;

            if (d1 >= 1)
                val += val2;
            if (d2 >= 10 && d2 <= 26)
                val += val1;

            val1 = val2;
            val2 = val;
        }
        return val2;

        return 0;
    }
};

int main()
{
    cout << "Leetcode-91 Decode ways" << endl;
    string str;
    cout << "Enter string: ";
    cin >> str;

    Leetcode91 obj;
    cout << obj.numsDecodings(str) << endl;
    return 0;
}