#include <iostream>
#include <cmath>


typedef long long int lli;


int main() {
    lli n; std::cin >> n;
    if (n < 2) {
        std::cout << "NO";
        return 0;
    }
    for (int i = 2; i <= int(std::sqrt(n)); ++i) {
        if (n % i == 0) {
            std::cout << "NO";
            return 0;
        }
    }
    std::cout << "YES";
    return 0;
}
