#include"opencv2/opencv.hpp"

using namespace cv;

/*������ֱ�߼���λ����̬��olines����������ϵ��ֱ�ߵı�ʾ��Ϊ3*6�ľ���ÿ�е�6��������ʾһ��ֱ�ߡ�ǰ����Ϊֱ�ߵķ�����������������ʾֱ����һ�������ά���ꡣ
ilines��ͼ���ж�Ӧֱ�������������ϵ�µı�ʾ�����и�������������olines����ͬ��
Mat��������Ҫ��double�ͣ�Ϊ24*3����tvecΪ8*3��double��*/
int threeLines(cv::Mat& R, cv::Mat& tvec, const double& f, const cv::Mat& olines, const cv::Mat& ilines);