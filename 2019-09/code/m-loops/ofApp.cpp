#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(5);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    cout << ofGetFrameNum() << endl;
    
    ofBackground(0);
    
    // NOT IDEAL
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
    
    
    
//    cout << ofGetFrameNum() << endl;
//    for (int i = 0; i < 1000; i = i + 1) {
////        cout << i << endl;
//        ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    }
    
    
    
    // THIS IS THE SAME THING
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
//    ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 5);
    
    int gridSize = 50;
    int counter = 0;
    for (int j = 0; j < ofGetHeight(); j = j + gridSize) {
        for (int i = 0; i < ofGetWidth(); i = i + gridSize) {
            counter = counter + 1;
            ofSetColor(0.5 * counter);
            ofDrawCircle(i, j, 5);
        }
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
