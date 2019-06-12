/*
 * Author: Alec Guinan
 * Email: guinana@student.vvc.edu
 * Purpose: this defines the functions of the question class
 * filename:question.cpp
 */
#include "question.h"

Question::Question()// default constructon
{
	m_state = 3;
}

void Question::setq(std::string quest)// sets the question
{
	m_quest = quest;
}

void Question::seta(std::string answer)//sets the answer
{
	m_answer = answer;
}

void Question::sets(int state)// sets the state to correct or incorrect
{
	m_state = state;
}

std::string Question::rquest()// returns the question
{
	return m_quest;
}

std::string Question::ranswer()// returns the answer
{
	return m_answer;
}

int Question::rstate()// returns the state
{
	return m_state;
}

bool Question::iscorrect(std::string answer)// tells if the answer is true or not
{
	if(answer == m_answer)
		return true;
	else
		return false;
}

