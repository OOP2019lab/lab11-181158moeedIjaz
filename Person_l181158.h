#pragma once
#include<string>
#include<iostream>
using namespace std;

class Person{
	string first_name;
	string last_name;
protected:
	int age;
public:
	Person();
	~Person();
	Person(string,string,int);
	string get_first_name();
	string get_last_name();
	int get_age();
	void set_first_name(string);
	void set_last_name(string);
	void set_age(int);
	void print();
};