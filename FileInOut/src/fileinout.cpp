// Learning basic file ops

#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream myfile; // Only writes files 
    myfile.open("example.txt");
    myfile << "Writing this to a file.\n";
    myfile << "Hello file!\n";
    myfile.close();

    std::ifstream myfile_too;
    std::string line;
    myfile_too.open("example.txt");
    if(myfile_too.is_open())
    {
        while(std::getline(myfile_too, line))
        {
            std::cout << line << '\n';
        }
        myfile_too.close();
    }
    else std::cout << "Unable to open file\n";
    std::cin.ignore();
    return 0;
}