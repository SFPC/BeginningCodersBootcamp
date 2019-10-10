#include "ofApp.h"

// todo: include (int width, int height) parameters
void ofApp::drawLetterR(int x, int y) {
	ofDrawLine(x + 0, y + 0, x + 0, y + 470);
	ofDrawLine(x + 0, y, x + 70, y + 100);
	ofDrawLine(x + 70, y + 70, x + 70, y + 200);
	ofDrawLine(x + 70, y + 170, x + 0, y + 280);
	ofDrawLine(x + 0, y + 250, x + 70, y + 500);
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
	
	drawLetterR(50, 50);
	drawLetterR(200, 100);
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
