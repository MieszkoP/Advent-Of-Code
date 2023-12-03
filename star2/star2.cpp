#include "star2.h"

void Star2::first()
{
    //Game 4: 4 blue, 11 green, 6 red; 4 green, 2 red; 12 red, 1 blue, 3 green

    auto path = std::filesystem::current_path().parent_path().append("star2").append("input.txt");
    std::regex r(R"(Game\s(\d+):((.*?);?)*)");
    std::regex r2(R"(.*)");

    if(std::filesystem::exists(path))
    {
        std::fstream file(path);
        std::string line;
        while (std::getline(file, line))
        {
            std::smatch ss;
            std::regex_search(line, ss, r);
            std::cout<<line<<"\n";
            std::cout<<"t:"<<ss[0]<<"\n";
            std::cout<<"t:"<<ss[1]<<"\n";
            std::cout<<"t:"<<ss[2]<<"\n";
        }
    }
    //std::cout<<result<<"\n";
}