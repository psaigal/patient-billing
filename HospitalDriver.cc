#include <iostream>
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
using namespace std;

void showSurgeryOptions()
{
	cout << "SURGERY OPTIONS" << endl;
	cout << "1. Appedectomy: $8000" << endl;
	cout << "2. Cesarean Section: $22000" << endl;
	cout << "3. SeptalMyectomy: $180000" << endl;
	cout << "4. Bariatric: $15000" << endl;
	cout << "5. Thoracic Aortic Dissection Repair: $16000" << endl;
	cout << "6. Checkout Patient" << endl;

}

void showPharmacyOptions()
{
	cout << "PHARMACY OPTIONS" << endl;
	cout << "1. Antipyretics: $100" << endl;
	cout << "2. Analgesics: $150" << endl;
	cout << "3. Antimalarial: $200" << endl;
	cout << "4. Antibiotics: $250" << endl;
	cout << "5. AntisepticsPrice: $300" << endl;
	cout << "6. Checkout Patient" << endl;
}

double returnSurgeryPatientCharges(int surgery, PatientAccount& patient)
{
	if (surgery == 1)
	{
		Surgery appedectomy;
		appedectomy.updateCharges(patient, appedectomy.appedectomyPrice);
	}
	else if (surgery == 2)
	{
		Surgery cSection;
		cSection.updateCharges(patient, cSection.cesareanSectionPrice);
	}
	else if (surgery == 3)
	{
		Surgery septalMyectomy;
		septalMyectomy.updateCharges(patient, septalMyectomy.septalMyectomyPrice);
	}
	else if (surgery == 4)
	{
		Surgery bariatric;
		bariatric.updateCharges(patient, bariatric.bariatricPrice);
	}
	else
	{
		Surgery thoracicAorticDissectionRepair;
		thoracicAorticDissectionRepair.updateCharges(patient, thoracicAorticDissectionRepair.thoracicAorticDissectionRepairPrice);
	}
	return patient.get_charges();
}

double returnPharmacyPatientCharges(int medication, PatientAccount& patient)
{
	if (medication == 1)
	{
		Pharmacy antipyretics;
		antipyretics.updateCharges(patient, antipyretics.antipyreticsPrice);
	}
	else if (medication == 2)
	{
		Pharmacy analgesics;
		analgesics.updateCharges(patient, analgesics.analgesicsPrice);
	}
	else if (medication == 3)
	{
		Pharmacy antimalarial;
		antimalarial.updateCharges(patient, antimalarial.antimalarialPrice);
	}
	else if (medication == 4)
	{
		Pharmacy antibiotics;
		antibiotics.updateCharges(patient, antibiotics.antibioticsPrice);
	}
	else
	{
		Pharmacy antiseptics;
		antiseptics.updateCharges(patient, antiseptics.antisepticsPrice);
	}
	return patient.get_charges();
}

int main()
{

	PatientAccount patient;
	patient.id = 0;

	int surgery;
	int medication;

	do
	{
		showSurgeryOptions();
		showPharmacyOptions();

		cout << "What type of surgery would you like? Please choose a number." << endl;
		cin >> surgery;
		cout << endl;

		
		cout << "What type of medication would you like? Please choose a number." << endl;
		cin >> medication;

		if (surgery == 6 || medication == 6)
		{
			break;
		}

		returnSurgeryPatientCharges(surgery, patient);
		cout << "Updating charges for surgery...\nThe total charge is $";
		cout << patient.get_charges() << endl;

		returnSurgeryPatientCharges(medication, patient);
		cout << "Updating charges for medication...\nThe total charge is $";
		cout << patient.get_charges() << endl << endl << endl;

	} while((surgery < 48 || surgery > 61) && surgery != '\0' && surgery != 6 && (medication < 48 || medication > 61) && medication != '\0' && medication != 6);


	if (surgery == 6 || medication == 6)
	{
		cout << "How many days did the patient stay?" << endl;

		int num_days;
		cin >> num_days;
		patient.set_days_in_hospital(num_days);

		cout << "You entered " << patient.get_days_in_hospital() << " days." << endl;
		cout << "The total cost for those days is $" << patient.get_days_in_hospital() * patient.daily_rate << endl;
		cout << "The updated total charge is $" << patient.updateCharges(patient.daily_rate, patient.get_days_in_hospital(), patient.get_charges()) << endl;
	}

	
	return 0;
}
