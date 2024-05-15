//input [0, 1] output: 2
//input [0, 1, 0, 0] output: 2


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int findMaxLength(vector<int>& nums){
            if(nums.size() <= 1)
                return 0;
            
            unordered_map<int, int> cache;  //(sum, index)
            int count = nums[0] == 1 ? 1 : -1;

            cache[0] = -1;
            cache[count] = 0;
            int _max = 0;

            for(int i = 1; i < nums.size(); ++i){
                count = (nums[i] == 1) ? count + 1 : count - 1;

                if(cache.find(count) != cache.end()) //found
                    _max = max(_max, i - cache[count]);
                else
                    cache[count] = i;
            }
            return _max;
        }
};



int main()
{
    cout<<"Leetcode Contiguous array"<<endl;
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
    cout<<obj.findMaxLength(v)<<endl<<endl;

    return 0;
}