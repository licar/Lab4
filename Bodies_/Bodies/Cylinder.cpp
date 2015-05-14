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

string CCylinder::GetName() const
{
	return "cylinder";
}

string CCylinder::GetInfo() const
{
	string info = GetName() + '\n' +
		"height = " + to_string(GetHeight()) + '\n' +
		"radius = " + to_string(GetRadius()) + '\n' +
		"value = " + to_string(GetVolume()) + '\n' +
		"mass = " + to_string(GetMass());
}

