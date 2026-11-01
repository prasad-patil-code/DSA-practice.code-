#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> set{1,2,1,1,5,1};
    
    int n{0};
    
    for(int& i : set)
    {
        if(i % 2 != 0)
           ++n;
    }
    
    cout << n;
    
    return 0;
}
