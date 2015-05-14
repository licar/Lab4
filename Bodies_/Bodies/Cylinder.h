#pragma once
#include "SolidBody.h"

class CCylinder final:
	public CSolidBody
{
public:
	CCylinder(double height, double radius, double dansity);

	~CCylinder();

	double GetVolume() const override final;
	double GetHeight() const;
	double GetRadius() const;
private:
	double m_height;
	double m_radius;
};

