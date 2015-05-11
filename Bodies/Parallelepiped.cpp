#include "stdafx.h"
#include "Parallelepiped.h"


CParallelepiped::CParallelepiped(
	double height,
	double widht,
	double deep,
	double density
	)
	:CSolidBody(density),
	m_height(height),
	m_widht(widht),
	m_deep(deep)
{
}

CParallelepiped::~CParallelepiped()
{
}

double CParallelepiped::GetVolume() const
{
	return GetHeight() * GetWidht() * GetDeep();
}

double CParallelepiped::GetHeight() const
{
	return m_height;
}

double CParallelepiped::GetWidht() const
{
	return m_widht;
}

double CParallelepiped::GetDeep() const
{
	return m_deep;
}
