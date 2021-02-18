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
        void setSearchTerm(std::string term);
        void setPathToDir(std::string path);

        std::string getSearchTerm();
        std::string getPathToDir();
        std::vector<std::string> getArryOfFiles();



        static std::string getHelp();



};


#endif //DEEPFILESEARCH_FILEDAO_H
