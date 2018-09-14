
#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function
#include <iostream>
using namespace cv;

#define USAGE "./displaypic <FILENAME> \n"

using namespace std;

int main( int argc, char** argv ) {
  cv::Mat img = cv::imread(argv[1],-1);
  if( img.empty() ){
   std::cout<<USAGE;
   return -1;
  }
  cv::namedWindow( "Example1", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Example1", img );
  cv::waitKey( 0 );
  cv::destroyWindow( "Example1" );
  return 0;
}