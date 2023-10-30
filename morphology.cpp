#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp> 
#include <opencv2/imgproc.hpp> 

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
	Mat image = imread("lena.jpg");
	Mat erode_out, dilate_out, open_out, close_out;
	//Erode
	erode(image, erode_out, getStructuringElement(MORPH_RECT, Size(3, 3)));
	imshow("original", image);
	imshow("Erode", erode_out);
	waitKey(0);
	

	//Delate
	dilate(image, dilate_out, getStructuringElement(MORPH_RECT, Size(3, 3)));
	imshow("Delate", dilate_out);
	waitKey(0);

	//opening
	//Mat kernel1 = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	//morphologyEx(image, open_out, CV_MOP_OPEN, kernel1);
	morphologyEx(image, open_out, MORPH_OPEN, getStructuringElement(MORPH_RECT, Size(3, 3)), Point(-1, -1), 2);
	imshow("opening", open_out);
	waitKey(0);

	//closing
	morphologyEx(image, close_out, MORPH_CLOSE, getStructuringElement(MORPH_RECT, Size(3, 3)), Point(-1, -1), 2);
	imshow("closing", close_out);
	waitKey(0);

	//destoryAllWindows();
	return(0);
}