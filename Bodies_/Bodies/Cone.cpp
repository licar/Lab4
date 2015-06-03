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
	return  (GetRadius() * GetRadius() * GetHeight() * M_PI / 3);
}

string CCone::GetInfo() const
{
	string info = GetName() + '\n' +
		"height = " + to_string(GetHeight()) + '\n' +
		"radius = " + to_string(GetRadius()) + '\n' +
		"value = " + to_string(GetVolume()) + '\n' +
		"mass = " + to_string(GetMass());
	return info;
}

string CCone::GetName() const
{
	return "cone";
}