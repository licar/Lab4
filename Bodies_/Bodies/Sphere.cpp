#include "stdafx.h"
#include "Sphere.h"


CSphere::CSphere(double radius, double density)
	: CSolidBody(density)
	, m_radius(radius)
{
}

CSphere::~CSphere(void)
{
}

double CSphere::GetRadius() const
{
	return m_radius;
}

double CSphere::GetVolume() const
{
	return (4 * M_PI / 3 * pow(m_radius, 3));
}

string CSphere::GetName() const
{
	return "sphere";
}

string CSphere::GetInfo() const
{
	string info = GetName() + '\n' +
		"radius = " + to_string(GetRadius()) + '\n' +
		"value = " + to_string(GetVolume()) + '\n' +
		"mass = " + to_string(GetMass());
}