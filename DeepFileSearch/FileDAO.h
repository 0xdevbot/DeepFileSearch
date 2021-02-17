//
// Created by Devin Wallace on 9/25/2020.
//

#ifndef DEEPFILESEARCH_FILEDAO_H
#define DEEPFILESEARCH_FILEDAO_H
#include <string>
#include <vector>



class FileDAO {
    private:
        std::string searchTerm;
        std::string pathToDir;
        std::vector<std::string> arryOfFiles;
    public:
        FileDAO();

        void search();
        void findFiles();

        std::string getSearchTerm();
        std::string getPathToDir();
        std::vector<std::string> getArryOfFiles();
        void setSearchTerm(std::string term);
        static std::string getHelp();



};


#endif //DEEPFILESEARCH_FILEDAO_H
