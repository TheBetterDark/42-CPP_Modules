/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:34:40 by muabdi            #+#    #+#             */
/*   Updated: 2025/03/14 16:22:52 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void print_usage(const char *programName)
{
    std::cout << "Usage: " << programName << " <filename> <string_to_replace> <replacement_string>" << std::endl;
    exit(EXIT_FAILURE);
}

bool read_file(const std::string &filename, std::string &fileContents)
{
    std::ifstream fileIn(filename.c_str());
    if (!fileIn.is_open())
    {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(fileIn, line))
    {
        fileContents += line + "\n";
    }
    fileIn.close();
    return true;
}

void replace_string(std::string &fileContents, const std::string &stringToReplace, const std::string &replacementString)
{
    size_t pos = 0;
    while ((pos = fileContents.find(stringToReplace, pos)) != std::string::npos)
    {
        fileContents.replace(pos, stringToReplace.length(), replacementString);
        pos += replacementString.length();
    }
}

bool write_file(const std::string &filename, const std::string &fileContents)
{
    std::ofstream fileOut(filename.c_str());
    if (!fileOut.is_open())
    {
        std::cerr << "Error: Could not create file " << filename << std::endl;
        return false;
    }

    fileOut << fileContents;
    fileOut.close();
    return true;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        print_usage(argv[0]);

    std::string filename = argv[1];
    std::string stringToReplace = argv[2];
    std::string replacementString = argv[3];
    std::string fileContents;

    if (!read_file(filename, fileContents))
        return EXIT_FAILURE;

    replace_string(fileContents, stringToReplace, replacementString);

    if (!write_file(filename + ".replace", fileContents))
        return EXIT_FAILURE;

    std::cout << "File " << filename << " has been successfully replaced and saved as " << filename + ".replace" << std::endl;

    return EXIT_SUCCESS;
}
