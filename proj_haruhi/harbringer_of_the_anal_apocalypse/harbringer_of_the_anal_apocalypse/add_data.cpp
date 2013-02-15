#include <iostream>
#include "stdafx.h"

using namespace std;

int addNewData(char file[25])
{
	FILE *noob;

	try
	{
		fopen_s(&noob, file, "w+");
		fprintf(noob, "%#newdata#type=name#%john");
		fclose(noob);
	}
	catch(...)
	{
		printf("An error has occured.");
		return 1;
	}
	return 0;
}