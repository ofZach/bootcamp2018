

#include "particle.h"


void particle::setup(){
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    radius = ofRandom(1,5);
    vx = ofRandom(-2,2);
    vy = ofRandom(-2,2);
    
}

void particle::update(){
    y = y + vy;
    x = x + vx;
}

void particle::draw(){
    ofDrawCircle(x,y,radius);
}
