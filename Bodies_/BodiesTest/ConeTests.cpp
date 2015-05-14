#include "stdafx.h"
#include "../Bodies/Cone.h"

static const double EXPECTED_RADIUS = 3.5;
static const double EXPECTED_DENSITY = 8920;
static const double EXPECTED_HEIGHT = 8920;

struct ConeFixture
{
	CCone cone;

	ConeFixture()
		:cone(EXPECTED_HEIGHT, EXPECTED_RADIUS, EXPECTED_DENSITY)
	{
	}
};

BOOST_FIXTURE_TEST_SUITE(cone, ConeFixture)

BOOST_AUTO_TEST_CASE(HasRadius)
{
	BOOST_CHECK_EQUAL(cone.GetRadius(), EXPECTED_RADIUS);
}

BOOST_AUTO_TEST_CASE(HasHeight)
{
	BOOST_CHECK_EQUAL(cone.GetHeight(), EXPECTED_HEIGHT);
}

BOOST_AUTO_TEST_CASE(HasVolume)
{
	const double EXPECTED_VOLUME = 1 / 3 * M_PI * EXPECTED_RADIUS *
		EXPECTED_RADIUS * EXPECTED_HEIGHT;
	BOOST_CHECK_EQUAL(cone.GetVolume(), EXPECTED_VOLUME);
	CBody & coneAsBody = cone;
	BOOST_CHECK_EQUAL(coneAsBody.GetVolume(), EXPECTED_VOLUME);
}

BOOST_AUTO_TEST_CASE(HasDensity)
{
	BOOST_CHECK_EQUAL(cone.GetDensity(), EXPECTED_DENSITY);
}

BOOST_AUTO_TEST_CASE(HasMass)
{
	double const EXPECTED_MASS = cone.GetDensity() * cone.GetVolume();
	BOOST_CHECK_EQUAL(cone.GetMass(), EXPECTED_MASS);
	CBody & coneAsBody = cone;
	BOOST_CHECK_EQUAL(coneAsBody.GetMass(), EXPECTED_MASS);
}

BOOST_AUTO_TEST_SUITE_END()

