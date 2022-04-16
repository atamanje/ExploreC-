/*	MYMATHLIB_H
	This library aims to speed up the process to creating and uses .dll files. This header file is 
	include some very simple functions to test.*/

#pragma once

#ifdef MYMATHLIB_EXPORTS
#define MYMATHLIB_API __declspec(dllexport)
#else
#define MYMATHLIB_API __declspec(dllimport)
#endif


// add_num(): this function adds 2 numbers
extern "C" MYMATHLIB_API void add_num(double a, double b);

/*
MYMATHLIB_API double add_num(int a, int b);
MYMATHLIB_API double add_num(double a, int b);
MYMATHLIB_API double add_num(int a, double b);
*/