#pragma once
#include "Solidbody.h"

class CSphere final : public CSolidBody
{
public:
	CSphere(double radius, double density);
	~CSphere(void);

	double GetRadius() const;
	// ������, ���������������� ������ ������� �������, ������������� 
	// ��������� �� �������������� override
	double GetVolume() const override final;
	string GetInfo() const override final;

private:
	double m_radius;
	string GetName() const;
};

