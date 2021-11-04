//#include<global.h>
//// Monocular
//int mono_euroc(int argc, char** argv);
//int mono_kitti(int argc, char** argv);
//int mono_tum(int argc, char** argv);
//int mono_tum_vi(int argc, char** argv);
//// Monocular-Inertial
//int mono_inertial_euroc(int argc, char* argv[]);
//int mono_inertial_tum_vi(int argc, char** argv);
//// RGB-D
//int rgbd_tum(int argc, char** argv);
//// ROS
//// Stereo
//int stereo_euroc(int argc, char** argv);
//int stereo_kitti(int argc, char** argv);
//int stereo_tum_vi(int argc, char** argv);
//// Stereo-Inertial
//int stereo_inertial_euroc(int argc, char** argv);
//int stereo_inertial_tum_vi(int argc, char** argv);
//
//
//int main(int argc, char** argv)
//{
//    printf("ORB-SLAM3");
//    for (int i = 1; i < argc; i++)
//        printf(" %s", argv[i]);
//    printf("\n");
//
//    argc--;
//    // Monocular
//    if (0 == strcmp(argv[1], "mono_euroc")) {
//        mono_euroc(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "mono_kitti")) {
//        mono_kitti(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "mono_tum")) {
//        mono_tum(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "mono_tum_vi")) {
//        mono_tum_vi(argc, &argv[1]);
//    }
//    // Monocular-Inertial
//    else if (0 == strcmp(argv[1], "mono_inertial_euroc")) {
//        mono_inertial_euroc(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "mono_inertial_tum_vi")) {
//        mono_inertial_tum_vi(argc, &argv[1]);
//    }
//    // RGB-D
//    else if (0 == strcmp(argv[1], "rgbd_tum")) {
//        rgbd_tum(argc, &argv[1]);
//    }
//    // ROS
//    // Stereo
//    else if (0 == strcmp(argv[1], "stereo_euroc")) {
//        stereo_euroc(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "stereo_kitti")) {
//        stereo_kitti(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "stereo_tum_vi")) {
//        stereo_tum_vi(argc, &argv[1]);
//    }
//    // Stereo-Inertial
//    else if (0 == strcmp(argv[1], "stereo_inertial_euroc")) {
//        stereo_inertial_euroc(argc, &argv[1]);
//    }
//    else if (0 == strcmp(argv[1], "stereo_inertial_tum_vi")) {
//        stereo_inertial_tum_vi(argc, &argv[1]);
//    }
//    else {
//        printf("\nUsage: slam.exe testName testArguments");
//        printf("\nAvailable tests as the following...");
//
//        // Monocular
//        printf("\n\nMonocular examples:");
//        printf("\n  mono_euroc path_to_vocabulary path_to_settings path_to_sequence_folder_1 path_to_times_file_1 (path_to_image_folder_2 path_to_times_file_2 ... path_to_image_folder_N path_to_times_file_N) (trajectory_file_name)");
//        printf("\n  mono_kitti path_to_vocabulary path_to_settings path_to_sequence");
//        printf("\n  mono_tum path_to_vocabulary path_to_settings path_to_sequence");
//        printf("\n  mono_tum_vi path_to_vocabulary path_to_settings path_to_image_folder_1 path_to_times_file_1 (path_to_image_folder_2 path_to_times_file_2 ... path_to_image_folder_N path_to_times_file_N) (trajectory_file_name)");
//
//        // Monocular-Inertial
//        printf("\n\nMonocular-Inertial examples:");
//        printf("\n  mono_inertial_euroc path_to_vocabulary path_to_settings path_to_sequence_folder_1 path_to_times_file_1 (path_to_image_folder_2 path_to_times_file_2 ... path_to_image_folder_N path_to_times_file_N)");
//        printf("\n  mono_inertial_tum_vi path_to_vocabulary path_to_settings path_to_image_folder_1 path_to_times_file_1 path_to_imu_data_1 (path_to_image_folder_2 path_to_times_file_2 path_to_imu_data_2 ... path_to_image_folder_N path_to_times_file_N path_to_imu_data_N) (trajectory_file_name)");
//
//        // RGB-D
//        printf("\n\nRGB-D:");
//        printf("\n  rgbd_tum path_to_vocabulary path_to_settings path_to_sequence path_to_association");
//
//        // ROS
//
//        // Stereo
//        printf("\n\nStereo:");
//        printf("\n  stereo_euroc path_to_vocabulary path_to_settings path_to_sequence_folder_1 path_to_times_file_1 (path_to_image_folder_2 path_to_times_file_2 ... path_to_image_folder_N path_to_times_file_N) (trajectory_file_name)");
//        printf("\n  stereo_kitti path_to_vocabulary path_to_settings path_to_sequence");
//        printf("\n  stereo_tum_vi path_to_vocabulary path_to_settings path_to_image_folder1_1 path_to_image_folder2_1 path_to_times_file_1 (path_to_image_folder1_2 path_to_image_folder2_2 path_to_times_file_2 ... path_to_image_folder1_N path_to_image_folder2_N path_to_times_file_N) (trajectory_file_name)");
//
//        // Stereo-Inertial
//        printf("\n\nStereo-Inertial:");
//        printf("\n  stereo_inertial_euroc path_to_vocabulary path_to_settings path_to_sequence_folder_1 path_to_times_file_1 (path_to_image_folder_2 path_to_times_file_2 ... path_to_image_folder_N path_to_times_file_N)");
//        printf("\n  stereo_inertial_tum_vi path_to_vocabulary path_to_settings path_to_image_folder_1 path_to_image_folder_2 path_to_times_file path_to_imu_data (trajectory_file_name)");
//
//        printf("\n");
//    }
//
//    return 0;
//}
//
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
//string parameterFile = "C:\\Users\\HaryK\\Desktop\\SlanTestFile\\myslam.yaml";
//string vocFile = "C:\\Users\\HaryK\\Desktop\\OrbSlamFinnal\\finnaly\\ORBSLAM24Windows-master\\Vocabulary\\ORBvoc.txt";
//
//int main() {
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
//
////using namespace std;
//// 参数文件与字典文件
//// 如果你系统上的路径不同，请修改它
//string vocFile = "C:\\Users\\HaryK\\Desktop\\OrbSlamFinnal\\finnaly\\ORBSLAM24Windows-master\\Vocabulary\\ORBvoc.txt";
//// 视频文件
//string videoFile = "C:\\Users\\HaryK\\Desktop\\SlanTestFile\\slamtest1.mp4";//string parameterFile = "C:\\Users\\HaryK\\Desktop\\SlanTestFile\\myslam.yaml";

