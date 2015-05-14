#pragma once
#include "SolidBody.h"

class CParallelepiped final : public CSolidBody
{
public:
	CParallelepiped(
		double height,
		double widht,
		double deep,
		double density
	);

	~CParallelepiped();

	double GetVolume() const override final;
	double GetHeight() const;
	double GetWidht() const;
	double GetDeep() const;

private:
	double m_height;
	double m_widht;
	double m_deep;
};

