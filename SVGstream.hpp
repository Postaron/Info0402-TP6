#ifndef SVGSTREAM_H_
#define SVGSTREAM_H_

#include <fstream>
#include <string>

class SVGstream {
private:
    std::ofstream file;
public:
    explicit SVGstream(std::string fileName);

    virtual ~SVGstream();

    void operator<<(const std::string &string);
};

#endif /* SVGSTREAM_H_ */
