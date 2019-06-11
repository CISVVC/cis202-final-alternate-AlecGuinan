#include"quiz.h"
#include<fstream>
#include<string>
#include<iostream>
Quiz::Quiz()
{
}

void Quiz::getquiz(std::string filename)
{
	Question b;
	char delim = ',';
	int count = 1;
	std::string section;
	std::ifstream a;
	a.open(filename.c_str());

	while(getline(a, section, delim))
	{
		if(count == 1)
		{
			b.setq(section);
			count ++;
			delim = '\n';
		}
		else if(count == 2);
		{
			b.seta(section);
			count = 1;
			m_list.push_back(b);
			delim = ',';
		}
	}

}

void Quiz::displayq(int i )
{
	std::cout << m_list[i].rquest() << ":" << std::endl;
}

void Quiz::unread()
{
	std::string answer;
	for(int i = 0; i < m_list.size(); i++)
	{
		displayq(i);
		std::cin >>  answer; 
		if(m_list[i].iscorrect(answer))
		{
			m_list[i].sets("correct");
			std::cout << "Correct" << std::endl;
		}
		else 
		{
			m_list[i].sets("incorrect");
			std::cout << "Incorrect" << std::endl;
		}
	}
			
}

void Quiz::secondtime()
{
	std::string answer;
	for(int i = 0; i < m_list.size(); i++)
	{

		if(m_list[i].rstate() == "incorrect")
		{
			displayq(i);
			getline(std::cin, answer);
			if(m_list[i].iscorrect(answer))
			{
				m_list[i].sets("correct");
				std::cout << "Correct" << std::endl;
			}
			else
				std::cout << "Incorrect";
		}
	}
}

void Quiz::printscore(std::string filename)
{
	int count = 0;
	std::ofstream a;
	std::string name;
	std::cout << "Please Enter your name: ";
	getline(std::cin,name);	
	filename = filename + "results";
	a.open(filename.c_str());

	a << name << std::endl;
	for ( int i = 0; i < m_list.size(); i++)
	{
		a << m_list[i].rquest() << " : " << m_list[i].ranswer() << " : " << m_list[i].rstate() << std::endl;
		if ( m_list[i].rstate() == "correct" )
			count ++;

	}


	a << "Score: " << count << "/" << m_list.size() << std::endl;
}
