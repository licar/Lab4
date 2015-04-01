#include "stdafx.h"
#include "../Bodies/Sphere.h"

/* —фера
	имеет радиус
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

BOOST_AUTO_TEST_SUITE_END()

