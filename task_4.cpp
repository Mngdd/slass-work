#include <cmath>
#include <numbers>
#include <map>
#include <iostream>


std::map<long int, long int> f_memory = {{0, 1}, {1, 1}};


long double f(long int n) {
    if (f_memory.find(n) == f_memory.end()) { // n netu
        long int tmp = f(n - 1)*n;
        f_memory[n] = tmp;
        return tmp;
    } else {
        return f_memory[n];
    }
}


int main() {
    const long double e = std::numbers::e / 2.0 + 1.0 / std::numbers::e / 2.0;
    long int n;
    std::cout << "Input precision: "; std::cin >> n;
    if (n < 0) {
        std::cout << "change da world, my final message, goodbye";
        return 0;
    }
    
    long double calculated_e = 0;
    for (int k = 0; k <= n; ++k) {
        calculated_e += 1.0 / f(2*k);
    }
    std::cout << "e: " << e << "; calculated e: " << calculated_e << "\n";
    std::cout << "delta = " << std::abs(e - calculated_e);
}
