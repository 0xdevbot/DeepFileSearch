#include <iostream>
#include "FileDAO.h"


int main(int argc, char *argv[])
{
    FileDAO searchInstance;
    std::cout << searchInstance.getHelp() << std::endl;
    std::string userInput;
    std::string cmd = "echo ";
    std::cout << "enter a search term" << std::endl;
    std::cin >> userInput;

    cmd += static_cast<std::string>(userInput);


    system(cmd.c_str());
    return 0;
}



/*
TODO:
 learn Ultimate++
 cmd calls
 ui mock up
 user input to objects
 write search function
 write findFiles function
 write readFiles function
 Regex Builder utility
 create custom vector datastructures -> put to vector
 set files to vector
 push files and paths to user with in UI
 okay i think thats it....




*/
