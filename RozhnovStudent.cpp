#include "RozhnovStudent.h"

using namespace std;

void RozhnovStudent::SetData(string c_name, int c_age, double c_avg_check)
{
	name = c_name;
	age = c_age;
	avg_check = c_avg_check;
}

std::string RozhnovStudent::GetName()
{
	return name;
}

int RozhnovStudent::GetAge()
{
	return age;
}

double RozhnovStudent::GetAvg_Check()
{
	return avg_check;
}



void RozhnovStudent::EnterData()
{
	
	cout << "Введите никнейм: ";
	cin.ignore();
	getline(cin, name);
	
	cout << "Введите возраст: ";
	cin >> age;
	
	cin.ignore();
	cout << "Введите среднее значение чека: ";
	cin >> avg_check;
	
	//SetData(c_name, c_age, c_avg_check);
}

void RozhnovStudent::ShowData()
{
	cout << "\tНикнейм: " << name << "\tВозраст: " << age << "\tСредний чек: " << avg_check << endl;
}

void RozhnovStudent::ReadFile(ifstream& fin)
{
	fin.ignore();
	getline(fin, name);
	fin >> age >> avg_check;
}

void RozhnovStudent::SaveFile(ofstream& fout)
{
	fout << name << "\n" << age << "\n" << avg_check << endl;
}

std::ifstream& operator>>(std::ifstream& fin, RozhnovStudent& Visitor)
{
	fin.ignore();
	getline(fin, Visitor.name);
	fin >> Visitor.age >> Visitor.avg_check;
	return fin;
}

std::ostream& operator<<(std::ostream& fout, const RozhnovStudent& Visitor)
{
	fout << Visitor.name << "\n" << Visitor.age << "\n" << Visitor.avg_check << endl;
	return fout;
}
