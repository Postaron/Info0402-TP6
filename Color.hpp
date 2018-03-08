#ifndef COLOR_H_
#define COLOR_H_

#include <string>

class Color {
public:
	enum colortype : uint8_t {
        red = 0,
		white,
		yellow,
		orange,
		turquoise,
		violet,
		pink,
		green,
		grey,
		cyan,
		blue,
		brown
	};
	Color();
	explicit Color(colortype col);
	virtual ~Color();
	std::string toString();
	colortype getC() const;
	void setC(colortype c);

private:
	colortype c;
};

#endif /* COLOR_H_ */
