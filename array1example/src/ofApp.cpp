#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //circleHeight = 400;
    for (int i = 0; i < 500; i++){
        circleHeight[i] = 400;
        circleSpeed[i] = ofRandom(2, 7);
        circleSize[i] = ofRandom(3,20);
    }
    
    bAnimate = true;
}

void ofApp::update(){
    
}

void ofApp::draw(){
    ofBackground(0);
    
    
    for (int i = 0; i < 500; i++){
        // draw the circle
        ofDrawCircle(i*2, circleHeight[i], circleSize[i]);
        
        if (bAnimate){
            // increase the height
            circleHeight[i] = circleHeight[i] + circleSpeed[i];
            
            // check if we are too far and reset
            if (circleHeight[i] > ofGetHeight()){
                circleHeight[i] = 0;
            }
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        bAnimate = !bAnimate;
    }
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
