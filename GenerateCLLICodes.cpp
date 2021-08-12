#include <windows.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void sort() {	// Alphabetically sort the CLLI Codes

	vector<std::string> codes;	// Create a vector that can be sorted

	std::ifstream file("Codes.txt");
	std::string line;

	while (std::getline(file, line)) {	// Move through the file, adding each line to the vector
		codes.push_back(line);
	}
	sort(codes.begin(), codes.end());	// Sort the vector

	std::ofstream out("Codes.txt");
	std::ostream_iterator<std::string> iter(out, "\n");	// Create a vector iterator
	std::copy(codes.begin(), codes.end(), iter);	// Write the sorted vector to the text file
	
	return;
}

void add() {	// Adds a CLLI Code that is entered as a whole

	std::string code;
	cout << "CLLI Code To Add: ";
	cin >> code;

	if (code.length() != 11) {
		cout << " " << "\n";
		printf("Not A Valid CLLI Code...\n");
		cout << " " << "\n";
		return;
	}

	std::ofstream file("Codes.txt", ios::app);	// Open the file in append mode
	file << code << endl;	// Add the code to the end of the file
	file.close();	// Close the file
	return;
}

std::string convert(int value) {

	std::string nums[40] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

	return nums[value];
}

void generate() {	// Will add the desired code

	std::string test = "";
	std::string device = "";
	std:string id, city, dist, type;
	boolean isC = false;
	cout << "What City: ";
	cin >> city;

	if (city == "Atlanta" || city == "atlanta") {	// Determines what the first 6 characters are
		test.append("ATLNIN");
	}
	else if (city == "Bowling_Green" || city == "bowling_green") {
		cout << "What Part (Patricksburg, Poland): ";
		cin >> dist;
		if (dist == "Patricksburg" || dist == "patricksburg") {
			test.append("PRBGIN");
		}
		else if (dist == "Poland" || dist == "poland") {
			test.append("POLDIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Brazil" || city == "brazil") {
		cout << "What Part (Lena, Poland, Rocky_Fork): ";
		cin >> dist;
		if (dist == "Lena" || dist == "lena") {
			test.append("LENAIN");
		}
		else if (dist == "Poland" || dist == "poland") {
			test.append("POLDIN");
		}
		else if (dist == "Rocky_Fork" || dist == "rocky_fork") {
			test.append("RKFKIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Clayton" || city == "clayton") {
		test.append("HLWDIN");
	}
	else if (city == "Cloverdale" || city == "cloverdale") {
		test.append("CODLIN");
	}
	else if (city == "Coal City" || city == "coal city") {
		test.append("PRBGIN");
	}
	else if (city == "Coatesville" || city == "coatesville") {
		test.append("CTVLIN");
	}
	else if (city == "Danville" || city == "danville") {
		cout << "What Part (Danville, Mt_Clair, Tilden): ";
		cin >> dist;
		if (dist == "Danville" || dist == "danville") {
			test.append("DAVLIN");
		}
		else if (dist == "Mt_Clair" || dist == "mt_clair") {
			test.append("MTCLIN");
		}
		else if (dist == "Tilden" || dist == "tilden") {
			test.append("TLDNIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Eminence" || city == "eminence") {
		test.append("EMNNIN");
	}
	else if (city == "Freedom" || city == "freedom") {
		test.append("PRBGIN");
	}
	else if (city == "Greencastle" || city == "greencastle") {
		cout << "What Part (Lena, Mt_Meridian): ";
		cin >> dist;
		if (dist == "Lena" || dist == "lena") {
			test.append("LENAIN");
		}
		else if (dist == "Mt_Meridian" || dist == "mt_meridian") {
			test.append("MTMRIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Linton" || city == "linton") {
		test.append("LNTNIN");
	}
	else if (city == "Martinsville" || city == "martinsville") {
		test.append("MNRVIN");
	}
	else if (city == "Mississauga" || city == "mississauga") {
		test.append("TORTCA");
	}
	else if (city == "Monrovia" || city == "monrovia") {
		test.append("MNRVIN");
	}
	else if (city == "Mooresville" || city == "mooresville") {
		test.append("MRVIIN");
	}
	else if (city == "Pittsboro" || city == "pittsboro") {
		test.append("PTBOIN");
	}
	else if (city == "Poland" || city == "poland") {
		test.append("POLDIN");
	}
	else if (city == "Quincy" || city == "quincy") {
		test.append("CODLIN");
	}
	else if (city == "Reelsville" || city == "reelsville") {
		cout << "What Part (Poland, Reelsville): ";
		cin >> dist;
		if (dist == "Poland" || dist == "poland") {
			test.append("POLDIN");
		}
		else if (dist == "Reelsville" || dist == "reelsville") {
			test.append("RLSVIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Spencer" || city == "spencer") {
		test.append("PRBGIN");
	}
	else {
		cout << " " << "\n";
		printf("Not A Valid City...\n");
		cout << " " << "\n";
		return;
	}

	cout << "What Building ID(In Caps): ";
	cin >> id;

	if (id.length() == 2) {	// Determines the Building ID
		test.append(id);
	}
	else {
		cout << " " << "\n";
		printf("Not A Valid Building ID...\n");
		cout << " " << "\n";
		return;
	}

	cout << "What Device Type (OLT, IP, SW, DS, FW, WL, C, NN): ";
	cin >> type;

	if (type == "OLT" || type == "olt") {	// Determines the Device Designation
		test.append("OL");
	}
	else if (type == "IP" || type == "ip") {
		test.append("IP");
	}
	else if (type == "SW" || type == "sw") {
		test.append("SW");
	}
	else if (type == "DS" || type == "ds") {
		test.append("DS");
	}
	else if (type == "FW" || type == "fw") {
		test.append("FW");
	}
	else if (type == "WL" || type == "wl") {
		test.append("WL");
	}
	else if (type == "C" || type == "c") {
		isC = true;
		test.append("C");
	}
	else if (type == "NN" || type == "nn") {
		test.append("NN");
	}
	else {
		cout << " " << "\n";
		printf("Not A Valid Device Type...\n");
		cout << " " << "\n";
		return;
	}

	std::ifstream file("Codes.txt");
	std::string line;
	int value = 0;
	cout << " " << "\n";
	while (std::getline(file, line)) {
		if (line.find(test) != string::npos) {////////////////////////////////////////////////////////////
			value++;
		}
	}
	if (isC) {
		// cout << "Value: ";	// ###Lets user choose Value, good for debug###
		// cin >> value;
		if (value > 1295) {
			printf("Device Overflow...\n");
			cout << " " << "\n";
			return;
		}
		int firstVal = value / 36;
		// cout << firstVal;
		int secondVal = value % 36;
		// cout << secondVal;

		test.append(convert(firstVal));
		test.append(convert(secondVal));
	}
	else {
		if (value > 35) {
			printf("Device Overflow...\n");
			cout << " " << "\n";
			return;
		}
		else {
			test.append(convert(value));
		}
	}
	
	cout << test << "\n";
	cout << " " << "\n";
	return;
}

void lookUp() {	// Look up the desired CLLI code based on certain criteria

	std::string test = "";
	std::string device = "";
	std:string city, dist, type;
	cout << "What City: ";
	cin >> city;

	if (city == "Atlanta" || city == "atlanta") {	// Determines what the first 6 characters are
		test.append("ATLNIN");
	}
	else if (city == "Bowling_Green" || city == "bowling_green") {
		cout << "What Part (Patricksburg, Poland): ";
		cin >> dist;
		if (dist == "Patricksburg" || dist == "patricksburg") {
			test.append("PRBGIN");
		}
		else if (dist == "Poland" || dist == "poland") {
			test.append("POLDIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Brazil" || city == "brazil") {
		cout << "What Part (Lena, Poland, Rocky_Fork): ";
		cin >> dist;
		if (dist == "Lena" || dist == "lena") {
			test.append("LENAIN");
		}
		else if (dist == "Poland" || dist == "poland") {
			test.append("POLDIN");
		}
		else if (dist == "Rocky_Fork" || dist == "rocky_fork") {
			test.append("RKFKIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Clayton" || city == "clayton") {
		test.append("HLWDIN");
	}
	else if (city == "Cloverdale" || city == "cloverdale") {
		test.append("CODLIN");
	}
	else if (city == "Coal_City" || city == "coal_city") {
		test.append("PRBGIN");
	}
	else if (city == "Coatesville" || city == "coatesville") {
		test.append("CTVLIN");
	}
	else if (city == "Danville" || city == "danville") {
		cout << "What Part (Danville, Mt_Clair, Tilden): ";
		cin >> dist;
		if (dist == "Danville" || dist == "danville") {
			test.append("DAVLIN");
		}
		else if (dist == "Mt_Clair" || dist == "mt_clair") {
			test.append("MTCLIN");
		}
		else if (dist == "Tilden" || dist == "tilden") {
			test.append("TLDNIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Eminence" || city == "eminence") {
		test.append("EMNNIN");
	}
	else if (city == "Freedom" || city == "freedom") {
		test.append("PRBGIN");
	}
	else if (city == "Greencastle" || city == "greencastle") {
		cout << "What Part (Lena, Mt_Meridian): ";
		cin >> dist;
		if (dist == "Lena" || dist == "lena") {
			test.append("LENAIN");
		}
		else if (dist == "Mt_Meridian" || dist == "mt_meridian") {
			test.append("MTMRIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Linton" || city == "linton") {
		test.append("LNTNIN");
	}
	else if (city == "Martinsville" || city == "martinsville") {
		test.append("MNRVIN");
	}
	else if (city == "Mississauga" || city == "mississauga") {
		test.append("TORTCA");
	}
	else if (city == "Monrovia" || city == "monrovia") {
		test.append("MNRVIN");
	}
	else if (city == "Mooresville" || city == "mooresville") {
		test.append("MRVIIN");
	}
	else if (city == "Pittsboro" || city == "pittsboro") {
		test.append("PTBOIN");
	}
	else if (city == "Poland" || city == "poland") {
		test.append("POLDIN");
	}
	else if (city == "Quincy" || city == "quincy") {
		test.append("CODLIN");
	}
	else if (city == "Reelsville" || city == "reelsville") {
		cout << "What Part (Poland, Reelsville): ";
		cin >> dist;
		if (dist == "Poland" || dist == "poland") {
			test.append("POLDIN");
		}
		else if (dist == "Reelsville" || dist == "reelsville") {
			test.append("RLSVIN");
		}
		else {
			cout << " " << "\n";
			printf("Not A Valid Part...\n");
			cout << " " << "\n";
			return;
		}
	}
	else if (city == "Spencer" || city == "spencer") {
		test.append("PRBGIN");
	}
	else {
		cout << " " << "\n";
		printf("Not A Valid City...\n");
		cout << " " << "\n";
		return;
	}

	// We will skip the Building Code
	cout << "What Device Type (OLT, IP, SW, DS, FW, WL, C, NN): ";
	cin >> type;

	if (type == "OLT" || type == "olt") {	// Determines the Device Designation
		device.append("OL");
	}
	else if (type == "IP" || type == "ip") {
		device.append("IP");
	}
	else if (type == "SW" || type == "sw") {
		device.append("SW");
	}
	else if (type == "DS" || type == "ds") {
		device.append("DS");
	}
	else if (type == "FW" || type == "fw") {
		device.append("FW");
	}
	else if (type == "WL" || type == "wl") {
		device.append("WL");
	}
	else if (type == "C" || type == "c") {
		device.append("C");
	}
	else if (type == "NN" || type == "nn") {
		device.append("NN");
	}
	else {
		cout << " " << "\n";
		printf("Not A Valid Device Type...\n");
		cout << " " << "\n";
		return;
	}

	std::ifstream file("Codes.txt");
	std::string line;
	cout << " " << "\n";
	while (std::getline(file, line)) {
		if (line.find(test) != string::npos && line.find(device) != string::npos) {
			cout << line << "\n";
		}
	}
	cout << " " << "\n";
	return;
}

int main()
{
	while (true) {
		int lookMake;
		cout << "What Are We Doing?\n1: Look Up A CLLI Code\n2: Generate A CLLI Code\n3: Quick Add CLLI CODE\n4: Sort CLLI Codes\n5: Exit\nYour Choice: ";
		cin >> lookMake;
		
		while (cin.fail()) {
			cout << "Please Enter A Number..." << "\n";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> lookMake;
		}
		if (lookMake == 1) {   // Look up
			lookUp();
		}
		else if (lookMake == 2) {   // Generate
			generate();
		}
		else if (lookMake == 3) {	// Quick Add
			add();
		}
		else if (lookMake == 4) {	// Sort
			sort();
		}
		else if (lookMake == 5) {	// Exit
			exit(0);
		}
		else {
			cout << " " << "\n";
			printf("Invalid Input! Try Again...\n");
			cout << " " << "\n";
		}
	}
}