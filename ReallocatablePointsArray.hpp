#ifndef REALLOCATABLEPOINTSARRAY_H_
#define REALLOCATABLEPOINTSARRAY_H_

#include "PointsArray.hpp"

class ReallocatablePointsArray : public PointsArray {
public:
    ReallocatablePointsArray(int n, int c, int r);

    explicit ReallocatablePointsArray(int size = 5);

    explicit ReallocatablePointsArray(const PointsArray &p);

    ReallocatablePointsArray(const std::initializer_list<Point> &list);

    virtual ~ReallocatablePointsArray() = default;

    void push_back(Point &p) override;
};

#endif /* REALLOCATABLEPOINTSARRAY_H_ */
