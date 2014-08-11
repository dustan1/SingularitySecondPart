
#ifndef STR_FUNCTIONS_H
#define STR_FUNCTIONS_H

#include <string>
#include <iostream>
#include <vector>

//It only works if I have the class. Why?
class stringFunc
{

public:

std::string parseFirstToken(std::string input, const char* delim);
std::string popFirstToken(std::string input, const char* delim);

std::vector <std::string> parseAllTokens(std::string input, const char* delim);

std::string tokensToString(std::vector <std::string> input, const char* delim);
};





#endif