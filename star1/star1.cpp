#include "star1.h"

void Star1::main()
{
    auto path = std::filesystem::current_path().parent_path().append("star1").append("input.txt");
    //std::string path = "../star1/input.txt";
    std::regex rfirst(R"(\D*(\d).*)");
    std::regex rlast(R"(.*(\d)\D*)");

    int result = 0;
    if(std::filesystem::exists(path))
    {
        std::fstream file(path);
        std::string line;
        while (std::getline(file, line))
        {
            //std::cout<<line<<"\n";
            std::smatch mathes;
            std::regex_search(line, mathes, rfirst);
            //std::cout<<"t:"<<mathes[1]<<"\n";
            auto d = std::stoi(mathes[1]);

            std::regex_search(line, mathes, rlast);
            //std::cout<<"t:"<<mathes[1]<<"\n";
            result += std::stoi(mathes[1])+10*d;
        }
    }
    std::cout<<result<<"\n";
}

int Star1::NumberConverter(std::string s)
{
    std::map<std::string, int> translator = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    return translator[s];
}

void Star1::second()
{
    auto path = std::filesystem::current_path().parent_path().append("star1").append("input.txt");
    //std::string path = "../star1/input.txt";
    std::regex rfirst(R"(\D*?(\d|one|two|three|four|five|six|seven|eight|nine).*)");
    std::regex rlast(R"(.*(\d|one|two|three|four|five|six|seven|eight|nine)\D*?)");

    int result = 0;
    if(std::filesystem::exists(path))
    {
        std::fstream file(path);
        std::string line;
        while (std::getline(file, line))
        {
            std::cout<<line<<"\n";
            std::smatch mathes;
            std::regex_search(line, mathes, rfirst);
            int d;
            try
            {
                d = std::stoi(mathes[1]);
            }
            catch(...)
            {
                d = NumberConverter(mathes[1]);
            }
            std::cout<<"t:"<<d<<"\n";

            std::regex_search(line, mathes, rlast);
            int j;
            try
            {
                j = std::stoi(mathes[1]);
            }
            catch(...)
            {
                j = NumberConverter(mathes[1]);
            }
            std::cout<<"t:"<<j<<"\n";
            result += j+10*d;
        }
    }
    std::cout<<result<<"\n";
}