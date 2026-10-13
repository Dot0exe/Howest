// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin

struct SteamProfile
{
	std::string userName;
	std::string bio;
	int level;
};

int main()
{
	SteamProfile player1{};
	player1.userName = "DotaPlayer";
	player1.bio = "i played dota btw";
	player1.level = 2;

	SteamProfile player2{"DotaPlayer2","i use arch btw",1};

	std::cout << player2.userName;

	return 0;
}

