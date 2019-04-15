#include"Person_l181158.h";


Person::Person(string first,string last,int Age){
	first_name=first;
	last_name=last;
	age=Age;
	cout<<"Person(string,string,int):"<<endl;
}
Person::Person(){
	first_name="";
	last_name="";
	age=-1;
	cout<<"Person():"<<endl;
}
Person::~Person(){
	cout<<"~person : "<<endl;
}
string Person::get_first_name(){
	return first_name;
}
string Person::get_last_name(){
	return last_name;
}
int Person::get_age(){
	return age;
}
void Person::set_first_name(string name){
	first_name=name;
}
void Person::set_last_name(string name){
	last_name=name;
}
void Person::set_age(int Age){
	age=Age;
}
void Person::print(){
	cout<<endl<<"Name : "<<first_name<<" "<<last_name<<endl;
	cout<<"Age : "<<age<<endl;
}