#include "SVGstream.hpp"

#include <cstdlib>
#include <iostream>

SVGstream::SVGstream(std::string fileName)
{
	file.exceptions(std::fstream::badbit | std::fstream::failbit);
	try
	{
		file.open(fileName, std::ofstream::out | std::ofstream::app);
	}
	catch (std::ofstream::failure &e)
	{
		std::cerr << "Exception !\n"
				  << e.what() << std::endl;
		exit(EXIT_SUCCESS);
	}
	file << "<!doctype html><svg width=\"1000\" height=\"1000\">" << std::endl;
}

SVGstream::~SVGstream()
{
	file << "</svg>" << std::endl;
	file.close();
}

void SVGstream::operator<<(const std::string &string)
{
	file << string;
}
