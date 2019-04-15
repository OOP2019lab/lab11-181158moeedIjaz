#pragma once
#include"Person_l181158.h";
#include<iostream>
using namespace std;

class Faculty:protected Person{
	int course_count;
	int exNum;
public:
	Faculty();
	~Faculty();
	Faculty(string,string,int,int,int);
	int get_course_count();
	int get_extension_number();
	void set_course_count(int);
	void set_extension_number(int);
	void print();
};