//input "()" output: TRUE
//input "(*)" output: TRUE
//input "(*)))" output: FALSE



#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        bool validParenthesis(string s){
            if(s.length() < 1)
                return true;
            
            int balance = 0;
            
            for(int i = 0; i < s.length(); ++i){
                if(s[i] == ')')
                    balance--;
                else
                    balance++;
                
                if(balance < 0)
                    return false;
            }

            if(balance == 0)
                return true;

            balance = 0;
            for(int i = s.length()-1; i >= 0; --i){
                if(s[i] == '(')
                    balance--;
                else
                    balance++;
                
                if(balance < 0)
                    return false;
            }

            return true;
        }
};



int main()
{
    cout<<"Leetcode - Valid parenthesis string"<<endl;
    string str;
    cout << "Enter string: ";
    cin >> str;
    
    Leetcode obj;
    if(obj.validParenthesis(str))
        cout<<"TRUE";
    else    
        cout<<"FALSE";

    cout<<endl;

    return 0;
}