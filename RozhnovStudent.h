#pragma once
#include <iostream>
#include <fstream>
#include <string>



class RozhnovStudent
{
private:
	std::string name;
	int age;
	double avg_check;

public:

	RozhnovStudent(const std::string& name, int age, double avg_check)
	{
		this->name = name;
		this->age = age;
		this->avg_check = avg_check;
	}
	RozhnovStudent()
	{
		this->name = "";
		this->age = 0;
		this->avg_check = 0;
	}

	void SetData(std::string c_name, int c_age, double c_avg_check);
	
	std::string GetName();
	int GetAge();
	double GetAvg_Check();


	void EnterData();
	void ShowData();
	void ReadFile(std::ifstream& fin);
	void SaveFile(std::ofstream& fout);

	friend std::ifstream& operator >> (std::ifstream& fin, RozhnovStudent& Visitor);

	friend std::ostream& operator << (std::ostream& fout, const RozhnovStudent& Visitor);



};

