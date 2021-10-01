#include "Boarding.h"

void Board::update() {
    x_Pos = ofGetMouseX();      // 마우스의 움직임에 따라 움직임
    y_Pos = ofGetHeight() - 30;     // 전체 높이에서 30 뺌
}

void Board::draw() {
    ofDrawRectangle(x_Pos, y_Pos, b_width, b_height);       //x_Pos와 y_Pos을 좌표로 하고 크기가 b_width, b_height의 너비와 높이를 가지는 움직이는 사각형을 만든다.
}
