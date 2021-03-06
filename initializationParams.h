#include <iostream>
#include <string>

#ifndef _initializationParams_h
#define _initializationParams_h

#define DEFAULT_THRESHOLD 30
#define DEFAULT_K 0.2
#define DEFAULT_THREAD_NUM 30


/*!
// Initialization parameter
*/
typedef struct _initializationParams {
        int wait; /**< the number of simultaneous running thread (this parameter influence the memory usage*/
		int useDefault; /**< DEPRECATED 1 for default parameter usage*/
		int THREAD_NUM; /**<number of total thrad that run for one avi (how many frame for each thread...depends on video lenght)*/
		int POOL; /**< thread pool size */
		float THRESHOLD; /**< the gray threshold for background suppression*/
        double alfa;  /**< alfa Value threshold in \link shadowDetection */
		double beta; /**< beta Value threashold in \link shadowDetection */
		double Th; /**< Hue threshold in \link shadowDetection */
		double Ts; /**< Saturation threshold in \link shadowDetection */
		float K;  /**< DEPRECATED k in \link shadowDetection*/
		int Delta; /**< Delta in \link shadowDetection */
		int cicle_background; /**< numder of frame for background learning*/
		bool thread_saving; /**< set TRUE to disable Delivery service*/
		bool three; /**<save result mvo's in a three directories*/
		bool saveShadow; /**<save result shadows?*/
		bool supervisioning; /**< set TRUE to enable supervisioning*/
	    int maxSupervisioned;/**< num of max supervisioned frame for each thread (only if supervisioning == TRUE)*/		
		int fitting; /**< set 0 to disable salient selection else the num of minimum fitting pixel*/
		int minArea;/**< min area in area suppression*/
		int maxArea;/**< max area in area suppression*/
		///Default constructor
        _initializationParams() : 
			useDefault(1),
			THRESHOLD(DEFAULT_THRESHOLD),
			K(DEFAULT_K),
			THREAD_NUM(DEFAULT_THREAD_NUM),
			alfa(-1),beta(-1),Th(-1),Ts(-1),Delta(10),
			cicle_background(3000),
			thread_saving(TRUE),
			POOL(30),
			wait(10),
			three(FALSE),
			saveShadow(TRUE),
			supervisioning(FALSE),
			fitting(10),
			minArea(10),
			maxArea(5000),
			maxSupervisioned(20){}
  }initializationParams;

//extern struct initializationParams;
#endif