
#include "chapter1.hpp"
#include "chapter2.hpp"
#include "utils.hpp"

///////////////// Webcam //////////////////////

int main() {

    Mat img = getTestImage();
    edgeDetectionDilated(img);
    return 0;
    
}
