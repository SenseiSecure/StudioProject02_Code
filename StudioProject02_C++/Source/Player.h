#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Collision.h"

class Player : public Entity 
{
public:
	Player();
	Player(const Vector3& pos, const Vector3& dir, float rangeX, float rangeY, float rangeZ, bool isCollisionON, float mass, std::string name);
	void calAcceleration();
	~Player();
	void checkKeypress();
	void update();

private:

	float horsePower;
	float acceleration; // ms^-2 //need to decide myself
	Vector3 direction;
	bool changeCamera;
	bool ghostMode;

	// pointer to revive point


};

#endif

