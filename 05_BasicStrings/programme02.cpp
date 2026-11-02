#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s = "hello";
    int n = s.length();

    std::cout << "Before: " << s << '\n';


    for (int i = 0; i < (n+1)/ 2; i++) {
        std::swap(s[i], s[n - 1 - i]);
    }

    std::cout << "After:  " << s << '\n'; 
    return 0;
}
