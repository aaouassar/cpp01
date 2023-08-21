#include"sed.hpp"

void ft_sed(std::string MyReadfile, std::string s1, std::string s2)
{
    std::ifstream File;
    std::ofstream MyFile;
    std::string line;
    std::string new_file = MyReadfile + ".replace";
    const char* MyReadfileCSTR = MyReadfile.c_str();
    const char* new_fileCSTR = new_file.c_str();

    File.open(MyReadfileCSTR, std::ios::in | std::ios::out);
    if (File.is_open())
    {
        MyFile.open(new_fileCSTR, std::ios::out);
        if(MyFile.fail())
        {
            std::cout << "We can't open this file" << std::endl;
            exit(1);
        }
        while(getline(File, line))
        {
            int i = 0;
            size_t pos = 0;
            while(line.find(s1, pos) != std::string::npos)
            {
                i = line.find(s1, pos);
                line.erase(i, s1.length());
                line.insert(i, s2);
                pos += s2.length();
            }
            MyFile << line << std::endl;
        }
        MyFile.close();
        File.close();
    }
    else if (File.fail())
    {
        std::cout << "We can not open this file " << std::endl;
        exit(1);
    }
}