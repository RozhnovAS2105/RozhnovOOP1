#pragma once
#include "RozhnovStudent.h"

#include <vector>
class RozhnovSHPEVRDAY
{
private:
	std::vector<RozhnovStudent*> Visitors;
public:
	/*~RozhnovSHPEVRDAY()
	{
		
	}*/

	void AddCustomer();
	void ShowCustomersList();
	void FileRead();
	void FileSave();
	void ClearCustomersList();

	
};

