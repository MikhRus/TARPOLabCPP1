#ifndef __Figure__
#define __Figure__

//------------------------------------------------------------------------------
// Figure.h - �������� �������� ���������� �������������� ������,
// ���������� �������� ������� ��� ���� ������ �����
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

class Wisdom
{
public:
	static  Wisdom* In(ifstream& ifst);

	virtual void InData(ifstream& ifst) = 0;  // ���� ������ �� ������
	virtual void Out(ofstream& ofst) = 0;     // ����� ������ � ����������� �����

	Wisdom *next;
};

#endif