// Sayit, Ali 1DAE13

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{
	// Distance conversion
	std::cout << "Distance in KM? ";
	float distanceInput{};
	std::cin >> distanceInput;

	float distanceCmConversion{100000.f};
	float distanceMeterConversion{1000.f};
	float distanceInCm{ distanceInput * distanceCmConversion};
	float distanceInMeter{distanceInput * distanceMeterConversion};

	std::cout <<  distanceInMeter <<" meters, " << distanceInCm << " cm\n\n";


	// Angle
		// Radian to degree
	std::cout << "Angle in radians? ";
	float angleInRadians{};
	std::cin >> angleInRadians;
	
	float pi{ 3.1415f };
	float piInDegrees{ 180.f };
	float angleInDegreesConverted{ angleInRadians * (piInDegrees / pi) };

	std::cout << angleInDegreesConverted << " degrees\n\n";

		// Degree to radian
	std::cout << "Angle in degrees? ";
	float angelInDegrees{};
	std::cin >> angelInDegrees;

	float angleInRadiansConverted{ angelInDegrees * (pi / piInDegrees) };
	std::cout << angleInRadiansConverted << " radians\n\n";

	//Rotation
	std::cout << "Second of one rotation? ";
	float secondsOfRotation{};
	std::cin >> secondsOfRotation;

	float fullRotationDegree{ 360.f };
	float rotationPerDegreeSecond{fullRotationDegree / secondsOfRotation };

	std::cout << rotationPerDegreeSecond << " degrees/second\n\n";
	
	//Distance
	std::cout << "Speed (km/h)? ";
	float speedInput{};
	std::cin >> speedInput;
	
	std::cout << "Elapsed time (minutes)?";
	float elapsedTime{};
	std::cin >> elapsedTime;

	float metersPerKm{ 1000.f };
	float minutesPerHour{ 60.f };

	float calculatedDistance{(speedInput * elapsedTime) * (metersPerKm / minutesPerHour)};
	std::cout << calculatedDistance << " meters\n\n";
	
	//Velocity
	std::cout << "Seconds? ";
	float fallingSecond{};
	std::cin >> fallingSecond;
	
	float gravityMeterPerSecond{ 9.8f };

	float currentVelocity{ fallingSecond * gravityMeterPerSecond };

	std::cout << "Velocity " << currentVelocity << " m/sec\n\n";

	// Radius
	std::cout << "Radius of circle? ";
	float radiusInput{};

	std::cin >> radiusInput;

	float calculatedCircumference{2* pi * radiusInput};
	float calculatedArea{pi * (radiusInput * radiusInput)};

	std::cout << "Circumference: " << calculatedCircumference << "\n";
	std::cout << "Area: " << calculatedArea;

	return 0;
}

