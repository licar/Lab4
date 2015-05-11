#include "stdafx.h"
#include "../Bodies/Parallelepiped.h"

static const double EXPECTED_DENSITY = 8920;
static const double EXPECTED_HEIGHT = 10.5;
static const double EXPECTED_WIDHT = 5.5;
static const double EXPECTED_DEEP = 7;

struct ParallelepipedFixture
{
	CParallelepiped parallelepiped;

	ParallelepipedFixture()
		:parallelepiped(EXPECTED_HEIGHT, EXPECTED_WIDHT, EXPECTED_DEEP ,EXPECTED_DENSITY)
	{
	}
};

BOOST_FIXTURE_TEST_SUITE(Parallelepiped, ParallelepipedFixture)


BOOST_AUTO_TEST_CASE(HasHeight)
{
	BOOST_CHECK(parallelepiped.GetHeight() == 0);
}

BOOST_AUTO_TEST_SUITE_END()