//input [1, 1, 2, 2, 2, 3]
//output 5


#include<bits/stdc++.h>
using namespace std;

class Leetcode30
{
    public:
        int countElements(vector<int>& arr){
            unordered_map<int, int> _map;

            for(int a : arr){
                if(_map.find(a) != _map.end())
                    _map[a]++;
                else
                    _map[a]=1;
            }

            int result = 0;
            for(auto n : _map){
                if(_map.find(n.first + 1) != _map.end())
                    result += n.second;
            }

            return result;
        }
};



int main()
{
    cout<<"Leetcode-30 Count elements"<<endl;
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

    Leetcode30 obj;
    cout<<" "<<obj.countElements(v)<<endl;

    return 0;
}