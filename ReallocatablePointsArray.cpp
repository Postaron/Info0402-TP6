#include "ReallocatablePointsArray.hpp"

#include <utility>

ReallocatablePointsArray::ReallocatablePointsArray(int size) :
        PointsArray(size) {

}

void ReallocatablePointsArray::push_back(Point &p) {
    Point *tempTab = nullptr;
    if (size == nbr_inside) {
        size += 5;
        tempTab = tab;
        tab = new Point[size];
        std::swap(tab, tempTab);
        delete tempTab;
    }
    PointsArray::push_back(p);
}

ReallocatablePointsArray::ReallocatablePointsArray(int n, int c, int r) : PointsArray(n, c, r) {

}

ReallocatablePointsArray::ReallocatablePointsArray(const PointsArray &p) : PointsArray(p) {

}

ReallocatablePointsArray::ReallocatablePointsArray(const std::initializer_list<Point> &list) : PointsArray(list) {

}
