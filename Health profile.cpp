
/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ EFFANGA,KINGSLEY OKON ]
 * Matric No:   [ 14/095244022]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information

HealthProfile::HealthProfile(string firstName, string lastName, string gender, int month,
int day, int year, int weight, double height, intcurrentDay,
intcurrentMonth, intcurrentYear) {
setFirstName(firstName); // call set function to initialize firstName
setLastName(lastName); // call set function to initialize lastName
setGender(gender); // call set function to initialize gender
setMonth(month); // call set function to initialize month
setDay(day); // call set function to initialize day
setYear(year); // call set function to initialize year
setWeight(weight); // call set function to initialize weight
setHeight(height); // call set function to initialize height
setAge(currentDay, currentMonth, currentYear); // call set function to calculate age
}

// function to print object information

voidHealthProfile::getInformation() {
cout<< "\n\nHEALTH PROFILE FOR - " <<getFirstName() << " " <<getLastName() <<endl;
cout<< "First Name: " <<setw(17) <<getFirstName() <<endl;
cout<< "Last Name: " <<setw(19) <<getLastName() <<endl;
cout<< "Gender: " <<setw(19) <<getGender() <<endl;
cout<< "Date of Birth: " <<setw(9) <<getDay() << "/" <<getMonth() << "/" <<getYear() <<endl;
cout<< "Weight (in kilograms): " <<setw(2) <<getWeight() <<endl;
cout<< "Height (in meters): " <<setw(7) <<getHeight() <<endl;
cout<< "Age: " <<setw(20) <<getAge() << " year(s)" <<endl;
cout<< "Body Mass Index (BMI): " <<setw(7) <<getBMI() <<endl;
cout<< "Maximum Heart Rate: " <<setw(6) <<getMaximumHeartRate() <<endl;
cout<< "Target Heart Rate: " <<setw(8) <<getTargetHeartRate() <<endl;
cout<< "\nBMI VALUES CHART" <<endl;
cout<< "Underweight:   less than 18.5" <<endl;
cout<< "Normal:        between 18.5 and 24.9" <<endl;
    ;
cout<< "Overweight:    between 25 and 29.9" <<endl;
cout<< "Obese:         30 or greater" <<endl;
}

// TODO: Provide implementation details for functions in HealthProfileStub.h

voidHealthProfile::setFirstName(string firstName) {
HealthProfile::firstName = firstName;
}

voidHealthProfile::setLastName(string lastName) {
HealthProfile::lastName = lastName;
}

voidHealthProfile::setGender(string gender) {
HealthProfile::gender = gender;
}

voidHealthProfile::setDay(int day) {
HealthProfile::day = day;
}

voidHealthProfile::setMonth(int month) {
HealthProfile::month = month;
}

voidHealthProfile::setYear(int year) {
HealthProfile::year = year;
}

voidHealthProfile::setWeight(int weight) {
HealthProfile::weight = weight;
}

voidHealthProfile::setHeight(double height) {
HealthProfile::height = height;
}

voidHealthProfile::setAge(intcurrentDay, intcurrentMonth, intcurrentYear) {
if (currentYear>HealthProfile::height) {
if (currentMonth>HealthProfile::month) {
if (currentDay>HealthProfile::day) {
HealthProfile::age = currentYear - HealthProfile::year;
            } else {
HealthProfile::age = currentYear - HealthProfile::year - 1;
            }
        } else {
HealthProfile::age = currentYear - HealthProfile::year - 1;
        }
    } else {
HealthProfile::age = 0;
    }
}

stringHealthProfile::getFirstName() {
returnfirstName;
}

stringHealthProfile::getLastName() {
returnlastName;
}

stringHealthProfile::getGender() {
return gender;
}

intHealthProfile::getDay() {
return day;
}

intHealthProfile::getMonth() {
return month;
}

intHealthProfile::getYear() {
return year;
}

intHealthProfile::getWeight() {
return weight;
}

doubleHealthProfile::getHeight() {
return height;
}

intHealthProfile::getAge() {
return age;
}

doubleHealthProfile::getBMI() {
return weight / (pow(height, 2));
}

intHealthProfile::getMaximumHeartRate() {
return 220 - age;
}

doubleHealthProfile::getTargetHeartRate() {
return 0.5 * HealthProfile::getMaximumHeartRate();
}

doubleHealthProfile::getMinTargetHeartRate() {
return 0.5 * HealthProfile::getMaximumHeartRate();
}
doubleHealthProfile::getMaxTargetHeartRate() {
return 0.85 * HealthProfile::getMaximumHeartRate();
}

// Implementation for the constructor and getInformation function has already been provided

