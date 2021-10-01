#pragma once
#include <vector>


class FallingBallContainer
{
private:
    vector<FallingBall*> balls;
public:
    FallingBallContainer(int amountOfBalls);
    void setup();
    void update();
    void draw();

    ~FallingBallContainer();
};
