// Figure.cpp - Реализация функций, поддерживающих работу с базовой фигурой.
// В основном это функции и данные фабрики абстрактной фигуры.

#include "Wisdom.h"
#include "Aphorism.h"
#include "Proverb.h"

//------------------------------------------------------------------------------
// Статический метод, обеспечивающий вод фигур из потока
Wisdom* Wisdom::In(ifstream& ifst)
{
	Wisdom* pf = nullptr;
	int k;
	// Ввод признака из файла
	ifst >> k;
	switch (k) {
	case 1: // прямоугольник
		pf = new Aphorism;
		break;
	case 2: // треугольник
		pf = new Proverb;
		break;
	default:
		return nullptr;
	}
	if (pf)
		pf->InData(ifst);
	return pf;
}