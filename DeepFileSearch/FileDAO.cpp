//
// Created by Devin Wallace on 9/25/2020.
//

#include "FileDAO.h"

#include <utility>

FileDAO::FileDAO(std::string searchTerm) {
    setSearchTerm(std::move(searchTerm));

}

void FileDAO::search() {

}

void FileDAO::findFiles() {

}

std::string FileDAO::getSearchTerm() {
    return searchTerm;
}

std::string FileDAO::getPathToDir() {
    return pathToDir;
}

std::vector<std::string> FileDAO::getArryOfFiles() {
    return arryOfFiles;
}

void FileDAO::setSearchTerm(std::string term) {
    searchTerm = std::move(term);
}
