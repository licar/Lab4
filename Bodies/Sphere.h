#pragma once
#include "Solidbody.h"

class CSphere : public CSolidBody
{
public:
	CSphere(double radius);
	~CSphere(void);

	double GetRadius() const;
	// методы, переопредел€ющие методы базовых классов, рекомендуетс€ 
	// объ€вл€ть со спецификатором override
	double GetVolume() const override;

private:
	double m_radius;
};

