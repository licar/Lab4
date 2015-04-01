#pragma once
#include "body.h"

class CSphere :
	public CBody
{
public:
	CSphere(double radius);
	~CSphere(void);

	double GetRadius() const;

private:
	double m_radius;
};

