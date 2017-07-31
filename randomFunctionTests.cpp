#include <string>
#include <iostream>
#include <random>
#include <ctime>

int main (){
	
		// Roll function, should return one random integer in the closed range Floor-Roof
		// The function must create its own random device object. The function will be parallelized????? Each thread must have its own random object
	
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// FOR SOME FUCKIN' REASON, I CANNOT GET A NON-DETERMINISTIC SEED. I NEED A SEED THAT IS DIFFERENT EVERY TIME I EXECUTE THE PROGRAM //
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//int roll(int floor, int roof){
		const int floor = 1;
		const int roof = 20;
	
		std::random_device theDice; //uniform random integer generator object
	
	//	std::mt19937 theRoller(theDice());
		std::mt19937 theRoller(time(0));
		
		std::uniform_int_distribution<int> theRoll(floor, roof);
		
		for(int i = 1; i < 10; i++){
			std::cout<< theRoll(theDice) << std::endl;	
		}
  		
 	/*	std::uniform_int_distribution<int> theRoll(floor, roof);
 		
 	//	for(int rolls = 0; rolls < 10; rolls++){
 	//		std::cout << theRoll(theRoller) <<std::endl; //WE MUST US "theRoll(theRoller)". IT CHANGES
 		
 		}*/
	//}
	

	
	
	
	
	
	system("PAUSE");
	
	return 0;
}
