#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
	cv::VideoCapture cap(0);

	if(!cap.isOpened()) {
		std::cerr << "can't use webcam" << std::endl;
		return 1;
	}

	while (true) {
		cv::Mat frame;
		cap >> frame;
		cv::imshow("Frame | press q to quit", frame);
		if (cv::waitKey(30) == 'q') {
			break;
		}
	}

	return 0;
}
