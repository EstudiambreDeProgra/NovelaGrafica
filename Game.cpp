//Vale mauser, no supe kpdo con los grafos y ahora me toca sufrir este desvergue de código...
//Consideralo mi penitencia por no saber que onda con los grafos...

#include "Game.h"
#include<iostream>
#include<windows.h>
using namespace std;

void Game::menu() {
	system("cls");

	cout << "Welcome to the Menu, select an option:\n1)Instructions\n2)Play Game\n3)Exit\n";
	cin >> optionMenu;
	switch (optionMenu) {
	case 1: instructions();
		break;
	case 2: playgame();
		break;
	case 3: EXIT_SUCCESS;
		break;
	default: menu();
		break;
	}

}

void Game::instructions() {
	system("cls");
	cout << "In this game you can choose betwen two options every time, to die in the woods or survive\nRead the history and select and option\n\n1)Back to Menu\n2)Exit\n";
	cin >> optionMenu;
	switch (optionMenu) {
	case 1: menu();
		break;
	case 2: EXIT_SUCCESS;
		break;
	}

}

void Game::playgame() {
	system("cls");

	musica.openFromFile("NovelaGrafica.ogg");
	musica.play();

	start1.loadFromFile("Trip With Friends.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 600), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You're in your first wooden trip with some people...\n";
	Sleep(3000);
	cout << "...tired, decide to sit a few minutes\n";
	Sleep(3000);
	cout << "but when keep walking you can't see anybody...\n\n1)Keep walking\n2)Yell something\n";
	cin >> option;
	switch (option) {
	case 1: keepWalking();
		break;
	case 2: Yell();
		break;
	default: playgame();
		break;
	}

}

void Game::keepWalking() {
	system("cls");

	start1.loadFromFile("KeepWalking.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 700), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You keep walking...\n";
	Sleep(3000);
	cout << "Maybe this isn't the right way because you haven't seen another person...\n\n1)Walk faster and stright\n2)Return to where were you first\n";
	cin >> option;
	switch (option) {
	case 1: walkFaster();
		break;
	case 2: returnBack();
		break;
	default: keepWalking();
		break;
	}
}

void Game::Yell() {
	system("cls");

	start1.loadFromFile("KeepWalking.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 700), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "Yelling you hear a voice far away...\n";
	Sleep(3000);
	cout << "The voice is every second far from you...\n";
	Sleep(3000);
	cout << "1)Try to follow the voice\n2)Climb a tall tree\n";
	cin >> option;
	switch (option) {
	case 1: followVoice();
		break;
	case 2: climbTree();
		break;
	default: Yell();
		break;
	}
}

void Game::walkFaster() {
	system("cls");

	start1.loadFromFile("Walk Faster.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(800, 400), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You can't find anyone else, you're lost...\n\n";
	Sleep(3000);
	cout << "What do you do next?\n1)Call 911\n2)Climb a tall tree\n";
	cin >> option;
	switch (option) {
	case 1: call911();
		break;
	case 2: climbTree();
		break;
	default: walkFaster();
		break;
	}
}

void Game::returnBack() {
	system("cls");

	start1.loadFromFile("KeepWalking.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 700), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You don't remember to much the way back...\n";
	Sleep(3000);
	cout << "1)Call 911\n2)Try to remember and keep way back\n";
	cin >> option;
	switch (option) {
	case 1: call911();
		break;
	case 2: rememberWay();
		break;
	default: returnBack();
		break;
	}
}

void Game::rememberWay() {
	system("cls");

	start1.loadFromFile("Cry.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(800, 200), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You are lost...\n1)Climb a tree\n2)Call 911\n";
	cin >> option;
	switch (option) {
	case 1: climbTree();
		break;
	case 2: call911();
		break;
	default:rememberWay();
		break;
	}
}

void Game::followVoice() {
	system("cls");

	start1.loadFromFile("footprints.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 800), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You're trying to follow where the voice come from...\n";
	Sleep(5000);
	cout << "You found some footprints...\n1)Follow footprints\n2)Yell again\n";
	cin >> option;
	switch (option) {
	case 1: footprints();
		break;
	case 2: Yell();
		break;
	}

}

void Game::footprints() {
	system("cls");

	start1.loadFromFile("Someone uphill.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(400, 300), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "The trace finished but you see someone uphill...\n1)Go uphill\n2)Look for another trace\n";
	cin >> option;
	switch (option) {
	case 1: uphill();
		break;
	case 2: trace();
		break;
	default: footprints();
		break;
	}
}

void Game::trace() {
	system("cls");

	start1.loadFromFile("River.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 600), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "Looking for a trace...\n";
	Sleep(3000);
	cout << "There's no trace but you found a river...\n1)Cross the river\n2)Drink river water\n";
	cin >> option;
	switch (option) {
	case 1: crossRiver();
		break;
	case 2: drinkRiver();
		break;
	default: trace();
		break;
	}
}

void Game::crossRiver() {
	system("cls");

	start1.loadFromFile("knock door.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(600, 400), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You found a wooden house...\n";
	Sleep(3000);
	cout << "Looks very old almost like abandoned house...1)Knock the door\n2)Run away\n";
	cin >> option;
	switch (option) {
	case 1: knockDoor();
		break;
	case 2: run();
		break;
	default: crossRiver();
		break;
	}
}

void Game::run() {
	system("cls");

	start1.loadFromFile("Run.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(1000, 1000), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You're running but someone is following you...\n";
	Sleep(3000);
	cout << "The one who invited you to this trip was following you...\n";
	Sleep(3000);
	cout << "He takes you to the wooden house...\n";
	Sleep(3000);
	cout << "He shows you that he already kill all the people of the trip....\n";
	Sleep(7000);
	cout << "...you're next...\n1)Play Again\n2)Menu\n";
	cin >> option;
	switch (option) {
	case 1: playgame();
		break;
	case 2: menu();
		break;
	default: run();
		break;
	}
}

void Game::knockDoor() {
	system("cls");

	start1.loadFromFile("knocking.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 600), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "Somebody is on the bed...\n";
	Sleep(3000);
	cout << "That somebody is one of your partners...he's dead...\n";
	Sleep(3000);
	cout << "Someone is behind you...\n1)Run\n2)Fight\n";
	cin >> option;
	switch (option) {
	case 1: run();
		break;
	case 2: fight();
		break;
	default: knockDoor();
		break;
	}
}

void Game::fight() {
	system("cls");

	start1.loadFromFile("Fight.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(500, 300), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You don't know how to fight...\n";
	Sleep(3000);
	cout << "That person has an axe...\n";
	Sleep(3000);
	cout << "He kills you...\n1)Play Again\n2)Menu\n";
	cin >> option;
	switch (option) {
	case 1: playgame();
		break;
	case 2: menu();
		break;
	default: fight();
		break;
	}
}

void Game::drinkRiver() {
	system("cls");

	start1.loadFromFile("Drink River.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(1000, 1000), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "That water has a lot of toxic chemicals...\n";
	Sleep(4000);
	cout << "You fell unconscious to the river...and you die drown...\n1)Play Again\n2)Menu\n";
	cin >> option;
	switch (option) {
	case 1: playgame();
		break;
	case 2: menu();
		break;
	default: drinkRiver();
		break;
	}
}

void Game::climbTree() {
	system("cls");

	start1.loadFromFile("Climb a tree.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(800, 500), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You're climbing a tree...\n";
	Sleep(3000);
	cout << "You fell of the tree and a big branch pierced your chest...\n";
	Sleep(3000);
	cout << "...YOU'RE DEAD...\n1)Menu\n2)Play Again\n";
	cin >> option;
	switch (option) {
	case 1: menu();
		break;
	case 2: playgame();
		break;
	default: climbTree();
		break;
	}
}

void Game::call911() {
	system("cls");

	start1.loadFromFile("911.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(900, 600), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You're calling 911...\n";
	Sleep(3000);
	cout << "There's not to much signal there...\n\n1)Go uphill\n2)Cry\n";
	cin >> option;
	switch (option) {
	case 1: uphill();
		break;
	case 2: cry();
		break;
	default: call911();
		break;
	}
}

void Game::cry() {
	system("cls");

	start1.loadFromFile("Bear attack.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(700, 500), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "Start crying...\n";
	Sleep(8000);
	cout << "...still crying...\n";
	Sleep(3000);
	cout << "You can't see the bear 'cause your crying too much...\n";
	Sleep(5000);
	cout << "...the bear kills you...\n1)Play Again\n2)Menu\n";
	cin >> option;
	switch (option) {
	case 1:playgame();
		break;
	case 2: menu();
		break;
	default: cry();
		break;
	}
}

void Game::uphill() {
	system("cls");

	start1.loadFromFile("uphill.jpg");
	start.setTexture(start1);
	RenderWindow window(VideoMode(600, 900), "First");
	window.clear();
	window.draw(start);
	window.display();

	cout << "You found your partners, you survive to the woods, good job\n\n1)Play Again\n2)Menu\n";
	cin >> option;
	switch (option) {
	case 1: playgame();
		break;
	case 2: menu();
		break;
	}
}