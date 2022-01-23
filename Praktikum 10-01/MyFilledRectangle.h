#pragma once
#include "MyRectangle.h"

class MyFilledRectangle : public MyRectangle
{
public:
    MyFilledRectangle(int x1 = 0, int y1 = 0, int x2 = 20, int y2 = 20)
        : MyRectangle(x1, y1, x2, y2) {
    }

    void draw() const;
};
