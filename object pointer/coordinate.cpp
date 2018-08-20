#include "iostream"
#include"coordinate.h"
using namespace std;

coordinate::coordinate(int x,int y)
{
	m_iX = x;
	m_iY = y;
	cout << "coordinate()   " << m_iX << "," << m_iY << endl;
}

coordinate::~coordinate()
{
	cout << "~coordinate()   " << m_iX << "," << m_iY << endl;
}
int coordinate::getX()
{
	return m_iX;
}
int coordinate::getY()
{
	return m_iY;
}