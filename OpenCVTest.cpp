#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    bool flip = false;

	cv::VideoCapture cap(0);

	if(!cap.isOpened()) {
		std::cerr << "can't use webcam" << std::endl;
		return 1;
	}

	while (true) {
		cv::Mat frame;
        cap >> frame;
        if (flip)
            cv::flip(frame, frame, 0);
		cv::imshow("Frame | press q to quit", frame);

        auto key = cv::waitKey(1);
        switch (key) {
            case 'f':
                flip = !flip;
                break;
            case 'q':
                return 0;
            default:
                break;
        }
	}
}
