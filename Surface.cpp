#include "Surface.hpp"

Surface::Surface(int x, int y) : Geom2D(x, y) {}

Surface::Surface(const Color &couleur, int x, int y) : FillProperty(couleur), Geom2D(x, y) {}

