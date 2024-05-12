//input [0, 1, 0, 3, 12]
//output [1, 3, 12, 0, 0]


#include<bits/stdc++.h>
using namespace std;

class Leetcode283
{
    public:
        void moveZeroes(vector<int>& nums){
            if(nums.size() <= 1) 
                return;
            
            int z=0, n=1;
            while(z < nums.size() && n < nums.size() && z < n){
                while(z < nums.size() && nums[z] != 0)
                    z++;

                if(n < z)
                    n = z+1;
                
                while(n < nums.size() && nums[n] == 0)
                    n++;

                if(n <= z || n >= nums.size() || z >= nums.size())
                    return;

                /*
                int temp = nums[z];
                nums[z] = nums[n];
                nums[n] = temp
                */
                iter_swap(nums.begin() + z, nums.begin() + n);
            }
            
            
        }
};



int main()
{
    cout<<"Leetcode-283 Move zeroes"<<endl;
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

    Leetcode283 obj;
    obj.moveZeroes(v);

    cout<<"Elements in the vector are : "<<endl;
    for(auto &ele : v)
        cout<<ele<<" "; 
    cout<<endl;
   
    return 0;
}