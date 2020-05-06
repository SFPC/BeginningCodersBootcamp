#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    // for arrays
    previousPositions[0] = 3.14;
    previousPositions[20] = 5.3;
    
    // We could do this instead
//    previousPositions1 = 3.14;
//    previousPositions19 = 5.3;
    
    cout << previousPositions[0] << endl;
    
    
    // for vectors
//    previousPositionsVector.push_back(10.0);
//    previousPositionsVector.push_back(20.0);
//    previousPositionsVector.push_back(30.0);
//    previousPositionsVector.push_back(40.0);
//    previousPositionsVector.push_back(50.0);
//    previousPositionsVector.push_back(60.0);
//    previousPositionsVector.push_back(70.0);
//    previousPositionsVector.push_back(80.0);
//    previousPositionsVector.push_back(90.0);
//
//    cout << previousPositionsVector.size() << endl;
//
//    cout << previousPositionsVector[0] << endl;
    
    
    for (int i = 0; i < 500; i++) {
        previousPositionsVector.push_back(ofRandom(10));
    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    for (int i = 0; i < previousPositionsVector.size(); i = i + 1) {
        ofDrawCircle(previousPositionsVector[i], 0, 5);
    }
    
    
//    ofDrawLine(lastPosition.x, lastPosition.y, mouseX, mouseY);
//
//    lastPosition.x = mouseX;
//    lastPosition.y = mouseY;
    
    
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
