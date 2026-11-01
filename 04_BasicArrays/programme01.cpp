#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> set{1,2,1,1,5,1};
    
    int sum{0};
    
    for(size_t i{0}; i<size(set); ++i)
    {
        sum = sum + set[i];
    }
    
    cout << sum;
    
    return 0;
}
