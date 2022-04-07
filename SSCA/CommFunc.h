///////////////////////////////////////////////////////
// File: CommonFunc
// Desc: Common function + Hearder files
//
// Author: Zhang Kang
// Date: 2013/09/06
///////////////////////////////////////////////////////
#pragma  once
#define DOUBLE_MAX 1e10
// #define COMPUTE_RIGHT

#include<opencv2/opencv.hpp>
#include<string>
#include<iostream>
#include<bitset>
using namespace std;
using namespace cv;

//
// Opencv Lib 2.4.6
//


// output matrix
template<class T>
void PrintMat( const Mat& mat )
{
	int rows = mat.rows;
	int cols = mat.cols;
	printf( "\n%d x %d Matrix\n", rows, cols );
	for( int r = 0; r < rows; r ++ ) {
		for( int c = 0; c < cols; c ++  ) {
			cout << mat.at<T>( r, c ) << "\t";
		}
		printf( "\n" );
	}
	printf( "\n" );
}
