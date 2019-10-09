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
	
	ofDrawLine(30, 30, 30, 500);
	ofDrawLine(30, 30, 100, 100);
	ofDrawLine(100, 100, 100, 200);
	ofDrawLine(100, 200, 30, 280);
	ofDrawLine(30, 280, 100, 500);

	ofDrawRectangle(120, 30, 80, 500 - 30);
	
	ofDrawLine(230, 30, 230, 500);
	ofDrawLine(230, 30, 300, 100);
	ofDrawLine(300, 100, 300, 200);
	ofDrawLine(300, 200, 230, 280);
	ofDrawLine(230, 280, 300, 350);
	ofDrawLine(300, 350, 300, 450);
	ofDrawLine(300, 450, 230, 500);

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
