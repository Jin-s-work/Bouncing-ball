#include "ball.h"
 
Ball::Ball(){
    // 초기 색을 지정합니다
    color.set( ofRandom(255), ofRandom(255), ofRandom(255));
 
    // 공의 x위치를 초기화합니다.
    x = ofRandom( ofGetWindowWidth() );
 
    // 공의 y위치를 초기화합니다.
    y = ofRandom( ofGetWindowHeight() );
}
 
void Ball::moveTo(){
 
}
 
void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofCircle( x, y, 30);
}
