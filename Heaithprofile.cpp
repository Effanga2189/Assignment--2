/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [ EFFANGA,KINGSLEY OKON]
 * Matric No:   [ 14/095244022]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */

#ifndef HEALTHPROFILE_H
#define	HEALTHPROFILE_H

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition

classHealthProfile {
    // public interface
public:
HealthProfile(string firstName, string lastName, string gender, int month,
int day, int year, int weight, double height, intcurrentDay,
intcurrentMonth, intcurrentYear); // constructor that initializes patient information
intgetAge(); // function to get patients age in years
doublegetBMI(); // function to calculate and return BMI
intgetMaximumHeartRate(); // function to calculate and return maximum heart rate
doublegetTargetHeartRate(); // function to calculate and return minimum target heart rate
doublegetMinTargetHeartRate(); // function to calculate and return minimum target heart rate
doublegetMaxTargetHeartRate(); // function to calculate and return maximum target heart rate
voidgetInformation(); // function to print object information

    // TODO: Provide get and set function prototypes of each class attribute
voidsetFirstName(string firstName); // function to initialize firstName
voidsetLastName(string lastName); // function to initialize lastName
voidsetGender(string gender); // function to initialize gender
voidsetMonth(int month); // function to initialize month
voidsetDay(int day); // function to initialize day
voidsetYear(int year); // function to initialize year
voidsetWeight(int weight); // function to initialize weight
voidsetHeight(double height); // function to initialize height
voidsetAge(intcurrentDay, intcurrentMonth, intcurrentYear); // function to calculate age
stringgetFirstName(); // function to initialize firstName
stringgetLastName(); // function to initialize lastName
stringgetGender(); // function to initialize gender
intgetMonth(); // function to initialize month
intgetDay(); // function to initialize day
intgetYear(); // function to initialize year
intgetWeight(); // function to initialize weight
doublegetHeight(); // function to initialize height
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided


    // private interface
private:
stringfirstName; // variable to hold firstName
stringlastName; // variable to hold lastName
string gender; // variable to hold gender
int month; // variable to hold month
int day; // variable to hold day
int year; // variable to hold year
double height; // variable to hold height
int weight; // variable to hold weight
int age; // variable to hold age

}; // end class HealthProfile

