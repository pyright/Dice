


class Dice{
	
	private:
		
		int floor;
		int roof;
		
	public:
		
		set_floor();
		get_floor();
		
		set_roof();
		get_roof();

};





void set_floor(int x){
	
	floor = x;
}

int get_floor(){
	
	return floor;
};
		
void set_roof(int x){
	roof = x;
}

int get_roof(){
	
	return roof;
}
