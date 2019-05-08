#pragma once

#include "ofMain.h"
#include "ofxControlPointManager.h"


//--------------------------------------------------------------
class ofApp : public ofBaseApp
{
public:
  void setup();
  void draw();
  void keyPressed( int _key );
  
  float                  w, h;
  ofxControlPointManager controlPoints;
  std::string            csvFileName;
};
