/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:07:38 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/14 18:40:00 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        if (argc > 0)
            std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        else
            std::cout << "Usage: ./program <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(file_name.c_str());
    if(!infile.is_open())
    {
        std::cout << "Error: cannot open file " << file_name << std::endl;
        return (1);
    }
    std::string outfile_name = file_name + ".replace";
    std::ofstream outfile(outfile_name.c_str());
    if (!outfile.is_open())
    {
        std::cout << "Error: cannot create file " << outfile_name << std::endl;
        infile.close();
        return (1);
    }
    std::string line;
    while(std::getline(infile, line))
    {
        size_t pos= 0;
        while((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}