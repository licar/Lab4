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
	BOOST_CHECK_EQUAL(parallelepiped.GetHeight(), EXPECTED_HEIGHT);
}

BOOST_AUTO_TEST_CASE(HasWidht)
{
	BOOST_CHECK_EQUAL(parallelepiped.GetWidht(), EXPECTED_WIDHT);
}

BOOST_AUTO_TEST_CASE(HasDeep)
{
	BOOST_CHECK_EQUAL(parallelepiped.GetDeep(), EXPECTED_DEEP);
}

BOOST_AUTO_TEST_CASE(HasVolume)
{
	const double EXPECTED_VOLUME = EXPECTED_DEEP * EXPECTED_HEIGHT * EXPECTED_WIDHT;
	BOOST_CHECK_EQUAL(parallelepiped.GetVolume(), EXPECTED_VOLUME);
	CBody & parallelepipedAsBody = parallelepiped;
	BOOST_CHECK_EQUAL(parallelepipedAsBody.GetVolume(), EXPECTED_VOLUME);
}

BOOST_AUTO_TEST_CASE(HasMass)
{
	BOOST_CHECK_EQUAL(parallelepiped.GetMass(), 
		EXPECTED_DEEP * EXPECTED_HEIGHT * EXPECTED_WIDHT * EXPECTED_DENSITY);
}

BOOST_AUTO_TEST_SUITE_END()