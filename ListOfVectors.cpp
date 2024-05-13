// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ListOfVector{
    public:
    void print(list<vector<int>>&);
};

void ListOfVector::print(list<vector<int>>& listOfVector){
    cout<<"In print()"<<endl;
    for (auto vect : listOfVector)
    {
        vector<int> currentVector = vect;
        cout<<"[ ";
        for (auto element : currentVector)
            cout<<element<<" ";

        cout<<"]";
        cout<<"\n";
        
    }
    
}

int main(){
    cout<<"Example of List of vector: "<<endl;
    list<vector<int>> listOfVectors;
    vector<int> v1;
    v1.push_back(11);
    v1.push_back(17);
    v1.push_back(23);
    
    listOfVectors.push_back(v1);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(6);
    v2.push_back(8);

    listOfVectors.push_back(v2);

    vector<int> v3;
    v3.push_back(21);
    v3.push_back(22);
    v3.push_back(23);

    listOfVectors.push_back(v3);

    ListOfVector obj;
    obj.print(listOfVectors);

}