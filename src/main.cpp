#include "ofMain.h"
//#include "testApp.h"
#include "gameCore.h"
#include "ofAppGlutWindow.h"

int main() {
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1280,720, OF_WINDOW);
	//ofRunApp( new testApp());
	ofRunApp(new gameCore());
}
