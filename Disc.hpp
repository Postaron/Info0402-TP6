#ifndef DISC_H_
#define DISC_H_

#include "Surface.hpp"

class Disc : public Surface {
public:
    Disc(int x, int y, int r, Color c);

    virtual ~Disc() = default;

    Disc(int x, int y, int r);

private:
    int r;
};

#endif /* DISC_H_ */
