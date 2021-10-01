#pragma once

#include "ofMain.h"


class Particle {
    
public:
    // 업데이트
    void update();
    
    // 공들 보여줌
    void draw();
    
    ofVec3f position;       // vector들 선언
    ofVec3f speed;       // vector들 선언
    ofVec3f moving;       // vector들 선언
    
    int age;
    int radius = 5;     // 반지름 5로
};
