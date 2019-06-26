#ifndef __Figure__
#define __Figure__

//------------------------------------------------------------------------------
// Figure.h - содержит описание обобщающей геометрической фигуры,
// являющееся базовыым классом для всех прочих фигур
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

class Wisdom
{
public:
	static  Wisdom* In(ifstream& ifst);

	virtual void InData(ifstream& ifst) = 0;  // ввод данных из потока
	virtual void Out(ofstream& ofst) = 0;     // вывод данных в стандартный поток

	Wisdom *next;
};

#endif