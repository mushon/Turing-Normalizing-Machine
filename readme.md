##Install

1. clone those addons (from github):

    ```
    git clone https://github.com/kylemcdonald/ofxCv.git
    git clone https://github.com/eranws/ofxFaceTracker.git
    git clone https://github.com/eranws/ofxOpenNI.git // (experimental branch)
    git clone https://github.com/rezaali/ofxUI
    ```
    the ofxOpenCv libary is also required but should be included in oF
    <!--
    irrelevant if cloning eranws/ofxFacetracker
    
    rename ofxFaceTracker Tracker.cc/h to 
    FTracker.cc/h (or whatever) - this solves Tracker issues with ofxCv's Tracker.cpp/h
    -->

2. Download & Install OpenNI 2.2.x

    https://dl.dropboxusercontent.com/u/3685114/OpenNI_Nite_install/OpenNI-Windows-x86-2.2.msi

3. Download & Install  Nite

    https://dl.dropboxusercontent.com/u/3685114/OpenNI_Nite_install/NiTE-Windows-x86-2.2.msi

4. Restart Computer (sets paths)
