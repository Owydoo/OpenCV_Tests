//
//  chapter4.cpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 06/11/2021.
//

#include "chapter4.hpp"

Mat createBlankImage(){
    Mat img(512, 512, CV_8UC3, Scalar(255,255,255));
//    img(width,
//    height,
//    type: here each pixel has a value between 0 & 255 and with 3 channels for this value,
//    color : we use Scalar to define a color, here it is white)
    
    return img;
}
