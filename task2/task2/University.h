#pragma once
#include <string>

using namespace std;
class CUniversity
{
public:
	CUniversity(string university)
		:m_university(move(university))
	{}

	~CUniversity()
	{}

	string GetUniversity() const
	{
		return m_university;
	}

	void SetUniversity(string university)
	{
		m_university = move(university);
	}

private:
	string m_university;
};

