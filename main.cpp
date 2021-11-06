
#include "chapter1.hpp"
#include "chapter2.hpp"
#include "chapter3.hpp"
#include "utils.hpp"

///////////////// Webcam //////////////////////

int main() {

//    Mat img = getTestImage();
    Mat img = getImageWitchPath("res/XPS.jpg");
    
    displayImgSize(img);
    
    Mat imgResized;
    imgResized = getImageSmaller(img, 1280, 720);
    
    Mat imgScaled;
    double coeff = 0.5;
    imgScaled = scaleDownImage(img, coeff);
    
    imshow("image", img);
    imshow("image resized", imgResized);
    imshow("image scale down", imgScaled);
    
    waitKey(0);
    
    return 0;
    
}
