// NOTE: These structs exist only for the Programming 1 assignment.
// They are NOT examples of good struct design, but will help us better explain this week's topics.
// BigFish is deliberately bloated, so it is much larger in memory than Fish.

struct Fish
{
    int id;
    int health;
    int maxHealth;

    float speed;
    float weight;
    float length;
};

struct BigFish
{
    int id;
    int health;
    int maxHealth;

    float speed;
    float weight;
    float length;

    float energy;
    float oxygen;
    float hunger;

    float age;
    float size;
    float growthRate;
    float swimDirection;
    float waterTemperature;
    float pressure;
    float visibility;
    float heartRate;
    float stressLevel;
    float camouflageLevel;
    float aggression;
    float awareness;

    double x;
    double y;
    double velocityX;
    double velocityY;
    double accelerationX;
    double accelerationY;
    double rotation;
    double rotationSpeed;

    long long dnaId;
    long long motherId;
    long long fatherId;
    long long schoolId;

    bool isHungry;
    bool isSleeping;
    bool isInjured;
    bool isEscaping;
    bool isPredator;
    bool hasEggs;
};