
#include "chapter1.hpp"
#include "chapter2.hpp"
#include "chapter3.hpp"
#include "utils.hpp"

///////////////// Webcam //////////////////////

int main() {

//    Mat img = getTestImage();
    Mat img = getImageWitchPath("res/XPS.jpg");

    Mat imgCropped;
    imgCropped = cropImage(img, 500, 500, 1000, 1000);
    
    imshow("Image", img);
    imshow("Image cropped", imgCropped);

    waitKey(0);
    
    return 0;
    
}
