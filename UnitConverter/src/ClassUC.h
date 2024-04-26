#pragma once
#include <iostream>

#include "magicnumbers.h"

class UnitConverter {
private:
	// instantiate structs
	UCvar::temperature temp;
	UCvar::length len;
	UCvar::frequency frq;
	UCvar::speed sp;
	UCvar::time time;
	UCvar::digitalStorage store;
	bool choice = false;
	double value, result;
	char unitInput;
	void handleTemperature() { //temperature function
		std::cout << "\nTEMPERATURE: "
			<< "\n1. Fahrenheit\n"
			<< "2. Celsius\n"
			<< "3. Kelvin\n";
		while (!choice) {
			std::cout << "Choose Unit (1-3): ";
			std::cin >> unitInput;
			switch (unitInput) {
			case '1': // Fahrenheit
				std::cout << "\nFAHRENHEIT : ";
				std::cin >> value;

				result = (value - temp.temp32) * (temp.div59); // Fahrenheit to Celsius
				std::cout << "\nCELSIUS : " << result;

				result += temp.kelv; // Celsius to Kelvin
				std::cout << "\n\nKELVIN : " << result << '\n';
				choice = true;
				break;
			case '2': // Celsius
				std::cout << "\nCELCIUS : ";
				std::cin >> value;

				result = value + temp.kelv; // Celsius to Kelvin
				std::cout << "\nKELVIN : " << result;

				result = (value * temp.div95) + temp.temp32; // Celsius to Fahrenheit
				std::cout << "\n\nFAHRENHEIT : " << result << '\n';
				choice = true;
				break;
			case '3': // Kelvin
				std::cout << "\nKELVIN : ";
				std::cin >> value;

				result = value - temp.kelv; // Kelvin to Celsius
				std::cout << "\nCELSIUS : " << result;

				result = (value - temp.kelv) * (temp.div95) + temp.temp32; // Kelvin to Fahrenheit
				std::cout << "\n\nFAHRENHEIT : " << result << '\n';
				choice = true;
				break;
			default:
				std::cout << "\n\n\tInvalid unit!\n\n\n";
				continue;
			}
		}
	}
	void handleLength() { //length function
		std::cout << "\nLENGTH: "
			<< "\n1. Kilometre\n"
			<< "2. Metre\n"
			<< "3. Centimetre\n"
			<< "4. Millimetre\n"
			<< "5. Inch\n"
			<< "6. Miles\n";
		while (!choice) {
			std::cout << "Choose Unit (1-6): ";
			std::cin >> unitInput;
			switch (unitInput) {
			case '1': // KILOMETRE
				std::cout << "\nKILOMETRE : ";
				std::cin >> value;

				result = value * len.oneK; // KM to METRE
				std::cout << "\nMETRE : " << result;

				result = value * len.oneHk; // KM to CM
				std::cout << "\n\nCENTIMETRE : " << result;

				result = value * len.oneE6; // KM to MMTRE
				std::cout << "\n\nMILLIMETRE : " << result;

				result = value * len.InK; // KM to Inch
				std::cout << "\n\nINCH : " << result;

				result = value / len.MnK; // KM to Miles
				std::cout << "\n\nMILES : " << result << '\n';
				choice = true;
				break;
			case '2': // METRE
				std::cout << "\nMETRE : ";
				std::cin >> value;

				result = value / len.oneK; // METRE to KM
				std::cout << "\nKILOMETRE : " << result;

				result = value * len.oneH; // METER to CM
				std::cout << "\n\nCENTIMETRE : " << result;

				result = value * len.oneK; // METRE to MMTRE
				std::cout << "\n\nMILLIMETRE : " << result;

				result = value / len.InMr; // METRE to Inch
				std::cout << "\n\nINCH : " << result;

				result = value / len.MnMr; // METRE to Miles
				std::cout << "\n\nMILES : " << result << '\n';
				choice = true;
				break;
			case '3': // CENTIMETRE
				std::cout << "\nCENTIMETRE : ";
				std::cin >> value;

				result = value / len.oneHk; // CM to KM
				std::cout << "\nKILOMETRE : " << result;

				result = value / len.oneH; // CM to METRE
				std::cout << "\n\nMETRE : " << result;

				result = value * len.ten; // CM to MMTRE
				std::cout << "\n\nMILLIMETRE : " << result;

				result = value / len.CmIn; // CM to Inch
				std::cout << "\n\nINCH : " << result;

				result = value / len.CmMl; // CM to Miles
				std::cout << "\n\nMILES : " << result << '\n';
				choice = true;
				break;
			case '4': // MILLIMETRE
				std::cout << "\nMILLIMETRE : ";
				std::cin >> value;

				result = value / len.oneE6; // MMTRE to KM
				std::cout << "\nKILOMETRE : " << result;

				result = value / len.oneK; // MMTRE to METRE
				std::cout << "\n\nMETRE : " << result;

				result = value / len.ten; // MMTRE to CM
				std::cout << "\n\nCENTIMETRE : " << result;

				result = value / len.InMlmtre; // MMTRE to Inch
				std::cout << "\n\nINCH : " << result;

				result = value / len.MltrMl; // MMTRE to Miles
				std::cout << "\n\nMILES : " << result << '\n';
				choice = true;
				break;
			case '5': // INCH
				std::cout << "\nINCH : ";
				std::cin >> value;

				result = value / len.InK; // INCH to KM
				std::cout << "\nKILOMETRE : " << result;

				result = value * len.InMr; // INCH to METRE
				std::cout << "\n\nMETRE : " << result;

				result = value * len.CmIn; // INCH to CM
				std::cout << "\n\nCENTIMETRE : " << result;

				result = value * len.InMlmtre; // INCH to MMTRE
				std::cout << "\n\nMILLIMETRE : " << result;

				result = value / len.InMl; // INCH to Miles
				std::cout << "\n\nMILES : " << result << '\n';
				choice = true;
				break;
			case '6': // MILES
				std::cout << "\nMILES : ";
				std::cin >> value;

				result = value * len.MnK; // MILES to KM
				std::cout << "\nKILOMETRE : " << result;

				result = value * len.MnMr; // MILES to METRE
				std::cout << "\n\nMETRE : " << result;

				result = value * len.CmMl; // MILES to CM
				std::cout << "\n\nCENTIMETRE : " << result;

				result = value * len.MltrMl; // MILES to MMTRE
				std::cout << "\n\nMILLIMETRE : " << result;

				result = value * len.InMl; // MILES to INCH
				std::cout << "\n\nINCH : " << result << '\n';
				choice = true;
				break;
			default:
				std::cout << "\n\n\tInvalid unit!\n\n\n";
				continue;
			}
		}
	}
	void handleFrequency() { //frequency function
		std::cout << "\nFREQUENCY: "
			<< "\n1. Hertz\n"
			<< "2. Kilohertz\n"
			<< "3. Megahertz\n"
			<< "4. Gigahertz\n";
		while (!choice) {
			std::cout << "Choose Unit (1-4): ";
			std::cin >> unitInput;
			switch (unitInput) {
			case '1': // HERTZ
				std::cout << "\nHERTZ : ";
				std::cin >> value;

				result = value / frq.freq1; // hz to khz
				std::cout << "\nKILOHERTZ : " << result;

				result = value / frq.freq2; // hz to mhz
				std::cout << "\n\nMEGAHERTZ : " << result;

				result = value / frq.freq3; // hz to ghz
				std::cout << "\n\nGIGAHERTZ : " << result << '\n';
				choice = true;
				break;
			case '2': // khz
				std::cout << "\nKILOHERTZ : ";
				std::cin >> value;

				result = value * frq.freq1; // khz to hz
				std::cout << "\nHERTZ : " << result;

				result = value / frq.freq1; // khz to mhz
				std::cout << "\n\nMEGAHERTZ : " << result;

				result = value / frq.freq2; // khz to ghz
				std::cout << "\n\nGIGAHERTZ : " << result << '\n';
				choice = true;
				break;
			case '3': // mhz
				std::cout << "\nMEGAHERTZ : ";
				std::cin >> value;

				result = value * frq.freq2; // mhz to hz
				std::cout << "\nHERTZ : " << result;

				result = value * frq.freq1; // mhz to khz
				std::cout << "\n\nKILOHERTZ : " << result;

				result = value / frq.freq1; // mhz to ghz
				std::cout << "\n\nGIGAHERTZ : " << result << '\n';
				choice = true;
				break;
			case '4': // ghz
				std::cout << "\nGIGAHERTZ : ";
				std::cin >> value;

				result = value * frq.freq3; // ghz to hz
				std::cout << "\nHERTZ : " << result;

				result = value * frq.freq2; // ghz to khz
				std::cout << "\n\nKILOHERTZ : " << result;

				result = value * frq.freq1; // ghz to mhz
				std::cout << "\n\nMEGAHERTZ : " << result << '\n';
				choice = true;
				break;
			default:
				std::cout << "\n\n\tInvalid unit!\n\n\n";
				continue;
			}
		}
	}
	void handleSpeed() { //speed function
		std::cout << "\nSPEED: "
			<< "\n1. Miles per hour \n"
			<< "2. Metre per second\n"
			<< "3. Kilometre per hour\n";
		while (!choice) {
			std::cout << "Choose Unit (1-3): ";
			std::cin >> unitInput;
			switch (unitInput) {
			case '1': // mph
				std::cout << "\nMILES PER HOUR : ";
				std::cin >> value;

				result = value * sp.spd1; // mph to mps
				std::cout << "\nMETRE PER SECOND : " << result;

				result = value * sp.spd2; // mph to kph
				std::cout << "\n\nKILOMETRE PER HOUR : " << result << '\n';
				choice = true;
				break;
			case '2': // mps
				std::cout << "\nMETRE PER SECOND : ";
				std::cin >> value;

				result = value * sp.spd3; // mps to mph
				std::cout << "\nMILES PER HOUR : " << result;

				result = value * sp.spd4; // mps to kph
				std::cout << "\n\nKILOMETRE PER HOUR : " << result << '\n';
				choice = true;
				break;
			case '3': // kph
				std::cout << "\nKILOMETRE PER HOUR : ";
				std::cin >> value;

				result = value / sp.spd2; // kph to mph
				std::cout << "\nMILES PER HOUR : " << result;

				result = value / sp.spd4; // kph to mps
				std::cout << "\n\nMETRE PER SECOND : " << result << '\n';
				choice = true;
				break;
			default:
				std::cout << "\n\n\tInvalid unit!\n\n\n";
				continue;
			}
		}
	}
	void handleTime() { // time function
		std::cout << "\nTIME: "
			<< "\n1. Second\n"
			<< "2. Minute\n"
			<< "3. Hour\n"
			<< "4. Day\n"
			<< "5. Week\n";
		while (!choice) {
			std::cout << "Choose Unit (1-5): ";
			std::cin >> unitInput;
			switch (unitInput) {
			case '1': // second
				std::cout << "\nSECOND : ";
				std::cin >> value;

				result = value / time.second1; // second to minute
				std::cout << "\nMINUTE : " << result;

				result = value / time.second2; // second to hour
				std::cout << "\n\nHOUR : " << result;

				result = value / time.second3; // second to day
				std::cout << "\n\nDAY : " << result;

				result = value / time.second4; // second to week
				std::cout << "\n\nWEEK : " << result << '\n';
				choice = true;
				break;
			case '2': // Minute
				std::cout << "\nMINUTE : ";
				std::cin >> value;

				result = value * time.second1; // minute to second
				std::cout << "\nSECOND : " << result;

				result = value / time.second1; // minute to hour
				std::cout << "\n\nHOUR : " << result;

				result = value / time.mint1; // minute to day
				std::cout << "\n\nDAY : " << result;

				result = value / time.mint2; // minute to week
				std::cout << "\n\nWEEK : " << result << '\n';
				choice = true;
				break;
			case '3': // Hour
				std::cout << "\nHOUR : ";
				std::cin >> value;

				result = value * time.second2; // HOUR to second
				std::cout << "\nSECOND : " << result;

				result = value * time.second1; // HOUR to minute
				std::cout << "\n\nMINUTE : " << result;

				result = value / time.HtD; // hour to day
				std::cout << "\n\nDAY : " << result;

				result = value / time.HtW; // hour to week
				std::cout << "\n\nWEEK : " << result << '\n';
				choice = true;
				break;
			case '4': // DAY
				std::cout << "\nDAY : ";
				std::cin >> value;

				result = value * time.second3; // day to second
				std::cout << "\nSECOND : " << result;

				result = value * time.mint1; // day to minute
				std::cout << "\n\nMINUTE : " << result;

				result = value * time.HtD; // day to hour
				std::cout << "\n\nHOUR : " << result;

				result = value / time.DtW; // day to week
				std::cout << "\n\nWEEK : " << result << '\n';
				choice = true;
				break;
			case '5': // week
				std::cout << "\nWEEK : ";
				std::cin >> value;

				result = value * time.second4; // week to second
				std::cout << "\nSECOND : " << result;

				result = value * time.mint2; // week to minute
				std::cout << "\n\nMINUTE : " << result;

				result = value * time.HtW; // week to hour
				std::cout << "\n\nHOUR : " << result;

				result = value * time.DtW; // week to day
				std::cout << "\n\nDAY : " << result << '\n';
				choice = true;
				break;
			default:
				std::cout << "\n\n\tInvalid unit!\n\n\n";
				continue;
			}
		}
	}
	void handleDigitalStorage() { // digital storage function
		std::cout << "\nDIGITAL STORAGE: "
			<< "\n1. Bit\n"
			<< "2. Byte\n"
			<< "3. Kilobyte\n"
			<< "4. Megabyte\n"
			<< "5. Gigabyte\n"
			<< "6. Terabyte\n";
		while (!choice) {
			std::cout << "Choose Unit (1-6): ";
			std::cin >> unitInput;
			switch (unitInput) {
			case '1': // bit
				std::cout << "\nBIT : ";
				std::cin >> value;

				result = value / store.eight1; // bit to byte
				std::cout << "\nBYTE : " << result ;

				result = value / store.eight2; // bit to kb
				std::cout << "\n\nKILOBYTE : " << result;

				result = value / store.eight3; // bit to mb
				std::cout << "\n\nMEGABYTE : " << result;

				result = value / store.eight4; // bit to gb
				std::cout << "\n\nGIGABYTE : " << result;

				result = value / store.eight5; // bit to tb
				std::cout << "\n\nTERABYTE : " << result << '\n';
				choice = true;
				break;
			case '2': // BYTE
				std::cout << "\nBYTE : ";
				std::cin >> value;

				result = value * store.eight1; // byte to bit
				std::cout << "\nBIT : " << result;

				result = value / store.one1; // byte to kb
				std::cout << "\n\nKILOBYTE : " << result;

				result = value / store.one2; // byte to mb
				std::cout << "\n\nMEGABYTE : " << result;

				result = value / store.one3; // byte to gb
				std::cout << "\n\nGIGABYTE : " << result;

				result = value / store.one4; // byte to tb
				std::cout << "\n\nTERABYTE : " << result << '\n';
				choice = true;
				break;
			case '3': // kb
				std::cout << "\nKILOBYTE : ";
				std::cin >> value;

				result = value * store.eight2; // kb to bit
				std::cout << "\nBIT : " << result;

				result = value * store.one1; // kb to byte
				std::cout << "\n\nBYTE : " << result;

				result = value / store.one1; // kb to mb
				std::cout << "\n\nMEGABYTE : " << result;

				result = value / store.one2; // kb to gb
				std::cout << "\n\nGIGABYTE : " << result;

				result = value / store.one3; // kb to tb
				std::cout << "\n\nTERABYTE : " << result << '\n';
				choice = true;
				break;
			case '4': // mb
				std::cout << "\nMEGABYTE : ";
				std::cin >> value;

				result = value * store.eight3; // mb to bit
				std::cout << "\nBIT : " << result;

				result = value * store.one2; // mb to byte
				std::cout << "\n\nBYTE : " << result;

				result = value * store.one1; // mb to kb
				std::cout << "\n\nKILOBYTE : " << result;

				result = value / store.one1; // mb to gb
				std::cout << "\n\nGIGABYTE : " << result;

				result = value / store.one2; // mb to tb
				std::cout << "\n\nTERABYTE : " << result << '\n';
				choice = true;
				break;
			case '5': // gb
				std::cout << "\nGIGABYTE : ";
				std::cin >> value;

				result = value * store.eight4; // gb to bit
				std::cout << "\nBIT : " << result;

				result = value * store.one3; // gb to byte
				std::cout << "\n\nBYTE : " << result;

				result = value * store.one2; // gb to kb
				std::cout << "\n\nKILOBYTE : " << result;

				result = value * store.one1; // gb to mb
				std::cout << "\n\nMEGABYTE : " << result;

				result = value / store.one1; // gb to tb
				std::cout << "\n\nTERABYTE : " << result << '\n';
				choice = true;
				break;
			case '6': // tb
				std::cout << "\nTERABYTE : ";
				std::cin >> value;

				result = value * store.eight5; // tb to bit
				std::cout << "\nBIT : " << result;

				result = value * store.one4; // tb to byte
				std::cout << "\n\nBYTE : " << result;

				result = value * store.one3; // tb to kb
				std::cout << "\n\nKILOBYTE : " << result;

				result = value * store.one2; // tb to mb
				std::cout << "\n\nMEGABYTE : " << result;

				result = value * store.one1; // tb to gb
				std::cout << "\n\nGIGABYTE : " << result << '\n';
				choice = true;
				break;
			default:
				std::cout << "\n\n\tInvalid unit!\n\n\n";
				continue;
			}
		}
	}
public:
	void run() { // display function
		char choice1;
		bool running = true;
		do {
			std::cout << "\"UNIT CONVERTER\"\n"
				<< "****************\n"
				<< "\nSelect Unit:"
				<< "\n1. Temperature\n"
				<< "2. Length\n"
				<< "3. Frequency\n"
				<< "4. Speed\n"
				<< "5. Time\n"
				<< "6. Digital Storage\n";
			char unit;
			bool valid = false;
			while (!valid) {
				std::cout << "Enter Unit (1-6): ";
				std::cin >> unit;
					switch (unit) {
					case '1':
						handleTemperature();
						valid = true;
						break;
					case '2':
						handleLength();
						valid = true;
						break;
					case '3':
						handleFrequency();
						valid = true;
						break;
					case '4':
						handleSpeed();
						valid = true;
						break;
					case '5':
						handleTime();
						valid = true;
						break;
					case '6':
						handleDigitalStorage();
						valid = true;
						break;
					default:
						std::cout << "\n\n\tInvalid unit number!\n\n\n";
						break;
					}
			}
			std::cout << "\nDo you want to convert another unit? (Y/N): ";
			std::cin >> choice1;
			if (choice1 == 'Y' || choice1 == 'y') {
				system("cls");
			}
			else {
				running = false;
			}
		} while (running);
	}
};
