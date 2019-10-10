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
    
//    cout << ofGetWidth() << endl;
    
//    ofDrawLine(0, 0, ofGetWidth(), ofGetHeight());
    
//    cout << ofGetElapsedTimef() << endl;
    
    float myRandomNumber = ofRandom(1);
//    cout << myRandomNumber << endl;
    
//    cout << ofRandom(1) << endl;
    
//    cout << ofRandom(mouseX) << endl;
    
//    float xPos = ofRandom(mouseX, mouseY);
//    cout << xPos << endl;
//
//    ofDrawCircle(xPos, 0.5 * ofGetHeight(), 10);
    
    
    
//    float xPos = ofRandom(ofGetWidth());
//    float yPos = ofRandom(ofGetHeight());
////    float radius = ofRandom(0, 10);
//
//    ofDrawCircle(xPos, yPos, ofRandom(0, 10));
    
//    ofSetLineWidth(mouseX);
//
//    ofSetColor(0, 70, 190);
//    ofNoFill();
//    ofDrawCircle(0.5 * ofGetWidth(), 0.5 * ofGetHeight(), 100);
//
//    ofDrawRectangle(0, 0, 100, 300);
//
//    ofSetColor(70, 200, 190);
//    ofFill();
//    ofDrawRectangle(300, 500, 300, 50);
    
    
    ofSetLineWidth(20);
    
    ofSetColor(100, 200, 30);
    ofFill();
    ofDrawCircle(500, 500, 100);
    
    ofSetColor(0, 100, 255);
    ofNoFill();
    ofDrawCircle(500, 500, 100);
    
    
    
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
