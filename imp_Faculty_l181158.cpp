#include"Faculty_l181158.h";


Faculty::Faculty(){
	course_count=-1;
	exNum=-1;
	cout<<"Faculty():"<<endl;
}
Faculty::~Faculty(){
	cout<<"~Faculty() : "<<endl;
}
Faculty::Faculty(string first,string last,int Age,int count,int exten):Person(first,last,Age){
	course_count=count;
	exNum=exten;
	cout<<"Faculty(int,int):"<<endl;
}
int Faculty::get_course_count(){
	return course_count;
}
int Faculty::get_extension_number(){
	return exNum;
}
void Faculty::set_course_count(int count){
	course_count=count;
}
void Faculty::set_extension_number(int num){
	exNum=num;
}
void Faculty::print(){
	Person::print();
	cout<<"Number of courses : "<<course_count<<endl;
	cout<<"Extension Number : "<<exNum<<endl;
}