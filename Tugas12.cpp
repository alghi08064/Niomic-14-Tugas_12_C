#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	setcolor(5);
	int x [3] = {1,5,4};
	int y [3] = {3,2,5};
	for(int i=0;i<3;i++) {
		cout<<"Array x "<<i<<" : "<<x[i]<<endl;
	}
	
	cout<<endl;
	
	for(int j=0;j<3;j++) {
		cout<<"Array y "<<j<<" : "<<y[j]<<endl;
	}
	
	cout<<endl;
	
    for(int k=0;k<3;k++) {
    	int plus;
    	plus = x[k] + y[k];
		cout<<"Array Penjumlahan "<<k<<" : "<<plus<<endl;
	}
    
	return 0;
}
	

