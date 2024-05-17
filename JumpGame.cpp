//input [2, 3, 1, 1, 4]  output: true
//input [3, 2, 1, 0, 4]  output: false
//input [1, 0]  output: true
//input [1, 2]  output: true
//input [1, 0, 0]  output: false


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        bool canJump(vector<int>& nums){
            int max_reach = 0;

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] + i > max_reach)
                    max_reach = nums[i] + i;
                if(max_reach == i) 
                    break; 
            }

            return max_reach >= nums.size()-1;
        }
};

int main()
{
    cout <<"Leetcode - Jump game"<<endl;
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
    if(obj.canJump(v))
        cout<<"true";
    else
        cout<<"false";
    cout<<endl;

    return 0;
}