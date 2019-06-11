#ifndef QUESTION_H
#define QUESTION_H

#include<string>

class Question 
{
	public:
		Question();
		Question(std::string quest, std::string answer);

		void setq(std::string quest);
		void seta(std::string answer);
		void sets(std::string state);

		std::string rquest();
		std::string ranswer();
		std::string rstate();
		bool iscorrect(std::string answer);

	private:
		std::string m_quest;
		std::string m_answer;
		std::string m_state;
};

#endif

