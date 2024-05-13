//input [2, 7, 4, 1, 8, 1] output: 1
//Explaination: return the remaining last element otherwise 0


#include<bits/stdc++.h>
using namespace std;

class Leetcode
{
    public:
        int lastStoneWeight(vector<int>& stones){
            make_heap(stones.begin(), stones.end()); /*Convert Vector to Heap(By default Max Heap)*/

            while(stones.size() > 1){
                pop_heap(stones.begin(), stones.end()); /*Push the largest element at the end of Heap*/
                int x = stones.back(); //Largest one
                stones.pop_back(); /*Removed last element from the Heap*/

                pop_heap(stones.begin(), stones.end()); 
                int y = stones.back(); //Second largest one
                stones.pop_back(); 

                int diff = abs(x-y);
                if(diff > 0){
                    stones.push_back(diff);
                    push_heap(stones.begin(), stones.end());
                }
            }    

            if(stones.size() == 1)
                return stones[0];

            return 0;
        }
};



int main()
{
    cout<<"Leetcode Last stone weight"<<endl;
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
    cout<<obj.lastStoneWeight(v)<<endl<<endl;

    return 0;
}