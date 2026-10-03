// WEEK 01 - DATA & MEMORY
// Find the errors / bad practices. Not everything here is a compiler error -
// some lines compile fine but are still WRONG or risky. Find them all.

#include <iostream>



int main()
{
	// ----------------------
	// Example:
	//int my_example; // ES.20 (always initialize), NL.8 (naming convention lowerCamelCase) 
	int myExample{};  // corrected
	// ----------------------

	std::cout << "=== Streamer Statistics ===\n\n";

	int Followers, Likes;
	Followers = 1240;
	Likes = 875;

	bool ready = true;

	float intAverageLikes = Likes / Followers;

	char Grade = 65;

	bool hasPremium, isLive = true;

	int viewerCount{ 1200 };
	int subscriberCount{ 530 };

	double DonationAmount;
	DonationAmount = 14.99f;

	int minutesWatched = 95;

	std::cout << "Followers: " << Followers << std::endl;
	std::cout << "Likes: " << Likes << std::endl;
	std::cout << "Average likes per follower: " << intAverageLikes << std::endl;

	std::cout << "\nStreamer grade: " << Grade << std::endl;

	std::cout << "\nViewer count: " << viewerCount << std::endl;
	std::cout << "Subscriber count: " << subscriberCount << std::endl;

	viewerCount += 100 + 50 * 2;

	std::cout << "\nUpdated viewers: " << viewerCount << std::endl;

	float streamLength = 2.5f;
	int totalSeconds = streamLength * 60;

	std::cout << "Total seconds streamed: "
		<< totalSeconds << std::endl;

	std::cout << "\nSize of ready: "
		<< sizeof(ready)
		<< std::endl;

	std::cout << "Address of followers: "
		<< &Followers
		<< std::endl;

	int score = 100;
	score = score + 10;

	std::cout << "\nFinal score: "
		<< score
		<< std::endl;

	std::cout << "\nByte size of DonationAmount: "
		<< sizeof(DonationAmount)
		<< std::endl;

	std::cout << "Premium account: "
		<< hasPremium
		<< std::endl;

	std::cout << "\nLevel requirement met: "
		<< (score > 15)
		<< std::endl;

	return 0;
}