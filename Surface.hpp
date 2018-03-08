#ifndef SURFACE_H_
#define SURFACE_H_

#include "FillProperty.hpp"
#include "Geom2D.hpp"

class Surface : public FillProperty, public Geom2D {
public:
    Surface(int x, int y);

    Surface(const Color &couleur, int x, int y);

    virtual ~Surface() = default;

    virtual float aire() = 0;

    virtual void info() = 0;
};

#endif /* SURFACE_H_ */