//int main(int argc, char** argv) {
//    // 声明 ORB-SLAM2 系统
//    ORB_SLAM3::System SLAM(vocFile, parameterFile, ORB_SLAM3::System::MONOCULAR, true);
//    // 获取视频图像
//    cv::VideoCapture cap(videoFile);    // change to 1 if you want to use USB camera.
//    // 记录系统时间
//    auto start = chrono::system_clock::now();
//    while (1) {
//        cv::Mat frame;
//        cap >> frame;   // 读取相机数据
//        if (frame.data == nullptr)
//            break;
//        // rescale because image is too large
//        cv::Mat frame_resized;
//        cv::resize(frame, frame_resized, cv::Size(640, 360));
//        auto now = chrono::system_clock::now();
//        auto timestamp = chrono::duration_cast<chrono::milliseconds>(now - start);
//        SLAM.TrackMonocular(frame_resized, double(timestamp.count()) / 1000.0);
//        cv::waitKey(30);
//    }
//    SLAM.Shutdown();
//    return 0;
//
//}


#include "global.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <chrono>

#include <opencv2/core/core.hpp>

#include <System.h>
using namespace std;
string vocFile = "C:\\Users\\HaryK\\Desktop\\OrbSlamFinnal\\finnaly\\ORBSLAM24Windows-master\\Vocabulary\\ORBvoc.txt";
string parameterFile = "C:\\Users\\HaryK\\Desktop\\SlanTestFile\\myslam.yaml";
string picScr = "";

cv::Mat test_pic;

int main() {
	
	ORB_SLAM3::System SLAM(vocFile, parameterFile, ORB_SLAM3::System::MONOCULAR, true);
	cout << "OK" << endl;
	int actvie = 1;
	
	

	 auto start = chrono::system_clock::now();
	
    while (1) {
        auto now = chrono::system_clock::now();
		//for frone to read the code 
        auto timestamp = chrono::duration_cast<chrono::milliseconds>(now - start);
		cv::Mat frame;
		SLAM.TrackMonocular(frame, double(timestamp.count()) / 1000.0);
    }

	 SLAM.SaveKeyFrameTrajectoryEuRoC("New.txt");

	 cv::waitKey(30);
	
	 SLAM.Shutdown();

	 return 0;
} 