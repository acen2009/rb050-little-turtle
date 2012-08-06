// track_red.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "cv.h"
#include "highgui.h"
#include <stdio.h>
#include <ctype.h>
#include "string.h"
#include <conio.h>
#include "roboard.h"
#include "time.h"
#include "math.h"
#include "windows.h"
#include <process.h>
//

#define IDLE 0;
#define QUIT 1;
#define WORK 2;

int state = 0;
int shift = 0;
unsigned long motion_frame[32] = {0};

int forward(unsigned long playtime)
{
	motion_frame[0]  += shift/2;//1900
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//1050
	motion_frame[4]  =  950;
	motion_frame[12] = 1550;
	motion_frame[13] -= shift/2;//1750
	motion_frame[14] = 1900;
	motion_frame[15] += shift/2;//1400
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  += shift/2;//2000
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  -=  shift/2;//950
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] -= shift/2;//1650
	motion_frame[14] = 1900;
	motion_frame[15] += shift/2;//1500
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1900
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1050
	motion_frame[4]  = 1450;
	motion_frame[12] = 2050;
	motion_frame[13] += shift/2;//1750
	motion_frame[14] = 1400;
	motion_frame[15] -= shift/2;//1400
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1800
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1150
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] += shift/2;//1850
	motion_frame[14] = 1900;
	motion_frame[15] -= shift/2;//1300
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}

int backward(unsigned long playtime)
{
	motion_frame[0]  += shift/2;//1900
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//1050
	motion_frame[4]  = 1450;
	motion_frame[12] = 2050;
	motion_frame[13] -= shift/2;//1750
	motion_frame[14] = 1400;
	motion_frame[15] += shift/2;//1400
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  += shift/2;//2000
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//950
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] -= shift/2;//1650
	motion_frame[14] = 1900;
	motion_frame[15] += shift/2;//1500
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1900
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1050
	motion_frame[4]  =  950;
	motion_frame[12] = 1550;
	motion_frame[13] += shift/2;//1750
	motion_frame[14] = 1900;
	motion_frame[15] -= shift/2;//1400
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1800
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1150
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] += shift/2;//1850
	motion_frame[14] = 1900;
	motion_frame[15] -= shift/2;//1300
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}

int left(unsigned long playtime)
{
	motion_frame[0]  += shift/2;//1900
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//1050
	motion_frame[4]  = 1450;
	motion_frame[12] = 2050;
	motion_frame[13] += shift/2;//1950
	motion_frame[14] = 1400;
	motion_frame[15] -= shift/2;//1200
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  += shift/2;//2000
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//950
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] += shift/2;//2050
	motion_frame[14] = 1900;
	motion_frame[15] -= shift/2;//1100
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1900
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1050
	motion_frame[4]  =  950;
	motion_frame[12] = 1550;
	motion_frame[13] -= shift/2;//1950
	motion_frame[14] = 1900;
	motion_frame[15] += shift/2;//1200
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1800
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1150
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] -= shift/2;//1850
	motion_frame[14] = 1900;
	motion_frame[15] += shift/2;//1300
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}

int right(unsigned long playtime)
{
	motion_frame[0]  += shift/2;//1900
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//1050
	motion_frame[4]  =  950;
	motion_frame[12] = 1550;
	motion_frame[13] += shift/2;//1950
	motion_frame[14] = 1900;
	motion_frame[15] -= shift/2;//1200
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  += shift/2;//2000
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  -= shift/2;//950
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] += shift/2;//2050
	motion_frame[14] = 1900;
	motion_frame[15] -= shift/2;//1100
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1900
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1050
	motion_frame[4]  = 1450;
	motion_frame[12] = 2050;
	motion_frame[13] -= shift/2;//1950
	motion_frame[14] = 1400;
	motion_frame[15] += shift/2;//1200
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  -= shift/2;//1800
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  += shift/2;//1150
	motion_frame[4]  =  950;
	motion_frame[12] = 2050;
	motion_frame[13] -= shift/2;//1850
	motion_frame[14] = 1900;
	motion_frame[15] += shift/2;//1300
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}

