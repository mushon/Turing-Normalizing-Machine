clone those addons (from github):

ofxCv
ofxOpenCv (included in oF)
ofxFaceTracker
ofxOpenNI

rename ofxFaceTracker Tracker.cc/h to 
FTracker.cc/h (or whatever) - this solves Tracker issues with ofxCv's Tracker.cpp/h

Download & Install OpenNI 1.5.2.x
//put link
Restart Computer (sets paths)

Copy facetracker/model/ directory to bin/data/model/ of the project
