/*
 * Author: Alec Guinan
 * Email:guinana@student.vvc.edu
 * Purpose: this file creates the quiz class
 * Filename: quiz.h
 */
#ifndef QUIZ_H
#define QUIZ_H

#include<vector>
#include "question.h"


class Quiz
{
	public:
		Quiz();// default constructor

		void getquiz(std::string filename);// gets questions and answers from a file
		void displayq(int i);// displays questions

		void unread();// asks questions for the first time 
		void secondtime();// gives the users a second chance at incorrect questions
		void printscore();// out puts the score to a file

	private: 
		std::vector<Question> m_list;
};

#endif
