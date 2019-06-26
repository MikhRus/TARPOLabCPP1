// Figure.cpp - ���������� �������, �������������� ������ � ������� �������.
// � �������� ��� ������� � ������ ������� ����������� ������.

#include "Wisdom.h"
#include "Aphorism.h"
#include "Proverb.h"

//------------------------------------------------------------------------------
// ����������� �����, �������������� ��� ����� �� ������
Wisdom* Wisdom::In(ifstream& ifst)
{
	Wisdom* pf = nullptr;
	int k;
	// ���� �������� �� �����
	ifst >> k;
	switch (k) {
	case 1: // �������������
		pf = new Aphorism;
		break;
	case 2: // �����������
		pf = new Proverb;
		break;
	default:
		return nullptr;
	}
	if (pf)
		pf->InData(ifst);
	return pf;
}