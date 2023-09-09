#include <iostream>
#include <vector>


typedef long long int lli;


int main() {
    std::vector<int> two_last = {0, 1};
    lli n; std::cin >> n;
    if (n < 0) {
        std::cout << "che ti pishesh";
        return 0;
    }
    if (n < 2) {
        std::cout << n;
        return 0;
    }
    lli new_n = -1;
    for (int i = 2; i <= n; ++i) {
        lli new_n = two_last[0] + two_last[1];
        two_last[0] = two_last[1];
        two_last[1] = new_n;
    }
    std::cout << two_last[1];
}
