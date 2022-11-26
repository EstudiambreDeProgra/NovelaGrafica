#pragma once
#include<SFML/Graphics.hpp>
#include "Game.h"
#include<iostream>
#include<windows.h>
#include<SFML/Audio.hpp>
using namespace std;
using namespace sf;

class Game {

public:
	Music musica;
	int option = 0, optionMenu = 0;
	void playgame();
	Sprite start;
	Texture start1;
	void keepWalking();
	void walkFaster();
	void Yell();
	void returnBack();
	void followVoice();
	void climbTree();
	void call911();
	void footprints();
	void rememberWay();
	void uphill();
	void trace();
	void crossRiver();
	void drinkRiver();
	void knockDoor();
	void cry();
	void run();
	void fight();
	void menu();
	void instructions();


};

