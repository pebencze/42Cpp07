#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T, typename F>
void iter(T *array, size_t len, F func) {
    if (!array)
        return ;
    for (size_t i = 0; i < len; i++) {
        func(array[i]);
    }
}

void printUpper(char c) {
    std::cout << static_cast<char>(c - 32) << " ";
}

unsigned int fact(unsigned int i) {
    return ((i == 0) || (i == 1) ? 1 : i * fact(i - 1));
}

void printFactorial(int i) {
    std::cout << fact(i) << " ";
}

void helloWorld(std::string &s) {
    std::cout << s << " world! ";
}

void printPrecision(float f) {
    if (f >= 0)
        std::cout << (f - floor(f)) << " ";
    else 
        std::cout << (f - ceil(f)) << " ";
}

#endif