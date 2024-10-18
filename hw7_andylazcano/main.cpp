#include "ADT.hpp"
/*******************************************************************************
 * Description:
 *
 * Main function with array initialization. The focus of the simulation by menu-
 * driven options.
*******************************************************************************/
int main (){
	ZooLocations location = ENTRANCE;

	const int ROWSIZE = 3;
	canines canineArray[ROWSIZE];
	canineArray[0] =  {
			"Bolt", "Arctic Fox", 4, 14.3f, "Arctic Regions of Europe"
	};
	canineArray[1] = {
			"Wonder", "Gray Wolf", 3, 100.9f, "Northern Alaska, North America"
	};
	canineArray[2] = {
			"Shuriken", "Sechuran Fox", 6, 10.1f, "Peru, South America"
	};

	felines felineArray[ROWSIZE];
	felineArray[0] =  {
			"Marbels", "Marbeled Cat", 2, 3.7f, "Borneo, Polynesia"
	};
	felineArray[1] = {
			"Goldilocks", "African Golden Cat", 4, 22.2f, "Cameroon, Africa"
	};
	felineArray[2] = {
			"Okie", "Ocelot", 2, 33.94f, "Sonora, Mexico"
	};

	seaAnimals seaArray[ROWSIZE];
	seaArray[0] =  {
			"Okra", "Orca Whale", 7890.6f, "Norway, Europe"
	};
	seaArray[1] = {
			"Wheeler", "Spinner Dolphin", 155.3f, "Hawaii, Pacific Region"
	};
	seaArray[2] = {
			"Shang Tsu", "South Asian River Dolphin", 185.6f, "Nepal, Asia"
	};

	cout << "Welcome to my zoo!" << endl;
	cout << "It features animals that are canines, felines, and sea mammals!\n" << endl;

	do{
		cout << "Your current location is: " << convert(location) << endl << endl;
		ZooLocations locationWalked = menu();
		location = locationWalked;
		if (location == ENTRANCE){
			continue;
		}
		else if (location == EXHIBIT_1){
			cout << "You walked from " << convert(location) << " to " << convert(locationWalked) << endl;
			exhibit_1(canineArray, ROWSIZE);
		}
		else if(location == EXHIBIT_2){
			cout << "You walked from " << convert(location) << " to " << convert(locationWalked) << endl;
			exhibit_2(felineArray, ROWSIZE);
		}
		else if (location == EXHIBIT_3){
			cout << "You walked from " << convert(location) << " to " << convert(locationWalked) << endl;
			exhibit_3(seaArray, ROWSIZE);
		}
		else if (location == GIFT_SHOP){
			giftShop();
		}
		else if (location == EXIT ){
			cout << "Thank you for visiting, come again soon!" << endl;
			break;
		}
		else {
			cout << "Please choose one of the options" << endl;
		}

	}
	while(true);

	//terminate
	return 0;
}


