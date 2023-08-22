#include <string>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int, char**) {
    cout << "Hello, World!" << endl;
    Mat img = imread("./resources/jojo.jpeg", ImreadModes::IMREAD_UNCHANGED);
    Mat gray = imread("./resources/jojo.jpeg", ImreadModes::IMREAD_GRAYSCALE);
    // imshow("test", img); // not working on MacOS
    vector<int>compress_params;
    int quality = 5;
    compress_params.push_back(ImwriteFlags::IMWRITE_JPEG_QUALITY);
    compress_params.push_back(quality);

    imwrite("./output/newjojo.jpg", img);
    imwrite("./output/grayjojo.jpg", gray);
    imwrite("./output/lowjojo.jpg", img, compress_params);

    cout << img.channels() << endl;
    return 0;
}
