#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	x = ofGetWidth() / 2;
	y = ofGetHeight() / 2;

	ofBackground(0);
	ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(0, 3);
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
	ofSetColor(255, 255);
//	ofBackground(0);
//	float x = ofGetWidth() / 2;
//	float y = ofGetHeight() / 2;
	
	float step = 3;
	x = x + ofRandom(-step, step);
	y = y + ofRandom(-step, step);
	
//	if the circle is off screen
	if (x > ofGetWidth()) {
		x = ofGetWidth();
	}
	
	if (y > ofGetHeight()) {
		y = ofGetHeight();
	}
	
	if (x < 0) {
		x = 0;
	}
	
	if (y < 0) {
		y = 0;
	}
	ofDrawCircle(x, y, 3);
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
