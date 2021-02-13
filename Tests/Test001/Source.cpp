// /*--------------------------------------------------------------------------*/
// /*                                                                          */
// /*    Module:       Source.cpp					                           */
// /*    Author:       Nick Lubeck                                             */
// /*    Created:      Sat Feb 13 2021                                         */
// /*    Description:  Github Test Solution                                    */
// /*                                                                          */
// /*--------------------------------------------------------------------------*/

//Include Header File
#include <iostream>
using namespace std;

//Initialize Global Variables
short x;
short y;

//Begin Main
int main()
{
	//Define variables
	x = 0;
	y = 5;

	//Modify both varibles by adding 1
	x += 1;
	y += 1;

	//Add both variables together and save as "y"
	y = x + y;

	//Display out variable "y"
	cout << y << endl;

	//Return Back 0
	return 0;
}