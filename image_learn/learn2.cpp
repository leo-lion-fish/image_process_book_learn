#include<iostream>
#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>
using namespace std;
using namespace cv;
void DrawTextImage()
{
	Mat img(Size(500, 500), CV_8UC3);
	string text = "Simple Text";
	int font_face = FONT_HERSHEY_COMPLEX;
	double font_scale = 2;
	int thickness = 2;
	int baseline;
	Size text_size = getTextSize(text, font_face, font_scale, thickness, &baseline);
	Point origin;
	origin.x = img.cols / 2 - text_size.width / 2;
	origin.y = img.rows / 2 + text_size.height / 2;
	putText(img, text, origin, font_face, font_scale, Scalar(255, 255, 0), thickness, 8, 0);
	imshow("image", img);
	waitKey(0);
}
int main()
{
	//Rect rect(100,100,200,300);
	//Mat img(500, 500, CV_8UC3, Scalar(0, 0, 0));
	//rectangle(img, rect,Scalar(255,255,255),1);
	//namedWindow("rect", WINDOW_AUTOSIZE);
	//imshow("rect", img);
	//waitKey(0);
	DrawTextImage();
	system("pause");
	return 0;
}