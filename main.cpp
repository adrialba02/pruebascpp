#include <iostream>

int main (int argc, char** argv){
	
	//std::cout << argc << std::endl;
	
	if(argc>1){
		std::cout << "Holi Adri!" << argv[1] << "!"<< std::endl;
	}
	else{
		std::cout << "introduce un hombre como parametro!!" << std::endl;
	}

	return 0;
}
