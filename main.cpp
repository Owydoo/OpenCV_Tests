
#include "chapter1.hpp"
#include "chapter2.hpp"
#include "chapter3.hpp"
#include "chapter4.hpp"
#include "utils.hpp"

///////////////// Webcam //////////////////////

int main() {

//    Mat img = getTestImage();
//    Mat img = getImageWitchPath("res/XPS.jpg");

    Mat img = createBlankImage();
    
    imshow("Image", img);
    
    waitKey(0);
    
    return 0;
    
}
