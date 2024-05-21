//input "leetcode" output: 0
//input "abcdba" output: 2


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int firstUnique(string str){
            int count[26] = {0};

            for(char c : str)
                count[c - 'a'] += 1;
            
            for(int i = 0; i < str.length(); ++i)
                if(count[str[i] - 'a'] == 1)
                    return i;

            return -1;
        }
};



int main()
{
    cout<<"Leetcode First unique character in string"<<endl;
    string s;
    cout << "Enter string: ";
    cin >> s;
    
    Leetcode obj;
    cout<<obj.firstUnique(s)<<endl;

    return 0;
}