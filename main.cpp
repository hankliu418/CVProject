#include <string>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int, char**) {
    cout << "Hello, World!" << endl;
    Mat img = imread("./resources/jojo.jpeg", -1);

    vector<int>compress_params;

    imwrite("./resources/newjojo.jpg", img);

    cout << img.channels() << endl;
    return 0;
}
