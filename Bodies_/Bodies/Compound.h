#pragma once
#include "Body.h"
#include <vector>
#include <memory>

using namespace std;

class CCompound final:
	public CBody
{
public:
	CCompound();
	~CCompound();

	void AddBody(shared_ptr<CBody> body);
	
private:
	vector<shared_ptr<CBody>> m_bodies;
	string GetName() const;
	bool HasBodyInside(CBody const &body) const;
};

