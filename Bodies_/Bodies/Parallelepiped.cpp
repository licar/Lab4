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

string CParallelepiped::GetName() const
{
	return "parallelepiped";
}

string CParallelepiped::GetInfo() const
{
	string info = GetName() + '\n' +
		"height = " + to_string(GetHeight()) + '\n' +
		"widht = " + to_string(GetWidht()) + '\n' +
		"deep = " + to_string(GetDeep()) + '\n' +
		"value = " + to_string(GetVolume()) + '\n' +
		"mass = " + to_string(GetMass());
	return info;
}