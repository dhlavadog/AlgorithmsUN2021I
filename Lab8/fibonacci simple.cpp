#include <iostream>
#include <cassert>
#include<math.h>

long long int fibonacci_fast(int n) {
    long long int k;
    k=(1/pow(5,0.5))*(pow((1+pow(5,0.5))/2 ,n)-pow((1-pow(5,0.5))/2 ,n));
    return k;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
