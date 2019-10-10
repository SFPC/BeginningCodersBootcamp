#include "ofApp.h"

void ofApp::drawLetterR() {
	
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	ofDrawLine(30, 30, 30, 500);
	ofDrawLine(30, 30, 100, 100);
	ofDrawLine(100, 100, 100, 200);
	ofDrawLine(100, 200, 30, 280);
	ofDrawLine(30, 280, 100, 500);
	
//	float x = mouseX;
	float x = 200;

	ofDrawLine(x + 30, 30, x + 30, 500);
	ofDrawLine(x + 30, 30, x + 100, 100);
	ofDrawLine(x + 100, 100, x + 100, 200);
	ofDrawLine(x + 100, 200, x + 30, 280);
	ofDrawLine(x + 30, 280, x + 100, 500);
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
