/*
 * Author: Alec Guinan
 * Email: guinana@student.vvc.edu
 * Purpose: This file allows ssomeone to add new questions and answers and to read back scores, should be compiled with on its own
 * Filename: main2.cpp
 */
#include<iostream>
#include<fstream>
#include<string>

void getquestion(std::string filename); // adds new questions to a file
void getscore(std::string filename);// outputs the scores to the command line

int main()
{
	std::string filename;
	std::string answer;
	std::cout << " Would you like to add questions(q) or read score(s): " ;
	getline(std::cin,answer);

	if(answer == "q")
	{
		std::cout <<" enter the name of the file: ";
		
		std::cin >> filename;
		getquestion(filename);
	}
	else if(answer == "s")
	{
		std::cout << "Please enter the file name: ";
		getline(std::cin,filename);
		std::cout << filename << std::endl;
		getscore(filename);

	}
	return 0;

}

void getquestion(std::string filename)// adds new questions to a file
{
	std::string a;
	std::ofstream b;

	b.open(filename.c_str());

	if(b.is_open())
		std::cout << "This is not the problem"<< std::endl;
	do 
	{

		std::cout << "Please enter question: ";

		std::cin >> a;


		b << a << ",";

		a ="";

		std::cout << "Please enter answer: " ;

		std::cin >> a;

		b << a << ","; 
		a = "";

		std::cout << "Do you want to add more questions? (y/n)";

		std::cin >> a;
	}
	while(a=="y");
}

void getscore(std::string filename)// outputs a score to the command line
{
	std::string line;
	std::ifstream a;
	a.open(filename.c_str());
	while(getline(a,line))
	{
		std::cout << line << std::endl;
	}
}
