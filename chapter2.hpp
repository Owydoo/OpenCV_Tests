//
//  chapter2.hpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 01/11/2021.
//

#ifndef chapter2_hpp
#define chapter2_hpp
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void printPhotoInGray(Mat img);

void blurPhoto(Mat img);

Mat getEdgeDetection(Mat img);
void displayEdgeDetection(Mat img);

Mat getEdgeDetectionDilated(Mat img);
void displayEdgeDetectionDilated(Mat img);

#endif /* chapter2_hpp */
