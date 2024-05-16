//input [3, 5, 7, 0, 1]  target: 7 output: 2


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int search(vector<int>& nums, int target){
            int n = nums.size();
            if(n == 0) return -1;
            int l = 0;
            int r = n-1;

            while(l < r){
                int mid = l + (r-l)/2;

                if(nums[mid] > nums[r])
                    l = mid + 1;
                else
                    r = mid;
            }

            if(target <= nums[n-1])
                return binarySearch(nums, target, l, n-1);
            else
                return binarySearch(nums, target, 0, l-1);
        }

        int binarySearch(vector<int>& nums, int target, int l, int r){
            while(l <= r){
                int mid = l + (r-l)/2;
                if(target == nums[mid])
                    return mid;

                if(target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            return -1;
        }
};



int main()
{
    cout<<"Leetcode - Search in rotated sorted array"<<endl;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    
    vector<int> v;
    int ele;

    cout << "Enter element in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    
    int target;
    cout << "Enter element to search: ";
    cin >> target;

    Leetcode obj;
    cout<<"Element is found at: "<<obj.search(v,target);
    cout<<endl;

    return 0;
}