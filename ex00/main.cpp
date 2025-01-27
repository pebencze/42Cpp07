#include "whatever.hpp"
#include <iostream>

int main(void) {
    int a = 3;
    int b = 7;
    float c = 1.23f; 
    float d = 6.97f;
    double *p1;
    double *p2;
    int *x;
    int *y;
    
    std::cout << std::endl;
    std::cout << "Values before swapping: \n"
        << "a: " << a << std::endl
        << "b: " << b << std::endl
        << "c: " << c << std::endl
        << "d: " << d << std::endl
        << "p1: " << p1 << std::endl
        << "p2: " << p2 << std::endl;

    swap(a, b);
    swap(c, d);
    swap(p1, p2);

    std::cout << std::endl;
    std::cout << "Values after swapping: \n"
        << "a: " << a << std::endl
        << "b: " << b << std::endl
        << "c: " << c << std::endl
        << "d: " << d << std::endl
        << "p1: " << p1 << std::endl
        << "p2: " << p2 << std::endl;

    std::cout << std::endl;
    std::cout << "Minimum values: \n"
        << "a: " << a << ", b: " << b << ", min: "  << min(a, b) << std::endl
        << "c: " << c << ", d: " << d << ", min: "  << min(c, d) << std::endl
        << "p1: " << p1 << ", p2: " << p2 << ", min: " << min(p1, p2) << std::endl;

    std::cout << std::endl;
    std::cout << "Maximum values: \n"
        << "a: " << a << ", b: " << b << ", max: "  << max(a, b) << std::endl
        << "c: " << c << ", d: " << d << ", max: "  << max(c, d) << std::endl
        << "p1: " << p1 << ", p2: " << p2 << ", max: " << max(p1, p2) << std::endl;

    return (0);
}