#include <iostream>
#include "FileDAO.h"
#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    std::string userInput;
    std::string cmd = "echo ";
    std::cout << "enter a search term" << std::endl;
    std::cin >> userInput;
    FileDAO searchInstance;
    cmd += static_cast<std::string>(userInput);
    std::cout << searchInstance.getHelp() << std::endl;

    system(cmd.c_str());
    return a.exec();
}



/*
TODO:
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
