//#include<iostream>
//#include<opencv2\opencv.hpp>
//#include<highgui.hpp>
//using namespace std;
//using namespace cv;
//Rect g_rectangle;
//bool g_bDrawingBox = false;
//RNG g_rng(12345);
//const String strWndName = "MouseWnd";
//void DrawRectangle(Mat& img, Rect rect)
//{
//	rectangle(img, rect, Scalar(g_rng.uniform(0, 255), g_rng.uniform(0, 255), g_rng.uniform(0, 255)), 4);
//}
//void onMouseCallback(int event, int x, int y, int flags, void* param)
//{
//	Mat& image = *(Mat*)param;
//	switch (event)
//	{
//	case EVENT_MOUSEMOVE:
//		if (g_bDrawingBox)
//		{
//			g_rectangle.width = x - g_rectangle.x;
//			g_rectangle.height = y - g_rectangle.y;
//		}
//		break;
//	case EVENT_LBUTTONDOWN:
//		g_bDrawingBox = true;
//		g_rectangle = Rect(x, y, 0, 0);
//		break;
//	case EVENT_LBUTTONUP:
//		g_bDrawingBox = false;
//		if (g_rectangle.width < 0)
//		{
//			g_rectangle.x += g_rectangle.width;
//			g_rectangle.width *= -1;
//		}
//		if (g_rectangle.height < 0)
//		{
//			g_rectangle.y += g_rectangle.height;
//			g_rectangle.height *= -1;
//		}
//		DrawRectangle(image, g_rectangle);
//		break;
//	default:
//		break;
//	}
//}
//int main()
//{
//	g_rectangle = Rect(-1, -1, 0, 0);
//	Mat srcImage(600, 800, CV_8UC3, Scalar(255, 255, 255)), tempImage;
//	srcImage.copyTo(tempImage);
//	g_rectangle = Rect(-1, -1, 0, 0);
//	namedWindow(strWndName);
//	setMouseCallback(strWndName, onMouseCallback, (void*)&srcImage);
//	while (true)
//	{
//		srcImage.copyTo(tempImage);
//		if (g_bDrawingBox)
//		{
//			Rect rectCur = g_rectangle;
//			if (rectCur.width < 0) {
//				rectCur.x += rectCur.width;
//				rectCur.width *= -1;
//			}
//			if (rectCur.height < 0) {
//				rectCur.y += rectCur.height;
//				rectCur.height *= -1;
//			}
//			DrawRectangle(tempImage,rectCur);
//		}
//		imshow(strWndName, tempImage);
//		if (waitKey(10) == 27) break;
//	}
//	system("pause");
//	return 0;
//}