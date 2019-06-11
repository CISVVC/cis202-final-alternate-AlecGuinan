#include "question.h"

Question::Question()
{
	m_state = "unread";
}

Question::Question(std::string quest, std::string answer)
{
	m_state = "unread";
	m_quest = quest;
	m_answer = answer;
}

void Question::setq(std::string quest)
{
	m_quest = quest;
}

void Question::seta(std::string answer)
{
	m_answer = answer;
}

void Question::sets(std::string state)
{
	m_state = state;
}

std::string Question::rquest()
{
	return m_quest;
}

std::string Question::ranswer()
{
	return m_answer;
}

std::string Question::rstate()
{
	return m_state;
}

bool Question::iscorrect(std::string answer)
{
	if(answer == m_answer)
		return true;
	else
		return false;
}

