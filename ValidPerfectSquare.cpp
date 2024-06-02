//input: 25  Output: true
//input: 26  Output: false


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isPerfectSquare(int num){
        int lastDigit = num % 10;
        if(lastDigit == 2 || lastDigit == 3 || lastDigit == 7 || lastDigit == 8)
            return false;
        
        int left = 1;
        int right  = num;
        while(left <= right){
            long long int mid = left + (right-left)/2;
            long long int sq = mid * mid;
            if(sq == num)
                return true;
            else if(sq < num)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};


int main(){
    cout<<"Leetcode - Valid perfect square"<<endl;
    int no;
    cout<<"Enter No: ";
    cin>>no;

    Solution obj;
    if(obj.isPerfectSquare(no))
        cout<<"true";
    else
        cout<<"false";
    
    cout<<endl;
    return 0;
}