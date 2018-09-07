#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//    int counter = 0;
//    while (counter < 10){
//        cout << counter << endl;
//        counter = counter + 1;
//    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
   
    
    
//    ofSetColor(255,255,255);
//
//    xPos = xPos + 1;
//
//    if (mouseX < ofGetWidth()/3){
//        ofBackground(0,0,0);
//    } else if (mouseX >= ofGetWidth()/3 &&
//               mouseX <= 2*ofGetWidth()/3){
//        ofBackground(255,0,0);
//    } else {
//        if (mouseY > 400){
//            ofBackground(0,255,0);
//        } else {
//             ofBackground(0,0,255);
//        }
//    }
    
    ofBackground(0);
    for (int i = 0; i < 10; i++){
        ofDrawCircle(i*50, 500, 20);
    }
    
    
    
    
    
    
//
//    if (xPos > ofGetWidth()){
//        xPos = 0;
//    }
//
//    ofDrawCircle(xPos, 500, 100);
    
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
