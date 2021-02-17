//
// Created by Devin Wallace on 9/25/2020.
//

#include "FileDAO.h"

#include <utility>

FileDAO::FileDAO() = default;

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

std::string FileDAO::getHelp() {
    return "  ____                      _____  _  _        ____                           _     \n"
           " |  _ \\   ___   ___  _ __  |  ___|(_)| |  ___ / ___|   ___   __ _  _ __  ___ | |__  \n"
           " | | | | / _ \\ / _ \\| '_ \\ | |_   | || | / _ \\\\___ \\  / _ \\ / _` || '__|/ __|| '_ \\ \n"
           " | |_| ||  __/|  __/| |_) ||  _|  | || ||  __/ ___) ||  __/| (_| || |  | (__ | | | |\n"
           " |____/  \\___| \\___|| .__/ |_|    |_||_| \\___||____/  \\___| \\__,_||_|   \\___||_| |_|\n"
           "                    |_|                                                             ";
}
