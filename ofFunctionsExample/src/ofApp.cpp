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
    
    ofSetColor(255, 255, 255);
    
    //ofDrawCircle(400, 400, ofGetElapsedTimef()*10);
    
//    ofSeedRandom(mouseX*100);
//    ofDrawCircle(100, 400, ofRandom(10,50));
//    ofDrawCircle(200, 400, ofRandom(10,50));
//    ofDrawCircle(300, 400, ofRandom(10,50));
//    ofDrawCircle(400, 400, ofRandom(10,50));
//    ofDrawCircle(500, 400, ofRandom(10,50));
    
    //cout << ofGetElapsedTimef() << endl;
    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 100);
    
//    cout << mouseX << endl;
//
//    float radius = ofMap(mouseX, 0, ofGetWidth()/2, 200, 50, true);
//
//    ofDrawCircle(ofGetWidth()/2,
//                 ofGetHeight()/2,
//                 radius);
    
    //cout << sin(ofGetElapsedTimef()) << endl;
    
    float radius = ofMap(sin(ofGetElapsedTimef()),
                         -1,1, 0, 100);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    
    
    
    //cout << (int)ofRandom(0,100) << endl;
    
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
