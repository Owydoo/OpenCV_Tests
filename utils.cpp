//
//  utils.cpp
//  OpenCV_Tests
//
//  Created by Hugo Hersemeule on 01/11/2021.
//

#include "utils.hpp"

Mat getTestImage(){
    string path = "Resources/test.png";
    Mat img = imread(path);
    return img;
}
