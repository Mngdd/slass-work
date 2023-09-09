#include <iostream>
#include <string>


int main() {
    std::string n; std::cin >> n;
    bool non_zero_was = false;
    for (auto i = n.rbegin(); i != n.rend(); ++i) {
        if (*i == '0') {
            if (non_zero_was) {
                std::cout << *i;
            }
        } else {
            non_zero_was = true;
            std::cout << *i;
        }
    }
}
