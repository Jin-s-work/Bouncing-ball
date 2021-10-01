#ifndef ball_h
#define ball_h
 
#include "ofMain.h"
 
class Ball {
public:
        // 생성자
        Ball();
 
        // 메서드(함수)
        void moveTo();
        void draw();
 
        // 속성
        int x;
        int y;
        ofColor color;
};
#endif
