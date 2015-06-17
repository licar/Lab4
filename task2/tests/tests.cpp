// tests.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "../task2/Person.h"

BOOST_AUTO_TEST_CASE(TestPerson)
{
	CPerson person("Daniel", true, 20, 70, 180);
	BOOST_CHECK_EQUAL(person.GetName(), "Daniel");
	BOOST_CHECK_EQUAL(person.GetAge(), 20);
	BOOST_CHECK_EQUAL(person.GetWeight(), 70);
	BOOST_CHECK_EQUAL(person.GetGrowth(), 180);
	BOOST_CHECK(person.IsMale());

	person.SetName("Seraf");
	BOOST_CHECK_EQUAL(person.GetName(), "Seraf");

	person.SetAge(30);
	BOOST_CHECK_EQUAL(person.GetAge(), 30);
	person.SetAge(20);
	BOOST_CHECK_EQUAL(person.GetAge(), 30);

	person.SetWeight(60);
	BOOST_CHECK_EQUAL(person.GetWeight(), 60);

	person.SetGrowth(190);
	BOOST_CHECK_EQUAL(person.GetGrowth(), 190);
	person.SetGrowth(185);
	BOOST_CHECK_EQUAL(person.GetGrowth(), 190);
}