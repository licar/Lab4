#pragma once
class CBody
{
public:
	CBody(void);
	~CBody(void);

	virtual double GetVolume() const = 0;
};

