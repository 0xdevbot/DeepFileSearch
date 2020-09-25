//
// Created by Devin Wallace on 9/25/2020.
//

#ifndef DEEPFILESEARCH_FILEDAO_H
#define DEEPFILESEARCH_FILEDAO_H
#include <string>


class FileDAO {
    private:
        std::string searchTerm;
        std::string pathToDir;
    public:
        FileDAO(std::string searchTerm, std::string pathToDir);

        void search();
        void findFiles();

        std::string getSearchTerm() { return searchTerm; }
        std::string getPathToDir() { return pathToDir; }

};


#endif //DEEPFILESEARCH_FILEDAO_H
