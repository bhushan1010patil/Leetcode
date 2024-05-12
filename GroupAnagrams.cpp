//input ["eat", "tea", "tan", "ate", "nat", "bat"]
//output [["bat"],["nat","tan"],["ate","eat","tea"]]


#include<bits/stdc++.h>
using namespace std;

class Leetcode49
{
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs){
            vector<vector<string>> result;
            if(strs.size() == 0)
                return result;
            
            unordered_map<string, vector<string>> map;  
            for(string s : strs){
                string key = s;
                sort(key.begin(), key.end());
                map[key].push_back(s);
            }

            for(auto it = map.begin(); it != map.end(); ++it)
                result.push_back(it->second);
            
            return result;
        }
};



int main()
{
    cout<<"Leetcode-49 Group anagrams"<<endl;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << endl;
    vector<string> v;
    string ele;

    cout << "Enter element in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;

    Leetcode49 obj;
    vector<vector<string>> vv= obj.groupAnagrams(v);

    /*PRINT 2D VECTOR*/
    cout<<"Output is : [ ";
    for(int i=0; i < vv.size(); i++){
        cout<<" [ ";
        for(int j=0; j < vv[i].size(); j++)
            cout<<vv[i][j]<<" ";
        cout<<" ] ";
    }
    cout<<" ] ";      
    cout<<endl;
   
    return 0;
}