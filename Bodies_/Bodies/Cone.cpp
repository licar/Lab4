#include "stdafx.h"
#include "Cone.h"


CCone::CCone(double height, double radius, double density)
	:CSolidBody(density),
	m_height(height),
	m_radius(radius)
{
}


CCone::~CCone()
{
}

double CCone::GetHeight() const
{
	return m_height;
}

double CCone::GetRadius() const
{
	return m_radius;
}

double CCone::GetVolume() const
{
	return 1 / 3 * M_PI *  GetRadius() * GetRadius() * GetHeight();
}