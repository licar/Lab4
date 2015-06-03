// Bodies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cone.h"
#include "Cylinder.h"
#include "Parallelepiped.h"
#include "Sphere.h"
#include <memory>
#include "iostream"
#include <vector>

typedef vector<shared_ptr<CBody>> PtrsToBodies;
typedef shared_ptr<CBody> PtrToBody;
using namespace std;

PtrsToBodies GetBodiesAndAddToVector()
{	
	PtrsToBodies bodies;

	string bodyName;
	do
	{
		cout << "Body name : ";

		cin >> bodyName;

		if (bodyName == "cone")
		{
			double radius;
			double height;
			double density;

			cout << "radius : ";
			cin >> radius;
			cout << "height : ";
			cin >> height;
			cout << "density : ";
			cin >> density;

			bodies.push_back(PtrToBody
				(new CCone(height, radius, density)));
		}
		else if (bodyName == "cylinder")
		{
			double radius;
			double height;
			double density;

			cout << "radius : ";
			cin >> radius;
			cout << "height : ";
			cin >> height;
			cout << "density : ";
			cin >> density;

			bodies.push_back(PtrToBody
				(new CCylinder(height, radius, density)));
		}
		else if (bodyName == "parallelepiped")
		{
			double widht;
			double height;
			double deep;
			double density;

			cout << "height : ";
			cin >> height;
			cout << "widht : ";
			cin >> widht;
			cout << "deep : ";
			cin >> deep;
			cout << "density : ";
			cin >> density;

			bodies.push_back(PtrToBody
				(new CParallelepiped(height, widht, deep, density)));
		}
		else if (bodyName == "sphere")
		{
			double radius;
			double density;

			cout << "radius : ";
			cin >> radius;
			cout << "density : ";
			cin >> density;

			bodies.push_back(PtrToBody
				(new CSphere(radius, density)));
		}
	} while (bodyName != "...");
	return bodies;
}

PtrToBody FindBodyWithHighestMass(
	PtrsToBodies const &bodies)
{
	PtrToBody highestMassBody;
	highestMassBody = bodies[0];

	for (size_t i = 1; i != bodies.size(); ++i)
	{
		if (bodies[i]->GetMass() > highestMassBody->GetMass())
		{
			highestMassBody = bodies[i];
		}
	}
	return highestMassBody;
}

bool ComparisonIsCurrBodyHaveLessWeight(
	PtrToBody const & currBody, double &lowestWeight)
{
	const double WATER_DENSITY = 1000;
	const double G = 9.8;
	
	double currBodyWeight = (currBody->GetDensity() - WATER_DENSITY) *
		9.8 * currBody->GetVolume();

	if (currBodyWeight < lowestWeight)
	{
		lowestWeight = currBodyWeight;
		return true;
	}
	return false;
}

PtrToBody FindBodyWithLowerWeight(
	PtrsToBodies const &bodies)
{
	PtrToBody esiestWeightBody;
	double lowestWeight = 9223372036854775807.0;

	for (size_t i = 0; i != bodies.size(); ++i)
	{
		if (ComparisonIsCurrBodyHaveLessWeight(
			bodies[i], lowestWeight))
		{
			esiestWeightBody = bodies[i];
		}
	}
	return esiestWeightBody;
}

int _tmain(int argc, _TCHAR* argv[])
{
	PtrsToBodies bodies = GetBodiesAndAddToVector();
	PtrToBody highestMassBody = FindBodyWithHighestMass(bodies);
	PtrToBody lowerWeightBody = FindBodyWithLowerWeight(bodies);

	if (highestMassBody)
	{
		cout << "body with highest mass :\n";
		cout << highestMassBody->GetInfo();
	}

	if (lowerWeightBody)
	{
		cout << "\nbody with lower weight :\n";
		cout << lowerWeightBody->GetInfo();
	}
	return 0;
}

