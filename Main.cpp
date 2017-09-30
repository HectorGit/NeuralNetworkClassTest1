/*
  ==============================================================================

    Main.cpp
    Created: 29 Sep 2017 3:10:51pm
    Author:  Owner

  ==============================================================================
*/

//#include "Main.h"
#include "NeuralNetwork.h"

class Main {
	public:	
		//run//initialize//start or something?!!
		doThis() {
			myNetwork.SGD(TrainingData, 30, 10, 3.0, TestData);

			/*
			this is what the function takes.
			SGD(self, training_data, epochs, mini_batch_size, eta,
					#test_data = None) */

			//maybe print the results or something.
			//this would need to 'run forever'
			//and just keep returning classification
			//each time it receives a new instance.
			//should implement a way in which just one new instance
			//can be tested with the system (E.G. NON -VECTORIAL)
		}

	private:
		//can I initialize something?
		/*vector that holds vectors (2d vector) */ TrainingData; //can I initialize here?
		/*2 d vector */ ValidationData;
		/* 2 d vector */ TestingData; //wouldn't realistically have this from the start.
		/*NeuralNetwork*/ NeuralNetwork myNetwork([2, 3, 1]); //instantiate with the size

};


