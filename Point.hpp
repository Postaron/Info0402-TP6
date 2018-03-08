#ifndef POINT_H_
#define POINT_H_

class Point {
private:
    int x, y;

public:
    Point();

    Point(int x, int y);

    Point(const Point &p);

    virtual ~Point() = default;

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);
    //inline Point& operator=(const Point& p);
};

#endif /* POINT_H_ */
