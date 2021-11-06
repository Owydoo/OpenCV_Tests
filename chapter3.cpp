//
//  chapter3.cpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 06/11/2021.
//

#include "chapter3.hpp"

Mat getImageSmaller(Mat img){
    Mat imgResized;
    
    resize(img, imgResized, Size(640,480));
    
    return imgResized;
}

Mat getImageSmaller(Mat img, int width, int height){
    
    Mat imgResized;
    
    resize(img, imgResized, Size(width,height));
    
    return imgResized;
}

void displayImgSize(Mat img){
    cout << img.size() << endl;
}

Mat scaleDownImage(Mat img, double coeff){
    Mat imgResized;
    
    resize(img, imgResized, Size(), coeff, coeff);
    
    return imgResized;
}

Mat cropImage(Mat img, int distanceFromLeft, int distanceFromTop, int width, int height){
    Mat imgCropped;
    
    Rect roi(distanceFromLeft, distanceFromTop, width, height);
    
    imgCropped = img(roi);
    
    return imgCropped;
}
