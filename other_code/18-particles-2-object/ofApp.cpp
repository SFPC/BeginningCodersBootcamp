#include "ofApp.h"

void Particle::setup(ofPoint pos) {
//	position.x = ofRandom(ofGetWidth());
//	position.y = ofRandom(ofGetHeight());
	position = pos;
	direction.x = ofRandom(-10, 10);
	direction.y = ofRandom(-10, 10);
	radius = ofRandom(2, 5);
	color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Particle::update() {
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

void Particle::draw() {
	ofSetColor(color);
	ofDrawCircle(position, radius);
}

//--------------------------------------------------------------
void ofApp::setup(){
	ofPoint randomPoint;
	randomPoint.x = ofRandom(ofGetWidth());
	randomPoint.y = ofRandom(ofGetHeight());

	for (int i = 0; i < 1000; i = i + 1) {
		Particle p;
		p.setup(randomPoint);
		particles.push_back(p);
	}
}

//--------------------------------------------------------------
void ofApp::update() {
	for (int i = 0; i < particles.size(); i = i + 1) {
		particles[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	for (int i = 0; i < particles.size(); i = i + 1) {
		particles[i].draw();
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
