//
// Created by dell on 2019/3/25.
//

#ifndef INC_3_19_2_POINT_H
#define INC_3_19_2_POINT_H

class Point
{
public:
    Point (int a, int b)
    {
        x=a;y=b;
    }
    void fun (Point &p);
    void fun (Point * p);
private:
    int x,y;
};

#endif //INC_3_19_2_POINT_H
