#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup()
{
  w = ofGetWidth();
  h = ofGetHeight();
  
  csvFileName = "controlPoints.csv";
  
  controlPoints.addPoint(     100,     100 );
  controlPoints.addPoint( w - 100,     100 );
  controlPoints.addPoint( w - 100, h - 100 );
  controlPoints.addPoint(     100, h - 100 );
  
  controlPoints.setLimitArea( { 50, 50, w - 100, h - 100 } );
  
  ofShowCursor();
  ofBackground( 40 );
}

//--------------------------------------------------------------
void ofApp::draw()
{
  controlPoints.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed( int _key )
{
  if( _key == 's' ) controlPoints.saveToCsv( csvFileName );
  if( _key == 'l' ) controlPoints.loadFromCsv( csvFileName );
}
