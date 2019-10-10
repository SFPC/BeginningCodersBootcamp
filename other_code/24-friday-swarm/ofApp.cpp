#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for(int i = 0; i < 20; i = i + 1) {
		bugs.push_back(ofPoint());
		offsets.push_back(ofPoint(ofRandom(100), ofRandom(100)));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for(int i = 0; i < bugs.size(); i = i + 1) {
		float x = ofGetWidth() * ofNoise(offsets[i].x + ofGetElapsedTimef());
		float y = ofGetHeight() * ofNoise(offsets[i].y + ofGetElapsedTimef());
		bugs[i] = ofPoint(x, y);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	
	for(int i = 0; i < bugs.size(); i = i + 1) {
		ofDrawCircle(bugs[i], 1);
	}
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
