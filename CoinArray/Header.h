#pragma once

class Player
{
public:
	Player(float a, float b);
	~Player();
	float GetPosition();
	int Score();

private:
	float coorX;
	float coorY;
};

