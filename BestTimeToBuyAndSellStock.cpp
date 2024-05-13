

//input  [7, 1, 5, 3, 6, 4]
//output 7
//explaination [4, -1, 2, 1]

#include <bits/stdc++.h>
using namespace std;

class Leetcode122
{
public:
    int maxProfit(vector<int>& prices){
        if(prices.size()<=1)
        return 0;

        int buy = prices[0];
        int profit =0;
        for(int i=1;i<prices.size(); ++i){
            if(prices[i]<prices[i-1]){ //price drop
                profit += prices[i-1] - buy;
                buy = prices[i];
            }
        }
        profit += prices[prices.size()-1]-buy;
        return profit;
    }
};

int main()
{
    cout << "Leetcode-53 Maximum sub array" << endl;

    int n;
    cout << "Enter no of prices: ";
    cin >> n;
    cout << endl;
    vector<int> v;
    int ele;

    cout << "Enter prices: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;

    // cout << "Element in vector are: ";
    // for (auto &p : v)
    // {
    //     cout << p << " ";
    // }
    //cout << endl;
    Leetcode122 obj;

    cout << obj.maxProfit(v)<<endl;
    ;

    return 0;
}