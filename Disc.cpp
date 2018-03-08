#include "Disc.hpp"

Disc::Disc(int x, int y, int r, Color c) : Surface(c, x, y), r(r) {}

Disc::Disc(int x, int y, int r) : Surface(x, y), r(r) {}