//
//  chapter2.cpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 01/11/2021.
//

#include "chapter2.hpp"
#include "utils.hpp"

void printPhotoInGray(Mat img)
{
    cout << "printPhotoInGray" << endl;
    Mat imgGray;
    
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    
    imshow("Image", img);
    imshow("Image gray", imgGray);
    
    waitKey(0);
}

void blurPhoto(Mat img){
    Mat imgBlur;
    GaussianBlur(img, imgBlur, Size(7,7), 5,0);
    imshow("Image", img);
    imshow("Image blur", imgBlur);
    waitKey(0);
}

Mat getEdgeDetection(Mat img){

    Mat imgBlur;
    Mat imgCanny;
    GaussianBlur(img, imgBlur, Size(3,3), 3,0);
    Canny(imgBlur, imgCanny, 50, 150);
    
    return imgCanny;
}

void displayEdgeDetection(Mat img){

    Mat imgCanny = getEdgeDetection(img);
    imshow("img", img);
    imshow("img canny", imgCanny);
    
    waitKey(0);
}

void edgeDetectionDilated(Mat img){
//    Mat img = getTestImage();
    
    Mat imgCanny = getEdgeDetection(img);
    Mat imgDilated;
    
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
    dilate(imgCanny, imgDilated, kernel);
    
    imshow("Image", img);
    imshow("Img Canny", imgCanny);
    imshow("Img canny dilated", imgDilated);
    
    waitKey();
    
}


