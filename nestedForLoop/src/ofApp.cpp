#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//    for (int i = 0; i < 10; i++){
//        for (int j = 0; j < 10; j++){
//            cout << i << " " << j << endl;
//        }
//    }
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    ofSetColor(255);
    
    // init / check (exit) / iterate
    
    
    
    for (int i = 0; i < 40; i++){
        for (int j = 0; j < 40; j++){

            float distance = ofDist(i*20, j*20,
                                                mouseX, mouseY);
            // float color = ofMap(distance, 0, 100, 0, 255, true);
            
//            if (distance < 100){
//                ofSetColor(255);
//            } else {
//                ofSetColor(0);
//            }
            ofSetColor(255);
//            ofSetColor(ofMap(i, 0, 100, 0,255),
//                       ofMap(j, 0, 100, 0,255),
//                       mouseX);
            //ofSetColor(ofRandom(0,255));
            ofCircle(i*20, j*20, 5 + 5 * sin(distance*0.01 - ofGetElapsedTimef()));
            //ofDrawRectangle(100 + i*5, 50 + j * 5, 5,5);
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
