#include "stdafx.h"
#include "../Bodies/Sphere.h"

/* Ñפונא
	טלווע נאהטףס
	טלווע מבתול
*/

static const double EXPECTED_RADIUS = 3.5;

struct SphereFixture
{
	CSphere sphere;

	SphereFixture()
		:sphere(EXPECTED_RADIUS)
	{
	}
};

BOOST_FIXTURE_TEST_SUITE(Sphere, SphereFixture)

BOOST_AUTO_TEST_CASE(HasRadius)
{
	BOOST_CHECK_EQUAL(sphere.GetRadius(), EXPECTED_RADIUS);
}

BOOST_AUTO_TEST_CASE(HasVolume)
{
	const double EXPECTED_VOLUME = 4 * M_PI / 3 * pow(EXPECTED_RADIUS, 3);
	BOOST_CHECK_EQUAL(sphere.GetVolume(), EXPECTED_VOLUME);
	CBody & sphereAsBody = sphere;
	BOOST_CHECK_EQUAL(sphereAsBody.GetVolume(), EXPECTED_VOLUME);
}

BOOST_AUTO_TEST_SUITE_END()

