#include "Color.hpp"

Color::Color() :
		c(red) {

}

Color::~Color() = default;

Color::Color(colortype col) :
		c(col) {
}

Color::colortype Color::getC() const {
	return c;
}

void Color::setC(colortype c) {
	this->c = c;
}

std::string Color::toString() {
	switch (c) {
	case red:
		return "red";
	case white:
		return "white";
	case yellow:
		return "yellow";
	case orange:
		return "orange";
	case turquoise:
		return "turquoise";
	case violet:
		return "violet";
	case pink:
		return "pink";
	case green:
		return "green";
	case grey:
		return "grey";
	case cyan:
		return "cyan";
	case blue:
		return "blue";
	case brown:
		return "brown";
	default:
		return "no colour";
	}
}
