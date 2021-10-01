#pragma once

#include "ofMain.h"


class Board {

public:
    void update();
    void draw();
    float b_width = 100;     // 보드 너비 100
    float b_height = 10;     // 보드 높이 10
    float x_Pos;
    float y_Pos;
};
