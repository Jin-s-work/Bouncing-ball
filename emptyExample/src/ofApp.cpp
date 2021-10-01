#include "ofApp.h"


void ofApp::setup(){
    
    P.position.x = ofGetWidth()/2;      // x위치를 전체 width의 반으로
    P.position.y = ofGetHeight()/2;     // y위치를 전체 height의 반으로
    P.speed.x = 5;
    P.speed.y = 5;       // 각각의 속도를 5로
    P.moving.y = 1;

}

void ofApp::update(){
    if (life > 0) {     // 아직 살아있을 때
        B.update();     //Boarding update한다
        P.update();     //Particle update한다
    }
    
    // 오른쪽 벽을 체크
    if (P.position.x + P.radius > ofGetWidth()) {
        P.speed.x = P.speed.x * -1;       //-1을 곱해서 방향 반대로
        P.position.x = ofGetWidth() - P.radius;     // 위치를 변화
    }
    
    // 아닐 경우엔 왼쪽 벽을 체크
    else if (P.position.x - P.radius < 0) {
        P.speed.x = P.speed.x * -1;       // -1을 곱해서 방향 반대로
        P.position.x = 0 + P.radius;        // 위치를 변화
    }

    else if ((B.xPosition < P.position.x && P.position.x < (B.xPosition + B.boardWidth)) && (P.position.y + P.radius > B.yPosition)) {      // 밑의 칸과 부딪칠 때
        P.speed.y = P.speed.y * -1;       // -1을 곱해서 방향 반대로
        P.position.y = B.yPosition - P.radius;
       
        // 다시 시작할때
    } else if (P.position.y - P.radius > ofGetHeight()) {
        P.position.x = ofGetWidth()/2;
        P.position.y = 20;      // y축이 20일때부터 시작
        P.speed.x = 5;
        P.speed.y = 5;       // 속도를 5로 통일
        P.moving.y = 1;
        
        if (life > 0) {
           life--;      // 아직 진행 중일 때 1줄임
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if (life > 0) {     // 아직 살아있을 때
        P.draw();       // Particle 실행
        B.draw();       // Boarding 실행
    } else {
        gameOver();     // 종료
    }
}

void ofApp::gameOver(){
    ofDrawBitmapString("GAMEOVER", ofGetWidth()/2, ofGetHeight()/2);        //게임이 끝났을 때 gameover 화면에 표시
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
