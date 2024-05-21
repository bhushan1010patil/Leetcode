//input [3, 2, 3] output: 3


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int majorityElement(vector<int>& nums){
            /*
            unordered_map<int,int> counts;
            for(int n : nums){
                if(counts.find(n) == counts.end())
                    counts.insert({n, 1});
                else
                    counts[n] += 1;
                
                if(counts[n] > nums.size()/2)
                    return n;
            }
            return -1;
            */

           //Sorting
           /*
           sort(nums.begin(), nums.end());
           return nums[nums.size()/2];
           */

          //Moore's Voting Algorithm
          int idx = 0;
          int count = 1;
          for(int i = 1; i < nums.size(); ++i){
                if(nums[i] == nums[idx])
                    count++;
                else
                    count--;

                if(count == 0){ //reset candidate
                    idx = i;
                    count = 1;
                }
            }
            return nums[idx];
        }
};



int main()
{
    cout<<"Leetcode Majority element(Moores Voting Algorithm)"<<endl;
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
    

    Leetcode obj;
    cout<<obj.majorityElement(v)<<endl;

    return 0;
}