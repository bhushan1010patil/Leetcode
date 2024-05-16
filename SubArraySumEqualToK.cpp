//input [1, 0, 1, 2, -1]  K: 2 output: 4


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int subArraySum(vector<int>& nums, int k){
            if(nums.size() == 0)
                return 0;
            
            int count = 0;
            unordered_map<int, int> _map;  //<prefix_sum, count>
            int curr_sum = 0;

            for(int n : nums){
                curr_sum += n;
                if(curr_sum == k)
                    count += 1;

                if(_map.find(curr_sum - k) != _map.end())
                    count += _map[curr_sum - k];
                
                if(_map.find(curr_sum) != _map.end())
                    _map[curr_sum] += 1;
                else
                    _map[curr_sum] = 1;
            }
            
            return count;
        }
};



int main()
{
    cout<<"Leetcode - SubArray sum equal to K"<<endl;
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
    
    int k;
    cout << "Enter K: ";
    cin >> k;

    Leetcode obj;
    cout<<"Element is found at: "<<obj.subArraySum(v,k);
    cout<<endl;

    return 0;
}