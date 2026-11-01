#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> set{1,2,3,4,5};
    
    size_t n{set.size()};
    
    for(size_t i{0}; i < (n+1)/2; ++i)
    {
        swap(set[i], set[n-1-i]);
        
    }
    
    cout << "{ ";
    for(auto k : set)
    {
        cout << k << " ";
    }
    cout << "}";
    
    return 0;
}
