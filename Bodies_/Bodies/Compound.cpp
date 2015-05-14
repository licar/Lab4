#include "stdafx.h"
#include "Compound.h"
#include <typeinfo> 

CCompound::CCompound()
{
}


CCompound::~CCompound()
{
}

void CCompound::AddBody(shared_ptr<CBody> body)
{
	if (this == body.get())
	{
		throw runtime_error("Can't add body to itself");
	}
	try
	{
		CCompound &bodyAsCompound = dynamic_cast<CCompound&>(*body);
		if (bodyAsCompound.HasBodyInside(this))
		{
			throw runtime_error("Circular link detected");
		}
	}
	catch (const bad_cast &e)
	{
		(void)e;
	}

	m_bodies.push_back(body);
}

bool CCompound::HasBodyInside(CBody const &body) const
{
	for (auto curBody : m_bodies)
	{
		if (body == curBody.get())
		{
			return true;
		}

		try
		{
			CCompound &curBodyAsCompound = dynamic_cast<CCompound&>(*curBody);
			if (curBodyAsCompound.HasBodyInside(body))
			{
				return true;
			}
		}
		catch (const bad_cast &e)
		{
			(void)e;
		}
	}

	return false;
}

string CCompound::GetName() const
{
	return "Compound";
