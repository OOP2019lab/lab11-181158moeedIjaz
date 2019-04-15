#include"Student_l181158.h";

Student::Student(){
	cgpa=-1;
	cout<<"student():"<<endl;
}
Student::~Student(){
	cout<<"~Student() : "<<endl;

}
Student::Student(string first,string last,int age,float gpa):Person(first,last,age){
	cgpa=gpa;
	cout<<"student(string):"<<endl;
}
float Student::get_cgpa(){
	return cgpa;
}
void Student::set_cgpa(float gpa){
	cgpa=gpa;
}
void Student::print(){
	Person::print();
	cout<<"CGPA : "<<cgpa<<endl;
}