int leftward(unsigned long playtime)
{
	motion_frame[0]  = 1600;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1350;
	motion_frame[4]  = 950;
	motion_frame[12] = 1550;
	motion_frame[13] = 1850;
	motion_frame[14] = 1900;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1700;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1250;
	motion_frame[4]  = 950;
	motion_frame[12] = 2050;
	motion_frame[13] = 1550;
	motion_frame[14] = 1900;
	motion_frame[15] = 1600;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1600;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1350;
	motion_frame[4]  = 1450;
	motion_frame[12] = 2050;
	motion_frame[13] = 1850;
	motion_frame[14] = 1400;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1500;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1450;
	motion_frame[4]  = 950;
	motion_frame[12] = 2050;
	motion_frame[13] = 2150;
	motion_frame[14] = 1900;
	motion_frame[15] = 1000;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}

int rightward(unsigned long playtime)
{
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1250;
	motion_frame[12] = 1550;
	motion_frame[13] = 2050;
	motion_frame[14] = 1900;
	motion_frame[15] = 1100;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 2100;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 850;
	motion_frame[4]  = 950;
	motion_frame[12] = 2050;
	motion_frame[13] = 1950;
	motion_frame[14] = 1900;
	motion_frame[15] = 1200;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1450;
	motion_frame[12] = 2050;
	motion_frame[13] = 2050;
	motion_frame[14] = 1400;
	motion_frame[15] = 1100;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1500;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1450;
	motion_frame[4]  = 950;
	motion_frame[12] = 2050;
	motion_frame[13] = 2150;
	motion_frame[14] = 1900;
	motion_frame[15] = 1000;
	rcservo_SetAction(motion_frame, playtime);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}

int wave()
{
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 950;
	motion_frame[12] = 2050;
	motion_frame[13] = 1850;
	motion_frame[14] = 1900;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 200);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1450;
	motion_frame[12] = 1550;
	motion_frame[13] = 1850;
	motion_frame[14] = 1400;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 200);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1450;
	motion_frame[12] = 1550;
	motion_frame[13] = 1850;
	motion_frame[14] = 900;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 400);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1450;
	motion_frame[12] = 1550;
	motion_frame[13] = 1850;
	motion_frame[14] = 1400;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 400);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1450;
	motion_frame[12] = 1550;
	motion_frame[13] = 1850;
	motion_frame[14] = 900;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 400);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1600;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 1450;
	motion_frame[12] = 1550;
	motion_frame[13] = 1850;
	motion_frame[14] = 1400;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 400);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[0]  = 1800;
	motion_frame[1]  = 1100;
	motion_frame[2]  = 1500;
	motion_frame[3]  = 1150;
	motion_frame[4]  = 950;
	motion_frame[12] = 2050;
	motion_frame[13] = 1850;
	motion_frame[14] = 1900;
	motion_frame[15] = 1300;
	rcservo_SetAction(motion_frame, 200);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}


int rocker()
{
	motion_frame[2]  = 1200;
	rcservo_SetAction(motion_frame, 200);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[2]  = 1700;
	rcservo_SetAction(motion_frame, 400);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	motion_frame[2]  = 1500;
	rcservo_SetAction(motion_frame, 200);
	while (rcservo_PlayAction() != RCSERVO_PLAYEND)
		Sleep(10);
	return 0;
}








//
IplImage *image = 0, *hsv = 0, *hue = 0, *mask = 0, *backproject = 0;
CvHistogram *hist = 0;

int track_object = 1;
CvRect selection;
CvRect track_window;
CvBox2D track_box;
CvConnectedComp track_comp;
int hdims = 16;
float hranges_arr[] = {0,180};
float* hranges = hranges_arr;
int _vmin = 90, _vmax = 256, smin = 90;

