#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    
    
    for (int i = 1; i < previousPoints.size(); i = i + 1) {
//        float x = previousPoints[i].x;
//        float y = previousPoints[i].y;
//        ofDrawCircle(x, y, 2);
        
        // we could do this
//        ofDrawCircle(previousPoints[i].x, previousPoints[i].y, 2);
        
        // last time we had
//        ofDrawLine(previousx, previousy, currentx, currenty);
        
        float previousx = previousPoints[i - 1].x;
        float previousy = previousPoints[i - 1].y;
        float currentx = previousPoints[i].x;
        float currenty = previousPoints[i].y;
        ofDrawLine(previousx, previousy, currentx, currenty);
        
    }
    
    if (previousPoints.size() > 100) {
        previousPoints.erase(previousPoints.begin());
    }
    
    // once we have stuff in our vector - can we change it?
//    previousPoints[0].x = 100;
    
    // same as above
//    ofPoint p = previousPoints[0];
//    p.x = 100;
//    previousPoints[0] = p;
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    ofPoint myPoint;
    myPoint.x = mouseX;
    myPoint.y = mouseY;
    
    previousPoints.push_back(myPoint);
    
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
