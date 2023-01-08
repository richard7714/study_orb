//
// Created by ma on 23. 1. 8.
//

#define MAT_CV
#ifndef MAT_CV

#include <iostream>
#include <string>
#include<opencv2/opencv.hpp>

    using namespace std;
    using namespace cv;

int main()
{
        cv::namedWindow("dog", WINDOW_AUTOSIZE);

        std::string path = "../image_0/000000.png";
        cv::Mat image = cv::imread(path, cv::IMREAD_ANYCOLOR);

        if (image.empty())
        {
            std::cerr << "Image Loaded Fail !! " << std::endl;
            return -1;
        }

        unsigned char* pData = image.data;
        int width = image.cols;
        int height = image.rows;
        int channel = image.channels();
        int depth = image.depth();
        int type = image.type();

        std::cout << "width : " << width << std::endl;
        std::cout << "height : " << height << std::endl;
        std::cout << "channel : " << channel << std::endl;
        std::cout << "depth : " << depth << std::endl;
        std::cout << "type : " << type << std::endl;

        while (true)
        {
            cv::imshow("dog", image);

            if (waitKey(100) == 27)
                break;
        }
        return 0;

    }
#endif