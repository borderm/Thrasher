#include <iostream>

// For the love of god do not run this, it's not far off from a fork bomb.
// Basically it allocates memory endlessly

int main(){
    std::uint64_t mem = 0;
    std::cout << "Please enter the rate you would like to thrash at:";
    std::cin >> mem;

    while (true)
    {
        std::malloc(mem);
    }

    return 0;
}