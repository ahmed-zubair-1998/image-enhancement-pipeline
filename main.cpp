#include <iostream>
#include <string>
#include <chrono>
#include <opencv2/opencv.hpp>

#include "synef.h"

using namespace std;
using namespace cv;


int main() {
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	vector<cv::String> fn;
	glob("../datasets/*", fn, true);

	Mat src, dst;
	for (int i = 0; i < fn.size(); i++) {
		string input_img_name = fn[i]; 
		src = imread(input_img_name, 1);
		string filename = "../results/" + fn[i].substr(3);
		synEF(src, dst);
		cout<<filename<<endl;
		imwrite(filename, dst);
	}

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::seconds>(end - begin).count() << "[s]" << std::endl;
}
