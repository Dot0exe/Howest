// WEEK 03
// Find the errors / bad practices. Not everything here is a compiler error -
// some lines compile fine but are still WRONG or risky. Find them all.
// Find category labels in CATEGORIES.md

#include <iostream>

struct streamerInfo
{
    char Rank;
    int Followers;
    int Donations;
};

const int MAX_PLAYERS{ 100 };
int numberOfStreams{ 15 };
unsigned int g_viewerCount{ 1200 };
float g_StreamDuration{ 2.5f };
bool g_isOnline{ true };

int main()
{
    //////////// Example ////////////
    // 
    // 🔵 Bad Style / Maintainability:
    //int my_example;  ES.20 (always initialize), NL.8 (naming convention lowerCamelCase) 
    int myExample{};  // corrected
    // 
    /////////////////////////////////

    streamerInfo MainStreamer;

    MainStreamer.Rank = 'A';
    MainStreamer.Followers = 5400;

    int streamGoal{ 10000 };
    int currentFollowers = MainStreamer.Followers;

    int hoursPerStream{ 3 };
    float averageViewers{ 1200.0f };

    unsigned int newFollowers{ -25 }; 

    int maxViewers{ 1200 };
    int currentViewers{ 950 };

    int remainingFollowers{ streamGoal - currentFollowers };

    std::cout << "=== STREAM DASHBOARD ===\n\n";

    std::cout << "Rank: " << MainStreamer.Rank << '\n';
    std::cout << "Followers: " << MainStreamer.Followers << '\n';
    std::cout << "Donations: " << MainStreamer.Donations << '\n';

    std::cout << "\nCurrent viewers: " << currentViewers << '\n';
    std::cout << "Average viewers: " << averageViewers << '\n';

    std::cout << "\nRemaining followers until goal: "
        << remainingFollowers << '\n';

    g_viewerCount = g_viewerCount + 100;

    std::cout << "\nGlobal viewer count: "
        << g_viewerCount << '\n';

    std::cout << "New followers today: "
        << newFollowers << '\n';

    int score{ 100 };
    score += 50;

    std::cout << "\nScore: " << score << '\n';

    std::cout << "\nMaximum players supported: " << MAX_PLAYERS << '\n';

    return 0;
}