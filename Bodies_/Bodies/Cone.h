#pragma once
#include "SolidBody.h"

class CCone final:
	public CSolidBody
{
public:
	CCone(double height, double radius, double dansity);
	~CCone();

	double GetVolume() const override final;
	double GetHeight() const;
	double GetRadius() const;
	string GetInfo() const override final;

private:
	double m_radius;
	double m_height;
	string GetName() const;
};

