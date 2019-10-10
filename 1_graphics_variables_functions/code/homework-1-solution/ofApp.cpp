#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
  ofBackground(0);
  
  // draw ground
  ofDrawRectangle(0, ofGetWidth() / 2, ofGetWidth(), ofGetHeight());
  
  // draw sun
  ofDrawCircle(200, 200, 50);
  ofSetLineWidth(5);
  ofDrawLine(100, 200, 300, 200);
  ofDrawLine(200, 100, 200, 300);
  ofDrawLine(100, 100, 300, 300);
  ofDrawLine(100, 300, 300, 100);
  
  
  // draw person 1
  ofTranslate(300, ofGetWidth() / 2);
  drawPerson();
  
  // draw person 2
  ofTranslate(100, 0);
  drawPerson();
}

void ofApp::drawPerson() {
  // origin of the person is the bottom of the figure
  // therefore, a lot of these numbers are negative in order to draw
  // shapes above the origin
  
  // body
  ofDrawRectangle(-10, -100, 20, 100 - 30);
  
  // legs
  ofDrawLine(-10, -30, -20, 0);
  ofDrawLine(10, -30, 20, 0);
  
  // arms
  ofDrawLine(-30, -70, 30, -70);
  
  // head
  ofDrawCircle(0, -100, 20);
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
