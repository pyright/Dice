
/*This program rolls dice.


By Michael E. Campos
Last modified on 19 July 2017 at 1600


*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>


//using namespace std;

//////////////
//START MAIN//
//////////////
int main(int argc, char* argv[]) {

	/////////////////////////
	//Get Initial Variables//
	/////////////////////////

	/* check command line
	if (argc != 1) {
		fprintf(stderr, "usage: %s num_dice_sizes\n", argv[0]); //#######################
		exit(-1);
	}

	// check num_dice_sizes
	const int num_dice_sizes = atoi(argv[1]);
	if (num_dice_sizes < 1) { //Needs better checks. Check if !NULL
		fprintf(stderr, "error: num_dice_sizes must be >= 1\n");
		exit(-1);
	}*/
	
	const int num_dice_sizes = 3;

	int dice_floor[num_dice_sizes];
	int dice_roof[num_dice_sizes];
	int num_rolls[num_dice_sizes];
	
	
	// get num_rolls, dice_roof, and dice_floor for each dice size
	for (int i = 0; i < num_dice_sizes; i++) {
		//get num_rolls
		std::cout << "\nRoll dice " << i+1 << " how many times? ";
		std::cin >> num_rolls[i];
		
		//get dice_floor
		std::cout << "\nWhat is the floor for dice " << i+1 <<"? ";
		std::cin >> dice_floor[i];
		
		//get dice_roof
		std::cout << "\nWhat is the roof for dice " << i+1 << "? ";
		std::cin >> dice_roof[i];
	}
	
	
	
	
	/////////////////////////
	//  DEBUG DEBUG DEBUG  //
	/////////////////////////
	
	for (int i = 0; i < num_dice_sizes; i++){
		std::cout << "\nDice " << i+1 << "\nRolls: " << num_rolls[i] << "\nFloor-Roof: " << dice_floor[i] << "-" << dice_roof[i];
	}
	
	
	
	
	
	
	
	
	// Roll function, should return one random integer in the closed range Floor-Roof
	// The function must create its own random device object. The function will be parallelized????? Each thread must have its own random object
	
	int roll(int floor, int roof){
		std::random_device theDice; //uniform random integer generator object
  		std::mt19937 theRoller(theDice()); //
 		std::uniform_int_distribution<int> theRoll(floor, roof);
 		
 		int theReturn = dis(mt))
 		
 		return theReturn;
	}
	
	
	
	
	
	
	
	
	
	
	
	/*
	
	List of desired functionality
	
	1. Pre-made dice. D2, D3, D4, D6, D8, D10, D12, D20, D100. Hold finger on  dice picture to select X number of rolls for that dice. HDisplay previous rolls on screen.
	
	2*. Quick dice maker. Integer dice. Any range. Create a new Dice object with floor and roof variables. 

	
	3. Detailed dice maker. Dice maker with ability to label all dice sides. Basically, allow input for X sides of the dice. Set random range to array size minus 1, use that to get a dice roll.
		Function 3 creates an object with a label_array. label_array contains the labels of the dice face. This implementation allows the user to control density of different dice.0
	
	?. Statistic function that proves mathematical proof of fair number distribution
	
	
	*/

	






	

	return 0; //exit main






} // END MAIN
