/*
 * Author: Alec Guinan
 * Email: guinana@student.vvc.edu
 * Purpose: this defines the functions of the quiz class
 * Filename: quiz.cpp
 */
#include"quiz.h"
#include<fstream>
#include<string>
#include<iostream>
Quiz::Quiz()// default constructor
{
}

void Quiz::getquiz(std::string filename)//gets questions and answers from a file
{
	Question b;
	char delim = ',';
	int count = 1;
	std::string section;
	std::ifstream a;
	a.open(filename.c_str());

	while(getline(a, section, ','))
	{
		if(count == 1)
		{
			b.setq(section);
			count ++;
			section = "";
		}
		else 
		{
			b.seta(section);
			count = 1;
			m_list.push_back(b);

			section = "";
		}
	}

}

void Quiz::displayq(int i )// displays a question
{
	std::cout << m_list[i].rquest() << ":" << std::endl;
}

void Quiz::unread()// asks questions for the first time
{
	std::string answer;
	for(int i = 0; i < m_list.size(); i++)
	{
		displayq(i);
		std::cin >>  answer; 
		if(m_list[i].iscorrect(answer))
		{
			m_list[i].sets(1);
			std::cout << "Correct" << std::endl;
		}
		else 
		{
			m_list[i].sets(0);
			std::cout << "Incorrect" << std::endl;
		}
	}
}

void Quiz::secondtime()// asks the incorrect questions again
{
	std::string answer;
	for(int i = 0; i < m_list.size(); i++)
	{

		if(m_list[i].rstate() == 0)
		{
			displayq(i);
			getline(std::cin, answer);
			if(m_list[i].iscorrect(answer))
			{
				m_list[i].sets(1);
				std::cout << "Correct" << std::endl;
			}
			else
				std::cout << "Incorrect";
		}
	}
}

void Quiz::printscore()// out put the name and score to a file
{
	std::string filename;
	std::cin.clear();
	std::cin.ignore(999999,'\n');
	int count = 0;
	std::ofstream a;
	std::string name;
	std::cout << "Please Enter your name: ";

	getline(std::cin,name);	
	filename = name + ".txt";

	a.open(filename.c_str());

	a << name << std::endl;
	for ( int i = 0; i < m_list.size(); i++)
	{
		a << m_list[i].rquest() << " : " << m_list[i].ranswer() << " : " << m_list[i].rstate() << std::endl;
		if ( m_list[i].rstate() == 1 )
			count ++;

	}


	a << "Score: " << count << "/" << m_list.size() << std::endl;
}


