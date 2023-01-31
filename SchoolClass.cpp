// Chariety Moler
// file: SchoolClass.cpp
// 30 January 2023
// This file should further define all of the functions. 

#include <iostream>
#include "SchoolClass.h"

SchoolClass::SchoolClass(string name, vector<int> time, int days, int credits, string subject, string building) {
  class_name = " ";
  time_of_class = " ";
  days_of_week = 0;
  number_of_credits = 0;
  subject_of_class = " ";
  location = " ";
}

SchoolClass::SchoolClass(string name, vector<int> time, int days, int credits, std::string subject, std::string building) {
  class_name = _name;
  time_of_class = _time;
  days_of_week = _days;
  number_of_credits = _credits;
  subject_of_class = _subject;
  location = _building;
}

bool partOfMajor(std::string yourMajor)
{
	if(yourMajor == _subject)
	{
		return true;
	}
	else
	{
		return false;
	}
}

SchoolClass::timeUntil(Date currentTime)
{
	int runningTotal;
	//Actually making a date parser seems rough, but the idea is
	//oh how many days do we have until the next class. Multiply the
	//the days left by 24, and then solve the hours
}

std::string SchoolClass::getName() const {
  return _name;
}

std::vector<int> SchoolClass::getTime() const {
  return _time;
}

std::vector<bool> SchoolClass::getDays() const {
  return _days;
}

int SchoolClass::getCredits() const {
  return _credits;
}

std::string SchoolClass::getSubject() const {
  return _subject;
}

std::string SchoolClass::getBuilding() const {
  return _building;
}
