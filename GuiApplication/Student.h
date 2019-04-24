#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<shlobj.h>
#include<shellapi.h>
#include<iomanip>
#include<mysql.h>
#include<Windows.h>
#include<fstream>
#include<sstream>

class student
{
private:
	std::string student_id;
	std::string student_name;
	int course_computer_vision;
	int course_machine_learning;
	int course_algorithm;
	double course_average;
	bool input_test;
public:
	student()
	{

	}
};