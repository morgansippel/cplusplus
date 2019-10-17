#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string another, juiceOrder, code, juice, bottles;

    cout << "Welcome to Pulper Prize Juice Company!\n";
    cout << "Enter the juice order code CSL12";

    while (another == "y") {

        cout << "Enter the juice order code CSL12";
        cin >> juiceOrder;

        if (juiceOrder.substr(2,1)>"9") { 								//is it a letter?)
            code = juiceOrder.substr(0,3); 				//abc is example
            bottles=juiceOrder.substr(3); 						//number of bottles
            if (code == "ABC") {
                juice="Apple-Bee-Carrot,";
            }
            if (code == "CSL") {
                juice="Cucumber-Spinach-Lemon,";
						}
						if (code == "KPL") {
                juice="Kale-Parsley-Lemon";
						}
					  if (code == "SAC") {
                juice="Spinach-Apple-Carrot";
						}
            if (code == "WLM") {
                juice="Watermelon-Lime-Mint";
						}
            cout << "You ordered" << bottles << " of " << juice << "\n";
        }
        else {
            code=juiceOrder.substr(0,2);
            bottles=juiceOrder.substr(2);

            if (code == "AK")  {
                string juice="Apple-Kale.";
						}
						if (code == "CL")  {
                string juice="Celery-Lemon.";
						}
						if (code == "OC") {
                string juice="Orange-Carrot.";
						}
            if (code == "WG") {
                string juice="Wheat Grass.";
						}
            cout << "You ordered" << bottles << " of " << juice << "\n";
        }

        cout << "Another item?(y or n): ";
        cin >> another;

    }

    return 0;
}
