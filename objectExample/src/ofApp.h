#pragma once

#include "ofMain.h"

class particle {
    
    public:
    
    float x;
    float y;
    float radius;
    
    void setup(){
        x = ofRandom(0, ofGetWidth());
        y = ofRandom(0, ofGetHeight());
        radius = ofRandom(1,5);
    }
    
    void update(){
        y = y + 1;
        if (y > ofGetHeight()){
            y = 0;
        }
    }
    
    void draw(){
        ofDrawCircle(x,y,radius);
    }

};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        particle myParticle[1000];
    
		
};
