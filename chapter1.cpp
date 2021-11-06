//
//  chapter1.cpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 31/10/2021.
//
#include "chapter1.hpp"


/**
 Print a test photo from Resources folder
 */
void printPhoto(Mat img)
{
    cout << "printPhoto" << endl;

    imshow("Image", img);
    waitKey(0);
}

void testWebcam(){
    VideoCapture cap(0);
    Mat img;
    
    while (true) {
        
        cap.read(img);
        imshow("Image", img);
        waitKey(1);
        
    }
}

void testVideo(){
    string path = "Resources/test_video.mp4";
    VideoCapture capture(path);
    
    Mat img;
    
    while (true) {
        capture.read(img);
        imshow("Image", img);
        
        waitKey(20); //time in ms between each image rendered
    }
}
