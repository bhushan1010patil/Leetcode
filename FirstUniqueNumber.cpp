
#include<bits/stdc++.h>
using namespace std;

class FirstUnique{
    unordered_map<int, list<int>::iterator> _map;
    list<int> _keys;
    public: 
        FirstUnique(vector<int>& nums){
            for(int n : nums){
                // if(_map.find(n) != _map.end()){ //key present
                //     list<int>:: iterator it = _map[n];
                //     if(it != _keys.end()){ //key in list
                //         _keys.erase(it);
                //         _map[n] = _keys.end();
                //     }
                // }
                // else{ //first occurances
                //     _keys.push_back(n);
                //     list<int>::iterator it = _keys.end();
                //     it--;
                //     _map[n] = it;
                // }

                add(n);
            }
        }

        int showFirstUnique(){
            if(_keys.size())
                return _keys.front();
            return -1;
        }

        void add(int value){
            if(_map.find(value) != _map.end()){ //key present
                list<int>::iterator it = _map[value];
                if(it != _keys.end()){ //key in list
                    _keys.erase(it);
                    _map[value] = _keys.end();
                }
            }
            else{ //first occurrence
                _keys.push_back(value);
                list<int>::iterator it = _keys.end();
                it--;
                _map[value] = it;
            }
        }

};

int main(){
    cout<<"Leetcode - First unique number"<<endl;
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

    FirstUnique* obj = new FirstUnique(v);
    int param = obj->showFirstUnique();
    obj->add(1);
}