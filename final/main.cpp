#include<iostream>
#include<string>

#include"quiz.h"

std::string getfilename();

int main()
{
	Quiz a;
	std::string filename;

	filename = getfilename();

	a.getquiz(filename);

	a.unread();
	a.secondtime();
	a.printscore(filename);
return 0;
}

std::string getfilename()
{
	std::string filename;
	std::cout << "Please enter the name of the file: ";

	std::cin >> filename;

	return filename;
}


