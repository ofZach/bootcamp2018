#include "ofApp.h"



void ofApp::drawCoolRectangle(float x,
                              float y,
                              float width,
                              float height,
                              int count){
    
    float random = ofRandom(0,1);
    if (count < 8 && random > 0.2){
        drawCoolRectangle(x,y, width/2, height/2, count+1);
        drawCoolRectangle(x+width/2,y, width/2, height/2, count+1);
        drawCoolRectangle(x,y+height/2, width/2, height/2, count+1);
        drawCoolRectangle(x+width/2,y+height/2, width/2, height/2, count+1);
    } else {
        ofDrawRectangle(x, y, width, height);
    }
    
    
    //ofDrawRectangle(x,y,width,height);
}


//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSeedRandom(mouseX*100);
    
    ofNoFill();
    ofSetColor(0,0,0);
    drawCoolRectangle(10,10,500,500, 0);
    
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
