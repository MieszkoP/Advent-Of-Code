#include <iostream>
#include "star1/star1.h"
#include "star2/star2.h"

int main(int, char**){
    std::cout << "Hello, from AdventOfCode!\n";
    std::cout << "Choose result of puzzle. Which number of star?\n";
    int puzzle = 0;
    std::cin>>puzzle;
    switch (puzzle)
    {
    case 1:
        Star1::main();
        Star1::second();
        break;

    case 2:
        Star2::first();
        break;
    
    default:
        break;
    }
}
