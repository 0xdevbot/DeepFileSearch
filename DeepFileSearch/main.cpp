#include <iostream>
#include "FileDAO.h"

int main() {
    std::string userInput;
    std::string cmd = "echo ";
    std::cout << "enter a search term" << std::endl;
    std::cin >> userInput;
    std::string term = userInput;
    FileDAO searchInstance;
    cmd += static_cast<std::string>(userInput);
    std::cout << searchInstance.getHelp() << std::endl;
    system(cmd.c_str());
    return 0;
}
