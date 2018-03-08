#ifndef GEOM2D_H_
#define GEOM2D_H_

#include "Transform.hpp"

class Geom2D : public virtual Transform {
public:
    Geom2D(int x, int y);

    virtual ~Geom2D() = default;

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

protected:
    int x;
    int y;
};

#endif /* GEOM2D_H_ */
