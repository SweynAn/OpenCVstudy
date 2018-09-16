#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv ;

int main( int argc, char** argv ) 
{
    cv::namedWindow( "Example2_10", cv::WINDOW_AUTOSIZE );
	cv::VideoCapture cap;
	int i;

	if (argc==1) {
		fprintf(stderr, "bug?\n" );
		fprintf(stdout, "Which Camera Do you want\n");
		fprintf(stdout, "1 or 2 ? 1 is main Camera, 2 is additional one:\n");
		scanf ("%d",&i);
		i--;
  		cap.open(i);    // Self Camera with readin
  		fprintf(stdout, " We only have one file cap\n" );
  		cv::Mat frame;
  		for(;;) {
    		cap >> frame;
    		if( frame.empty() ) break;
    			cv::imshow( "Example3", frame );
    		if( cv::waitKey(33) >= 0 ) break;
  		}
  		return 0;
	} 
	else 
	{
  		cap.open(argv[1]);
	}

//fprintf(stderr, " debug message 1 \n" );
	if( !cap.isOpened() ) 
	{  // check if we succeeded
//fprintf(stderr, " debug message 2 \n");
    	std::cerr << "Couldn't open capture." << std::endl;
		return -1; 
	}


	cap.open( std::string(argv[1]) );


 } 



