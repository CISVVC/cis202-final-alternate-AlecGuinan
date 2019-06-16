/*
 * Author: Alec Guinan
 * Email: guinana@student.vvc.edu
 * Filename: main.cpp
 * purpose: this program allows a student to take a test, this should not be compilted with main2.cpp
 */
#include<iostream>
#include<string>

#include"quiz.h"

std::string getfilename();// gets the name of the file

int main()
{
	Quiz a;
	std::string filename;

	filename = getfilename();

	a.getquiz(filename);// gets a list of questions and answers from a file

	a.unread();// asks the unread questions
	a.secondtime();// allows a second chance to answer the questions
	a.printscore();// prints the student names and scores to a file
return 0;
}

std::string getfilename()
{
	std::string filename;
	std::cout << "Please enter the name of the file: ";

	getline(std::cin, filename);
	return filename;
}