void walk(unsigned long playtime)
{
	int count = 0;
	//unsigned long CH[32] = {0};
	//roboio_SetRBVer(RB_050);
	//if(rcservo_SetServos(RCSERVO_USEPINS1 + RCSERVO_USEPINS2 + RCSERVO_USEPINS3 + RCSERVO_USEPINS4 + 
	//					 RCSERVO_USEPINS5 + RCSERVO_USEPINS13 + RCSERVO_USEPINS14 + RCSERVO_USEPINS15 +
	//					 RCSERVO_USEPINS16, RCSERVO_DMP_RS0263) == false)
	//	printf("SetServos fail");
	//if(rcservo_Init(RCSERVO_USEPINS1 + RCSERVO_USEPINS2 + RCSERVO_USEPINS3 + RCSERVO_USEPINS4 + 
	//				RCSERVO_USEPINS5 + RCSERVO_USEPINS13 + RCSERVO_USEPINS14 + RCSERVO_USEPINS15 +
	//				RCSERVO_USEPINS16) == false)
	//	printf("Servo Init Error: %s\n", roboio_GetErrMsg());

	//CH[0]  = motion_frame[0] = 1800;
	//CH[1]  = motion_frame[1] = 1100;
	//CH[2]  = motion_frame[2] = 1500;
	//CH[3]  = motion_frame[3] = 1150;
	//CH[4]  = motion_frame[4] =  950;
	//CH[12] = motion_frame[12] = 2050;
	//CH[13] = motion_frame[13] = 1850;
	//CH[14] = motion_frame[14] = 1900;
	//CH[15] = motion_frame[15] = 1300;
	//rcservo_EnterPlayMode_NOFB(CH);
	//rcservo_SetFPS(20);
	while(1)
	{
		if(state == 1)//QUIT
			break;
		else if(state == 0)
		{
			rcservo_EnterCaptureMode();
		}
		else if(state == 2)//WORK
		{
			//rcservo_EnterPlayMode_NOFB(motion_frame);
			//if(track_box.center.x > 200 && (track_box.size.height < 60 || track_box.size.width < 80))
			//{
			//	rightward(playtime);
			//	printf("rightward\n");
			//}
			//else if(track_box.center.x < 120 && (track_box.size.height < 60 || track_box.size.width < 80))
			//{
			//	leftward(playtime);
			//	printf("leftward\n");
			//}
			//if(track_box.size.height < 10 || track_box.size.width < 10)
			//{
			//	continue;
			//}
			if(track_box.size.height > 160 || track_box.size.width > 200)
			{
				backward(playtime);
				//printf("backward\n");
			}
			else if(track_box.center.x > 250)
			{
				shift += (int)(320 - track_box.center.x);
				right(playtime);
				shift = 150;
				//printf("right\n");
			}
			else if(track_box.center.x < 70)
			{
				shift += (int)(track_box.center.x);
				left(playtime);
				shift = 150;
				//printf("left\n");
			}
			else if(track_box.size.height < 60 || track_box.size.width < 80)
			{
				forward(playtime);
				//printf("forward\n");
			}
			else
			{
				count++;
				if(count >= 100)
				{
					count = count%100;
					rocker();
				}
				//printf("ok\n");
			}
		}
		
	}
	rcservo_Close();
}

void loadTemplateImage()
{
	IplImage *tempimage = cvLoadImage("red1.bmp",1);
	cvCvtColor( tempimage, hsv, CV_BGR2HSV );

	cvInRangeS( hsv, cvScalar(0,smin,MIN(_vmin,_vmax),0), cvScalar(180,256,MAX(_vmin,_vmax),0), mask );
		
	cvSplit( hsv, hue, 0, 0, 0 );
	
	selection.x = 1;
	selection.y = 1;
	selection.width = 320-1;
	selection.height= 240-1;

	cvSetImageROI( hue, selection );
	cvSetImageROI( mask, selection );
	cvCalcHist( &hue, hist, 0, mask );

	float max_val = 0.f;		
				
	cvGetMinMaxHistValue( hist, 0, &max_val, 0, 0 );
	cvConvertScale( hist->bins, hist->bins, max_val ? 255. / max_val : 0., 0 );
	cvResetImageROI( hue );
	cvResetImageROI( mask );
	track_window = selection;

	cvReleaseImage(&tempimage);

}

