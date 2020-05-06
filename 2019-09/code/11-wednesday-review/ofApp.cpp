#include "ofApp.h"

int ofApp::thinkofanumber(){
	return floor(ofRandom(1, 11));
}

int ofApp::thinkofanumberbetween(int high) {
	return ceil(ofRandom(high));
}


void ofApp::think() {
	
}


//--------------------------------------------------------------
void ofApp::setup() {
	x = 40;
	cout << thinkofanumber() << endl;
	cout << thinkofanumberbetween(100) << endl;
	cout << thinkofanumberbetween(20) << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofDrawLine(0, 1, 2,3 );
	
	
	
	int x;
	
	x = 40 + sin(ofGetElapsedTimef());
	
	
	variable = 3.14; // step 2
	// combined step 1 and 2
	float variable2 = 3.14;
	
//	cout << variable << endl; // 3
	
	int wholepart = sqrt(abs(variable) * 3) + variable; // 3

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
