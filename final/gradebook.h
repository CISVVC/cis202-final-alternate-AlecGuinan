#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include"question.h"
#include<vector>
#include<string>

class Gradebook
{
	public:

		Gradebook();

		void addquestions();

		void readscore(std::string filename);


		
};

#endif
