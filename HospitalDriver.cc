#include <iostream>
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
using namespace std;

int main()
{

// 	The student who designs the main program will design a menu that allows the
// user to enter a type of surgery and a type of medication, and check the patient out of the hospital. When the patient checks out, the total charges should be displayed.
	PatientAccount patient;
	patient.id = 0;

	int surgery;
	int medication;

	cout << "SURGERY OPTIONS" << endl;
	cout << "1. Appedectomy: $8000" << endl;
	cout << "2. Cesarean Section: $22000" << endl;
	cout << "3. SeptalMyectomy: $180000" << endl;
	cout << "4. Bariatric: $15000" << endl;
	cout << "5. Thoracic Aortic Dissection Repair: $16000" << endl;

	cout << "What type of surgery would you like? Please choose a number." << endl;
	cin >> surgery;
	cout << endl;

	cout << "PHARMACY OPTIONS" << endl;
	cout << "1. Antipyretics: $100" << endl;
	cout << "2. Analgesics: $150" << endl;
	cout << "3. Antimalarial: $200" << endl;
	cout << "4. Antibiotics: $250" << endl;
	cout << "5. AntisepticsPrice: $300" << endl;

	cout << "What type of medication would you like? Please choose a number." << endl;
	cin >> medication;

	if (surgery == 1)
	{
		Surgery appedectomy;
		appedectomy.updateCharges(patient, appedectomy.appedectomyPrice);
		cout << patient.get_charges() << endl;
	}
	else if (surgery == 2)
	{
		Surgery cSection;
		cSection.updateCharges(patient, cSection.cesareanSectionPrice);
		cout << patient.get_charges() << endl;
	}
	else if (surgery == 3)
	{
		Surgery septalMyectomy;
		septalMyectomy.updateCharges(patient, septalMyectomy.septalMyectomyPrice);
		cout << patient.get_charges() << endl;
	}
	else if (surgery == 4)
	{
		Surgery bariatric;
		bariatric.updateCharges(patient, bariatric.bariatricPrice);
		cout << patient.get_charges() << endl;
	}
	else
	{
		Surgery thoracicAorticDissectionRepair;
		thoracicAorticDissectionRepair.updateCharges(patient, thoracicAorticDissectionRepair.thoracicAorticDissectionRepairPrice);
		cout << patient.get_charges() << endl;
	}

	/////////////////////////////////////////////
	if (medication == 1)
	{
		Pharmacy antipyretics;
		antipyretics.updateCharges(patient, antipyretics.antipyreticsPrice);
		cout << patient.get_charges() << endl;
	}
	else if (medication == 2)
	{
		Pharmacy analgesics;
		analgesics.updateCharges(patient, analgesics.analgesicsPrice);
		cout << patient.get_charges() << endl;
	}
	else if (medication == 3)
	{
		Pharmacy antimalarial;
		antimalarial.updateCharges(patient, antimalarial.antimalarialPrice);
		cout << patient.get_charges() << endl;
	}
	else if (medication == 4)
	{
		Pharmacy antibiotics;
		antibiotics.updateCharges(patient, antibiotics.antibioticsPrice);
		cout << patient.get_charges() << endl;
	}
	else
	{
		Pharmacy antiseptics;
		antiseptics.updateCharges(patient, antiseptics.antisepticsPrice);
		cout << patient.get_charges() << endl;
	}

	return 0;
}
