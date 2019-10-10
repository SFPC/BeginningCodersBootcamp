#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // turn on light
    pointLight.enable();
    
    // tell of to pay attention to lights
    ofEnableLighting();
    
    ofEnableDepthTest();
    
    pointLight.setPosition(1000, 1000, 1000 + 1000 * sin(ofGetElapsedTimef()));
    

    ofBackground(0);
    
    cam.begin();
    
        ofPushMatrix();
//            ofDrawPlane(<#float x#>, <#float y#>, <#float z#>, <#float width#>, <#float height#>)
            ofDrawBox(200);
            ofDrawAxis(300);
        ofPopMatrix();
    
    cam.end();
    
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
