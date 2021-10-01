#include "Particle.h"


void Particle::update() {
    speed += moving;        // speed에 moving더해서 update
    position += speed;      // position에 speed더해서 update
}

void Particle::draw() {
    ofSetColor(0,0,0);      // 색 black
    ofDrawCircle(position, radius);     // position에 맞추어 공을 움직이고 radius에 맞춰 공의 크기를 만든다.
}
