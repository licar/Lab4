#pragma once
#include "Body.h"
class CSolidBody :
	public CBody
{
public:
	CSolidBody(double density);
	~CSolidBody();

	virtual double GetDensity() const override;
private:
	double m_density;
};

