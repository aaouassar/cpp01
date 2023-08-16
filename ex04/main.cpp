#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>

int main(int ac, char **av)
{
    std::string s1;
    std::string s2;
    std::string line;

    if (ac == 4)
    {
        std::ifstream MyReadFile(av[1]);
        //std::cout << "ayoub ana anta howa hiaa";
        MyReadFile.close();
        std::ofstream MyFile(".replace");
        while(std::getline(MyReadFile, line))
        {
            int i = 0;
            while((line.find(s1, i)))
            {
                line.substr(i, s2.length());
                i += s2.length();
            }
            MyFile << line << std::endl; 

        }
        std::cout << "remplacement completed";


    }
}