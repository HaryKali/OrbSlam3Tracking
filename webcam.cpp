//#include "global.h"
//#include <iostream>
//#include <algorithm>
//#include <fstream>
//#include <chrono>
//
//#include <opencv2/core/core.hpp>
//
//#include <System.h>
//using namespace std;
//
//// 参数文件与字典文件
//// 如果你系统上的路径不同，请修改它
//string parameterFile = "C:\\Users\\HaryK\\Desktop\\OrbSlamFinnal\\myslam.yaml";
//string vocFile = "C:\\Users\\HaryK\\Desktop\\OrbSlamFinnal\\finnaly\\ORBSLAM24Windows-master\\Vocabulary\\ORBvoc.txt";
//
//int webcam(int argc, char** argv) {
//
//    // 声明 ORB-SLAM2 系统
//    ORB_SLAM3::System SLAM(vocFile, parameterFile, ORB_SLAM3::System::MONOCULAR, true);
//
//    // 获取相机图像代码
//    cv::VideoCapture cap(0);    // change to 1 if you want to use USB camera.
//
//    // 分辨率设为640x480
//    cap.set(CV_CAP_PROP_FRAME_WIDTH, 640);;//设置采集视频的宽度
//    cap.set(CV_CAP_PROP_FRAME_HEIGHT, 480);//设置采集视频的高度
//
//    // 记录系统时间
//    auto start = chrono::system_clock::now();
//
//    while (1) {
//        cv::Mat frame;
//        cap >> frame;   // 读取相机数据
//        auto now = chrono::system_clock::now();
//        auto timestamp = chrono::duration_cast<chrono::milliseconds>(now - start);
//        SLAM.TrackMonocular(frame, double(timestamp.count()) / 1000.0);
//    }
//
//    return 0;
//}