#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    enc.init(); //Search for and initialize the PhidgetEncoder
    
}

//--------------------------------------------------------------
void ofApp::update(){
    enc.update(); //Call the update method which gets the encoder position
    encoderPos = enc.encPos; // set variable encoderPos to the value of our PhidgetEncoder objects' public variable encPos
}

//--------------------------------------------------------------
void ofApp::draw(){
    cout << "Encoder position: " << encoderPos << endl;
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
