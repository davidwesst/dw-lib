#pragma once

#include <string>

#include "SocialProfile.hpp"

class SocialProfileReader {
    public:
        SocialProfileReader() = default;

        SocialProfile readFile(const std::string& filePath);
    private:
};