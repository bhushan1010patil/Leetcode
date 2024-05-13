

//input  [-2, 1, -3, 4, -1, 2, 1, -5,4]
//output 6
//explaination [4, -1, 2, 1]

#include <bits/stdc++.h>
using namespace std;

class Leetcode53
{
public:
    int maxSubArray(vector<int>& nums){
        if(nums.size() == 0)
        return 0;

        int sum_max = nums[0];
        int sum_including_current = nums[0];

        for(int n:nums){
            sum_including_current = max(sum_including_current+n,n);
            sum_max = max(sum_max,sum_including_current);
        }

        return sum_max;
    }
};

int main()
{
    cout << "Leetcode-53 Maximum sub array" << endl;

    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << endl;
    vector<int> v;
    int ele;

    cout << "Enter element in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;

    cout << "Element in vector are: ";
    for (auto &p : v)
    {
        cout << p << " ";
    }
    cout << endl;
    Leetcode53 obj;

    cout << obj.maxSubArray(v)<<endl;
    ;

    return 0;
}