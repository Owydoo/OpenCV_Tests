//
//  chapter3.hpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 06/11/2021.
//

#ifndef chapter3_hpp
#define chapter3_hpp

#include "utils.hpp"

Mat getImageSmaller(Mat image);
Mat getImageSmaller(Mat image, int width, int height);
void displayImgSize(Mat img);
Mat scaleDownImage(Mat img, double coeff);

Mat cropImage(Mat img, int distanceFromLeft, int distanceFromTop, int width, int height);


#endif /* chapter3_hpp */
