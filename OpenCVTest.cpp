#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    bool flip = false;

    cv::VideoCapture cap{0, cv::CAP_ARAVIS, {
        cv::CAP_PROP_ARAVIS_AUTOTRIGGER, 1,
        cv::CAP_PROP_AUTO_EXPOSURE, 1,
        //cv::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('G','R','B','G')
        cv::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('G','R','E','Y')
    }};
/*
    if (!cap.isOpened()) {
        std::cerr << "can't use webcam" << std::endl;
        return 1;
    }
*/
    size_t retry = 0;
    while (true) {
        cv::Mat frame;
        cap >> frame;

        if (frame.empty()) {
            ++retry;
            if (retry > 10) {
                std::cerr << "failed to get a frame 10 consecutive times!" << std::endl;
                return 1;
            }
            continue;
        } else {
            retry = 0;
        }

        //cv::cvtColor(frame, frame, cv::COLOR_BayerGRBG2BGR);

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
