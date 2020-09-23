#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
			font.load("typo-hoop.demo-bold.otf", 100,true,true,true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 39, 137);
	//ofBackground(230);
	ofEnableAlphaBlending();
	
	ofPath intersection;
	ofPath worda;
	ofPath wordb;

	// let's find the intersection

	vector< ofPath >paths1 = font.getStringAsPoints("dietma");
	vector< ofPath >paths11 = font.getStringAsPoints("winkler");
	for (auto & path : paths1) {
		path.translate(ofPoint(250 - mouseX * 0.3, 450));
		intersection.append(path);
		worda.append(path);
	}
	for (auto & path : paths11) {
		path.translate(ofPoint(250 + mouseX * 0.3, 350));
		intersection.append(path);
		worda.append(path);
	}

	vector< ofPath >paths2 = font.getStringAsPoints("dietma");
	vector< ofPath >paths22 = font.getStringAsPoints("winkler");
	for (auto & path : paths2) {
		path.translate(ofPoint(250+mouseX*0.3, 450));
			intersection.append(path);
			wordb.append(path);
	}
	for (auto & path : paths22) {
		path.translate(ofPoint(250 - mouseX * 0.3, 350));
		intersection.append(path);
		wordb.append(path);
	}
	// comment this to see the oppostite

	intersection.setPolyWindingMode(OF_POLY_WINDING_ABS_GEQ_TWO);
	ofEnableBlendMode(OF_BLENDMODE_ALPHA);

	worda.setColor(ofColor(255, 255, 0,220));
	worda.draw();
	wordb.setColor(ofColor(135, 96, 227));
	wordb.draw();
	intersection.setColor(ofColor(125, 217, 161));
	intersection.draw();
		


	/*

	ofSetColor(255, 225, 0);
	font.drawString("dietmar", 350, 200);//yellow font
	ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
	ofSetColor(135, 96, 227, 127);   // purple, 50% transparent
	font.drawString("dietmar", 400, 200);//purple font

	ofSetColor(255, 225, 0);
	font.drawString("dietmar", 350, 100);//yellow font
	ofEnableBlendMode(OF_BLENDMODE_SCREEN);
	ofSetColor(135, 96, 227, 127);   // purple, 50% transparent
	font.drawString("dietmar", 400, 100);//purple font


	ofSetColor(255, 225, 0);
	font.drawString("dietmar", 350, 800);//yellow font
	ofEnableBlendMode(OF_BLENDMODE_ALPHA);
	ofSetColor(135, 96, 227, 127);   // purple, 50% transparent
	font.drawString("dietmar", 400, 800);//purple font
	*/


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
