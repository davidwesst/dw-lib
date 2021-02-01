#include <fstream>

#include "SocialProfileReader.hpp"

SocialProfile SocialProfileReader::readFile(const std::string& filePath)
{
    std::ifstream ifs { filePath };

    SocialProfile profile;
    std::getline(ifs, profile.id);
    std::getline(ifs, profile.url);

    return profile;
}