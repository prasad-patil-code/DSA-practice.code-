#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<char> s{'h','e','l','l','o'};
    size_t n{s.size()};
    
    for(size_t i{0}; i < (n+1)/2; ++i)
    {
        swap(s[i], s[n-1-i]);
    }
    
    for(auto c : s)
      cout << c;
    
    return 0;
}
