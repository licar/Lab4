#pragma once
#include "body.h"

class CSphere : public CBody
{
public:
	CSphere(double radius);
	~CSphere(void);

	double GetRadius() const;
	double GetVolume() const;

private:
	double m_radius;
};

