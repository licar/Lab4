#include "stdafx.h"
#include "Cylinder.h"


CCylinder::CCylinder(double height, double radius, double dansity)
	:CSolidBody(dansity),
	m_height(height),
	m_radius(radius)
{
}


CCylinder::~CCylinder()
{
}

double CCylinder::GetHeight() const
{
	return m_height;
}

double CCylinder::GetRadius() const
{
	return m_radius;
}

double CCylinder::GetVolume() const
{
	return GetRadius() * GetHeight();
}