//TestCase 1 input "ab#c" "ad#c"   output True 
//TestCase 1 input "ab##c" "ad#c"   output False 


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        bool backspaceCompare(string S, string T){
            stack<char> s1, s2;

            for(char c : S){
                if(c != '#')
                    s1.push(c);
                else{
                    if(!s1.empty())
                        s1.pop();
                }
            } 

            for(char c : T){
                if(c != '#')
                    s2.push(c);
                else{
                    if(!s2.empty())
                        s2.pop();
                }
            }            

            while(!s1.empty() && !s2.empty()){
                char c1 = s1.top();
                s1.pop();
                char c2 = s2.top();
                s2.pop();

                if(c1 != c2)
                    return false;
            }

            if(!s1.empty() || !s2.empty())
                return false;

            return true;
        }
};



int main()
{
    cout<<"Leetcode Backspace string"<<endl;
    string s,t;
    cout << "Enter strings: ";
    cin >>s >>t;
    
    Leetcode obj;
    if(obj.backspaceCompare(s,t))
        cout<<"True";
    else
        cout<<"False";
    
    cout<<endl;

    return 0;
}