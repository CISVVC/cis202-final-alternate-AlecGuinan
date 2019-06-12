/*
 * Author: Alec Guinan
 * Email: guinana@student.vvc.edu
 * Purpose: this file creates the question class
 * Filename: question.h
 */
#ifndef QUESTION_H
#define QUESTION_H

#include<string>

class Question 
{
	public:
		Question();//default constructor

		void setq(std::string quest);// sets the question
		void seta(std::string answer);//sets the answer
		void sets(int state);// set the state

		std::string rquest();// returns the question
		std::string ranswer();// returns the answer
		int rstate();// returns the state
		bool iscorrect(std::string answer);// tells if the answer is correct or not

	private:
		std::string m_quest;
		std::string m_answer;
		int m_state;
};

#endif

