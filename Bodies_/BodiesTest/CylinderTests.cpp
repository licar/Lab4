#include "stdafx.h"
#include "../Bodies/Cylinder.h"

static const double EXPECTED_RADIUS = 3.5;
static const double EXPECTED_DENSITY = 8920;
static const double EXPECTED_HEIGHT = 8920;

struct CylinderFixture
{
	CCylinder cylinder;

	CylinderFixture()
		:cylinder(EXPECTED_HEIGHT, EXPECTED_RADIUS, EXPECTED_DENSITY)
	{
	}
};

BOOST_FIXTURE_TEST_SUITE(cylinder, CylinderFixture)

BOOST_AUTO_TEST_CASE(HasRadius)
{
	BOOST_CHECK_EQUAL(cylinder.GetRadius(), EXPECTED_RADIUS);
}

BOOST_AUTO_TEST_CASE(HasHeight)
{
	BOOST_CHECK_EQUAL(cylinder.GetHeight(), EXPECTED_HEIGHT);
}

BOOST_AUTO_TEST_CASE(HasVolume)
{
	const double EXPECTED_VOLUME = EXPECTED_RADIUS * EXPECTED_HEIGHT;
	BOOST_CHECK_EQUAL(cylinder.GetVolume(), EXPECTED_VOLUME);
	CBody & cylinderAsBody = cylinder;
	BOOST_CHECK_EQUAL(cylinderAsBody.GetVolume(), EXPECTED_VOLUME);
}

BOOST_AUTO_TEST_CASE(HasDensity)
{
	BOOST_CHECK_EQUAL(cylinder.GetDensity(), EXPECTED_DENSITY);
}

BOOST_AUTO_TEST_CASE(HasMass)
{
	double const EXPECTED_MASS = cylinder.GetDensity() * cylinder.GetVolume();
	BOOST_CHECK_EQUAL(cylinder.GetMass(), EXPECTED_MASS);
	CBody & cylinderAsBody = cylinder;
	BOOST_CHECK_EQUAL(cylinderAsBody.GetMass(), EXPECTED_MASS);


}


BOOST_AUTO_TEST_SUITE_END()
