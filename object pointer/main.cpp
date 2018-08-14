#include<iostream>
#include<stdlib.h>
#include"coordinate.h"
using namespace std;
int main(void)
{
	coordinate *p1 = NULL;
	p1 = new coordinate;
	coordinate *p2 = new coordinate();
	p1->m_iX = 10;
	p1->m_iY = 20;
	(*p2).m_iX = 30;
	(*p2).m_iY = 40;
	cout << p1->m_iX + (*p2).m_iX << endl;
	cout << p1->m_iY + (*p2).m_iY << endl;
	delete p1;
	p1 = NULL;
	delete p2;
	p2 = NULL;

	/*指向栈中的一块地址
	coordinate p1;
	coordinate *p2 = &p1;
	
	p2->m_iX = 10;
	p2->m_iY = 20;
	cout << p1.m_iX << endl;
	cout << p1.m_iY << endl;*/

	system("pause");
	return 0;
}