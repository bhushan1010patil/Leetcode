//input: aA aAAbbbb  Output: 3


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int numJewelsInStones(string J, string S){
        unordered_set<char> jewels;
        for(char c : J)
            jewels.insert(c);

        int count = 0;
        for(char c : S)
            if(jewels.find(c) != jewels.end())
                count++;

        return count;
    }
};


int main(){
    cout<<"Leetcode - Jewels and Stones"<<endl;
    string jewels, stones;
    cout<<"Enter the Jewels & Stones: ";
    cin>>jewels>>stones;

    Solution obj;
    cout<<obj.numJewelsInStones(jewels, stones);
    cout<<endl;
    return 0;
}