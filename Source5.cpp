#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;



int main()
{

	string item = string();
	int units = int();
	double cost = double();
	double totalValue = double();
	double inventoryTotal = double();
	ifstream in;
	ofstream out("Project5Report.txt");


	cout << "\t\t      == == == == == == == == == == =="<< endl;
	cout << "\t\t      ==      EOF Loop Exercise     =="<< endl;
	cout << "\t\t      ==   Long Beach City College  =="<< endl;
	cout << "\t\t      ==    Author: Joseph Khashi   =="<< endl;
	cout << "\t\t      ==         July 5, 2014       =="<< endl;
	cout << "\t\t      == == == == == == == == == == ==\n" << endl;

	out << "\t\t      == == == == == == == == == == ==" << endl;
	out << "\t\t      ==      EOF Loop Exercise     ==" << endl;
	out << "\t\t      ==   Long Beach City College  ==" << endl;
	out << "\t\t      ==    Author: Joseph Khashi   ==" << endl;
	out << "\t\t      ==         July 5, 2014       ==" << endl;
	out << "\t\t      == == == == == == == == == == ==\n" << endl;


	cout<<fixed<<setprecision(2);
	out << fixed << setprecision(2);

	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
	cout << "\t Inventory Report For Joseph Khashi International Hardware \n" << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n" << endl;
	cout << "Item \t" << "Number of Units \t" << "Unit Cost ($) \t" << "Total Value ($)" << endl;
	cout << "________________________________________________________________________________" << endl;

	out << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
	out << "\t Inventory Report For Joseph Khashi International Hardware " << endl;
	out << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n" << endl;
	out << "Item \t" << "Number of Units \t" << "Unit Cost ($) \t" << "Total Value ($)" << endl;
	out << "________________________________________________________________________________\n" << endl;

	in.open("p5Data.txt");

	while (!in.eof())
	{
		in >> item >> units >> cost;
		totalValue = units * cost;
		inventoryTotal = inventoryTotal + totalValue;
		cout << item << "\t\t" << units << "\t\t" << cost << "\t\t" << totalValue << endl << endl;
		out << item << "\t\t" << units << "\t\t" << cost << "\t\t" << totalValue << endl<<endl;
	}

	//Inventory total is Displayed under the while function in order to avoid repitition

	cout << "________________________________________________________________________________" << endl;
	cout << "Inventory Total ($) : \t\t\t\t" << inventoryTotal << endl;

	out << "________________________________________________________________________________" << endl;
	out << "Inventory Total ($) \t\t\t\t" << inventoryTotal << endl;

}
