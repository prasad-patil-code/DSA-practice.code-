#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> set{1,2,1,1,5,1};
    
    for(size_t i{1}; i < size(set); ++i)
    {
        if(set[i] < set[i-1])
        {
            cout << "not sorted \n";
            break;
        }
    }
    
    cout << "sorted";
    
    return 0;
}
