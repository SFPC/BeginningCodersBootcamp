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
    
    ofPushMatrix();
    
        ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    
        ofRotateDeg(2 * ofGetElapsedTimef());

        ofSetColor(255);
    
        ofDrawRectangle(-100, -100, 200, 200);
    
//        ofDrawGrid(50, 100, true, false, false, true);
        ofPushMatrix();
    
//            ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
//
//            ofRotateDeg(-20 * ofGetElapsedTimef());
    
            ofTranslate(mouseX, mouseX);
    
            ofSetColor(255, 0, 0);
    
            ofDrawRectangle(-10, -10, 20, 20);
    
            ofDrawGrid(50, 100, true, false, false, true);
    
        ofPopMatrix();
    
    
    ofPopMatrix();
    
    
    
    
//    ofRotateDeg
//    ofDrawRectangle(-10, -10, 50, 50);
    
    
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
