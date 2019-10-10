#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	player2Y = ofGetHeight() / 2;
}

//--------------------------------------------------------------
void ofApp::update(){
	if (upKey) {
		player2Y = player2Y - 4;
	}
	if (downKey) {
		player2Y = player2Y + 4;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawRectangle(ofGetWidth() - 50, player2Y, 30, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == OF_KEY_UP) {
		upKey = true;
	}
	if (key == OF_KEY_DOWN) {
		downKey = true;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == OF_KEY_UP) {
		upKey = false;
	}
	if (key == OF_KEY_DOWN) {
		downKey = false;
	}

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