CvCapture* capture = 0;
IplImage* temp = 0;	
void track()
{
	int c = 0;
	long fps = 0;
	clock_t nowtime = clock();

    while(1)
    {
		temp = cvQueryFrame( capture );	
        
        if( !temp )
            break;
        if( !image )
        {
			//printf("h = %d, w = %d\n", temp->height, temp->width);
            /* allocate all the buffers */
            image = cvCreateImage( cvGetSize(temp), 8, 3 );//cvSize(160, 120)
            image->origin = temp->origin;
            hsv = cvCreateImage( cvGetSize(temp), 8, 3 );
            hue = cvCreateImage( cvGetSize(temp), 8, 1 );
            mask = cvCreateImage( cvGetSize(temp), 8, 1 );
            backproject = cvCreateImage( cvGetSize(temp), 8, 1 );
            hist = cvCreateHist( 1, &hdims, CV_HIST_ARRAY, &hranges, 1 );
			//printf("init ok\n");
			loadTemplateImage();

        }

		cvCopy( temp, image, 0 );
		//cvResize(temp, image);
		cvCvtColor( image, hsv, CV_BGR2HSV );
		
		if( track_object )
		{
			cvInRangeS( hsv, cvScalar(0,smin,MIN(_vmin,_vmax),0), cvScalar(180,256,MAX(_vmin,_vmax),0), mask );
			cvSplit( hsv, hue, 0, 0, 0 );

			cvCalcBackProject( &hue, backproject, hist );
			cvAnd( backproject, mask, backproject, 0 );
			c = cvCamShift( backproject, track_window,
						cvTermCriteria( CV_TERMCRIT_EPS | CV_TERMCRIT_ITER, 10, 1 ),
						&track_comp, &track_box );
			if(c != -1)
				track_window = track_comp.rect;
			
			if(track_box.size.height < 10 || track_box.size.width < 10)
			{
				track_box.center.x = 160;
				track_box.center.y = 120;
				track_box.size.height = 110;
				track_box.size.width = 140;
			}
			//if( image->origin )
			//	track_box.angle = -track_box.angle;
			
			//cvEllipseBox( image, track_box, CV_RGB(255,0,0), 2, CV_AA, 0 );
			fps++;
		}
		
		if(state == 1)//QUIT
		{
			nowtime = clock() - nowtime;
			printf("fps = %4.4f\n", (double)fps*(double)CLOCKS_PER_SEC/(double)nowtime);
			break;
		}
	}

    cvReleaseCapture( &capture );

}

int main( int argc, char** argv )
{
	HANDLE thd[2]; 
	DWORD tid; 
	unsigned long playtime = 100;
	shift = 150;

	capture = cvCaptureFromCAM(0);

    if( !capture )
    {
        fprintf(stderr,"Could not initialize capturing...\n");
        return -1;
    }

	roboio_SetRBVer(RB_050);
	if(rcservo_SetServos(RCSERVO_USEPINS1 + RCSERVO_USEPINS2 + RCSERVO_USEPINS3 + RCSERVO_USEPINS4 + 
						 RCSERVO_USEPINS5 + RCSERVO_USEPINS13 + RCSERVO_USEPINS14 + RCSERVO_USEPINS15 +
						 RCSERVO_USEPINS16, RCSERVO_DMP_RS0263) == false)
	{
		printf("SetServos fail");
		return -1;
	}
	if(rcservo_Init(RCSERVO_USEPINS1 + RCSERVO_USEPINS2 + RCSERVO_USEPINS3 + RCSERVO_USEPINS4 + 
					RCSERVO_USEPINS5 + RCSERVO_USEPINS13 + RCSERVO_USEPINS14 + RCSERVO_USEPINS15 +
					RCSERVO_USEPINS16) == false)
	{
		printf("Servo Init Error: %s\n", roboio_GetErrMsg());
		return -1;
	}

	motion_frame[0] = 1800;
	motion_frame[1] = 1100;
	motion_frame[2] = 1500;
	motion_frame[3] = 1150;
	motion_frame[4] =  950;
	motion_frame[12] = 2050;
	motion_frame[13] = 1850;
	motion_frame[14] = 1900;
	motion_frame[15] = 1300;

	cvSetCaptureProperty(capture, CV_CAP_PROP_FRAME_WIDTH, 320);
	cvSetCaptureProperty(capture, CV_CAP_PROP_FRAME_HEIGHT, 240);

	thd[0] = CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)track,0,0,&tid);

	thd[1] = CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)walk,(void *)playtime,0,&tid);  
	SetThreadPriority(thd[1], THREAD_PRIORITY_ABOVE_NORMAL);
	//THREAD_PRIORITY_HIGHEST
	rcservo_EnterPlayMode_NOFB(motion_frame);
	rcservo_SetFPS(20);
	state = WORK;
	while(1)
	{
        int c = getch();

        if( c == 27 )
		{
			state = QUIT;
            break;
		}
		else if(c == 'w')
		{
			state = WORK;
			rcservo_EnterPlayMode_NOFB(motion_frame);
		}
		else if(c == 's')
		{
			state = IDLE;
			rcservo_EnterCaptureMode();
		}
		else if(c == '-')
		{
			playtime = playtime + 10;
			if(playtime > 200)
				playtime = 200;
			printf("down speed = %d\n", playtime);
		}
		else if(c == '+')
		{
			playtime = playtime - 10;
			if(playtime < 50)
				playtime = 50;
			printf("up speed = %d\n", playtime);
		}
	}
	printf("end\n");
	CloseHandle(thd[0]);
	CloseHandle(thd[1]);
	//getch();
	Sleep(1000);
    return 0;
}

