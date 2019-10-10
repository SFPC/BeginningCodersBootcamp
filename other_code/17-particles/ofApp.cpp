#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	position.x = ofRandom(ofGetWidth());
	position.y = ofRandom(ofGetHeight());
	direction.x = ofRandom(-10, 10);
	direction.y = ofRandom(-10, 10);
	radius = ofRandom(10, 20);
	color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::update() {
	direction.y = direction.y + 0.2;
	position = position + direction;

	if (position.x < radius) {
		position.x = radius;
		direction.x = -direction.x;
	}
	if (position.y < radius) {
		position.y = radius;
		direction.y = -direction.y;
	}
	if (position.x > ofGetWidth() - radius) {
		position.x = ofGetWidth() - radius;
		direction.x = -direction.x;
	}
	if (position.y > ofGetHeight() - radius) {
		position.y = ofGetHeight() - radius;
		direction.y = -direction.y;
	}

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	ofSetColor(color);
	ofDrawCircle(position, radius);
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
