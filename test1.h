#include <iostream>
#include <string>
using namespace std;

/* define a resistor class that include
the resistance, the power rating
a constructor that initialize the resistor's resistance and power rating
function to get the resistance
function to get the power rating
function to calculate the power with a voltage as input parameter
function to calculate the equivalent resistance in parallel with another resistor with a resistance as input
function to check the resistor is suitable for the voltage level 
use the main function to test all functions
*/

class resistor {
public:
	resistor(int, float);  //constructor for resistor 
	int get_r();    // return the resistor's resistance
	float get_p();  // return the resistor's power rating 
	float v_power(float);  // calculate the power of the resistor using the input parameter as the supply voltage
	float r_para(float);   // calculate the equivalent resistance with the input parameter is parallel to the resistor
	void checking(float);  // check if the resistor is suitable for use with the input voltage level
private:
	int r_value;
	float p_rate;
};