#include <iostream>
#include <regex>
#include <filesystem>
#include <fstream>

namespace Star2
{

    enum class color {Red=0, Green=1, Blue=3};
    struct Game
    {
        int ID;
        std::vector<std::map<color, int>> subgames;
    };

    void first();

    //void second();
    //int NumberConverter(std::string s);
};