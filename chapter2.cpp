//
//  chapter2.cpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 01/11/2021.
//

#include "chapter2.hpp"


#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void printPhotoInGray()
{
    cout << "printPhotoInGray" << endl;
    string path = "Resources/test.png";
    Mat img = imread(path);
    
    Mat imgGray;
   
    
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    
    imshow("Image", img);
    imshow("Image gray", imgGray);
    
    waitKey(0);
}

void blurPhoto(){
    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgBlur;
    GaussianBlur(img, imgBlur, Size(7,7), 5,0);
    imshow("Image", img);
    imshow("Image blur", imgBlur);
    waitKey(0);
}

void edgeDetection(){
    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgBlur;
    Mat imgCanny;
    GaussianBlur(img, imgBlur, Size(3,3), 3,0);
    Canny(imgBlur, imgCanny, 50, 150);
    
    imshow("Image blurred", imgBlur);
    imshow("Image canny", imgCanny);
    
    waitKey(0);
}
