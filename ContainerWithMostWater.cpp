//input enter vector [1 ,8, 6, 2, 5, 4, 8, 3, 7]
//output 49

#include <bits/stdc++.h>
using namespace std;

class Leetcode11
{
public:
    int maxArea(vector<int> &height)
    {
        int min_height = height[0];
        int max_height = height[height.size() - 1];
        int min_idx = 0;
        int max_idx = height.size() - 1;

        if (max_height < min_height)
        {
            min_height = max_height;
            min_idx = max_idx;
            max_height = height[0];
            max_idx = 0;
        }

        int width = height.size() - 1;
        int max_area = min_height * width;

        while (width > 0)
        {
            int idx = min_idx;
            while (height[idx] <= min_height)
            {
                if (min_idx < max_idx)
                    idx++;
                else
                    idx--;
                width--;
                if(width<0)
                break;
            }
            if(height[idx] > max_height){
                min_height = max_height;
                min_idx = max_idx;
                max_idx = idx;
                max_height = height[idx];
            }
            else{
                min_idx = idx;
                min_height = height[idx];
            }
            max_area = max(max_area,width*min_height);
        }

        return max_area;
    }
};

int main()
{
    cout << "Leetcode-11 Container with most water" << endl;

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

    cout << "Element in vector are: ";
    for (auto &p : v)
    {
        cout << p << " ";
    }
    cout << endl;
    Leetcode11 obj;

    cout << obj.maxArea(v);
    ;

    return 0;
}