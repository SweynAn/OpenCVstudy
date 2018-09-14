# OpenCVstudy

============
Reference for setup openCV in macOS:
https://medium.com/@jaskaranvirdi/setting-up-opencv-and-c-development-environment-in-xcode-b6027728003



=============================
List of projects:

project1: read the input of a picture and display it
project2: read the input of a video stream and display it

============

Compile method

g++ $(pkg-config --cflags --libs opencv) -std=c++11  main.cpp -o displayVideo


