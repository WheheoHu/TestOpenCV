#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main() {
	Mat img = imread("D:\\test.JPG");
	namedWindow("Picture");
	imshow("Picture", img);
	waitKey(6000);
	return 0;
}