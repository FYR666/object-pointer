#include"coordinate.h"

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void printInfo();

private:
	coordinate *m_pcoorA;
	coordinate *m_pcoorB;
};

