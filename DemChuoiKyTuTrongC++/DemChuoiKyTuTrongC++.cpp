// DemChuoiKyTuTrongC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{

	char s[] = {"chuc mung"};

	int i = 0; 

	int dem = 0;

	while (s[i] != '\0') {
		dem++;
	}
	printf("%12d\n",&s);

    return 0;
}

