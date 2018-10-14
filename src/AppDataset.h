#pragma once

#include "ofMain.h"
#include "ofxJSON.h"
#include "RecordedData.h"

class AppDataset
{

public:

	void saveSession(const RecordedData& record);

	void saveLibrary(string url);
	void loadLibrary(string url);

	RecordedData select4();

private:

	typedef list<RecordedData> DataSet;
	DataSet dataset; // the whole shablang
	ofxJSONElement datasetJson;

	// on startup, find dirs (xml?)
	// load recordings

	void updateScores(const RecordedData& data);


};