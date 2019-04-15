
#pragma once
#include"Person_l181158.h";
#include<iostream>
using namespace std;

class Student:protected Person{
	float cgpa;
public:
	Student();
	~Student();
	Student(string,string,int,float);
	float get_cgpa();
	void set_cgpa(float);
	void print();
};