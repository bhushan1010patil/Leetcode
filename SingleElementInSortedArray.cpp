
//input  [1, 1, 2, 3, 3, 4, 4, 8, 8]  output 2
//input  [1, 1, 2, 2, 3, 3, 4, 4]  output 0

#include <bits/stdc++.h>
using namespace std;

class Leetcode137
{
public:
    int singleNonDuplicate(vector<int>& nums){
       int left = 0;
       int right = nums.size()-1;

       while(left < right){
            int mid = left + (right-left)/2;
            if(mid % 2 == 0){
                if(nums[mid] == nums[mid+1])
                    left = mid + 2;
                else if(nums[mid] == nums[mid-1])
                    right = mid - 2;
                else
                    return nums[mid];
            }
            else{
                if(nums[mid] == nums[mid-1])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
       }
       return nums[left];
    }
};

int main()
{
    cout << "Leetcode-137 Single element in sorted array" << endl;

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
    cout << obj.singleNonDuplicate(v)<<endl;
    return 0;
}