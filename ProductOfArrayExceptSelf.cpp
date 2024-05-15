//input [1, 2, 3, 4] output: [24, 12, 8, 6]



#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        vector<int> productExceptSelf(vector<int>& nums){
            int n = nums.size();
            vector<int> L(n, 1); //left product
            vector<int> R(n, 1);  //right product
            vector<int> result(n, 1);

            for(int i = 1; i < n; ++i)
                L[i] = L[i-1] * nums[i-1];

            for(int i = n-2; i>= 0; --i)
                R[i] = R[i+1] * nums[i+1];

            for(int i = 0; i < n; ++i)
                result[i] = L[i] * R[i];
            
            return result;
        }
};



int main()
{
    cout<<"Leetcode - Product of array except self"<<endl;
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
    vector<int> v1 = obj.productExceptSelf(v);

    cout<<"Product of array is : ";
    for(auto it = v1.begin(); it != v1.end(); ++it){
        cout << *it << " ";
    }

    cout<<endl;

    return 0;
}