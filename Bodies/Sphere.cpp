#include "stdafx.h"
#include "Sphere.h"


CSphere::CSphere(double radius)
	: m_radius(radius)
{
}


CSphere::~CSphere(void)
{
}

double CSphere::GetRadius() const
{
	return m_radius;
}