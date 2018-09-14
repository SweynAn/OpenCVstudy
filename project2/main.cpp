
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#define USAGE "./displayVideo <FILENAME> \n"

using namespace cv;
using namespace std;

int main( int argc, char** argv ) {
  if ( argc == 1 )
  {
  	std::cout<<USAGE;
  	return -1;
  }
  cv::namedWindow( "Example3", cv::WINDOW_AUTOSIZE );
  cv::VideoCapture cap;
  cap.open( std::string(argv[1]) );
  cv::Mat frame;
  for(;;) {
    cap >> frame;
    if( frame.empty() ) break;
    cv::imshow( "Example3", frame );
    if( cv::waitKey(33) >= 0 ) break;
  }
  return 0; 
}