
#include "chapter1.hpp"
#include "chapter2.hpp"
#include "utils.hpp"

///////////////// Webcam //////////////////////

int main() {

    Mat img = getTestImage();
//    Mat img = getImageWitchPath("res/XPS.jpg");
    displayEdgeDetectionDilated(img);
    return 0;
    
}
