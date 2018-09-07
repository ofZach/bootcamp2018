#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < pts.size(); i++){
        ofDrawCircle(pts[i].x, pts[i].y, 10);
    }
    
    //cout << pts.size() << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        pts.clear();
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

    ofPoint myPt;
    myPt.x = x;
    myPt.y = y;
    pts.push_back(myPt);
    
    if (pts.size() > 50){
        pts.erase(pts.begin());
    }
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
