//
//  utils.hpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 01/11/2021.
//

#ifndef utils_hpp
#define utils_hpp

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

Mat getTestImage();
Mat getImageWitchPath(string path);

#endif /* utils_hpp */
