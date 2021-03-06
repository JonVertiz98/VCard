// Jonathan Vertiz
// ITSE 1307
// VCard File
// VCard.cpp : VCard application with 6 fields added into the contact.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	//Initialize all the values we'll need for the VCard and the 5 extra categories
	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "John";
	string strLast = "Smith";
	int intPhone = 2107971413;
	int intWorkPhone = 18007971413;
	string strTitle = "V.P. Dunder Mifflin";
	string strOrg = "Dunder Mifflin";
	string strEmail = "johnsmith37@yahoo.com";
	string strNick = "Johnny";

	//Block of code that opens the files and adds in the respected fields that we'll be adding in
	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	//Adds the name, cell and work phone numbers, Title, Organization, and email of our contact
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << " " << strLast << endl;
	fileAddress << "TEL;TYPE=cell:" << intPhone << endl;
	fileAddress << "TEL;TYPE=work:" << intWorkPhone << endl;
	fileAddress << "TITLE:" << strTitle << endl;
	fileAddress << "ORG:" << strOrg << endl;
	fileAddress << "EMAIL:" << strEmail << endl;
	fileAddress << "NICKNAME:" << strNick << endl;
	//closes the VCard out, always be sure to close the file too
	fileAddress << "END:VCARD" << endl;
	fileAddress.close();
	cout << "Wrote " << strFileName << endl;
    return 0;
}

