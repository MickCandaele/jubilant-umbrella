#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

	int myHealth = 50;
	int goblinHealth = 50;
	string input;
	int attack;
	int heal;
	int goblinAttack;
	int goblinHeal;
	int ai;
int main() {
	cout << "Goblin appears!" << endl;
	attack:
	if (myHealth <= 0){
		cout << "You died!" << endl;
		return 0;
		
	}
	else if (goblinHealth <= 0){
		cout << "You won!" << endl;
		return 0;
	}
	else {
	}
	cout << "Type attack to attack, type heal to heal" << endl;
	cin >> input;
	if (input == "attack"){
		srand (time(0));
		attack = rand() % 8 + 0;
		goblinHealth = goblinHealth - attack;
		cout << "Goblin health is now: " << goblinHealth << endl;
		goto goblinAttack;
		
	}
	else if (input == "heal" && myHealth < 50){
		heal:
		srand (time(0));
		heal = rand() % 8 + 0;
		myHealth = myHealth + heal;
		cout << "You have been healed, your health is now: " << myHealth << endl;
		goto goblinAttack;
	}
	else if (myHealth == 50 && input == "heal"){
		cout << "You are already at max health!" << endl;
		goto attack;
	}
	else {
		cout << "Invalid command!" << endl;
		goto attack;
	}
	goblinAttack:
		while (goblinHealth <= 0){
			cout << "You won!" << endl;
			return 0;
			break;
		}
		srand (time(0));
		ai = rand() % 2 + 1;
		if (goblinHealth < 20 && ai == 2){
		srand (time(0));
		heal = rand() % 8 + 0;
		goblinHealth = goblinHealth + heal;
		cout << "Goblin has healed!" << endl;
		cout << "Goblin health is now: " << goblinHealth << endl;
		goto attack;
		}
		srand (time(0));
		goblinAttack = rand() % 7 + 0;
		myHealth = myHealth - goblinAttack;
		cout << "Goblin attacks!" << endl;
		cout << "Your health is now: " << myHealth << endl;
		goto attack;
		
}
