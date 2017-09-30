/*
  ==============================================================================

    NeuralNetwork.h
    Created: 29 Sep 2017 2:54:03pm
    Author:  Owner

  ==============================================================================
*/

#pragma once

//Import a C++ Class that supports ***Random.
//#include "Random.h"
//Import a C++ with similar functions than numpy.
//#Include "Numpy.h"

class NeuralNetwork {

public:
	NeuralNetwork();
	~NeuralNetwork();

private:

	int numLayers;
	int[] sizes; // contains number of neurons in the respective layers of the neuron
	             // e.g. [2,3,1]
				 // the first layer(no bias/weight) is the input layer
	float eta; // this seems important

	/*biasesMatrix[][];*/ //initialize with random values [np.random.randn(y, 1) for y in sizes[1:]]
	/*weightsMatrix[][];*/ //init with random numbers too.[np.random.randn(y, x)
	//for x, y in zip(sizes[:-1], sizes[1:])
	
	//could have a single gradient matrix for w and b,
	//but prefer not to - can get messy.
	/* float_vector_type gradient_W; (Gradient Matrix for Weights)*/
	/*float_vector_type gradient_N; (Gradient Matrix for Biases)*/


	//=================================================================================
	
	//***question- what does zip do?

	/*vector_int*/ feedForward(/*vector activation[]*/);

	/*void*/ stochasticGradientDescent(/*vector[][] trainingData, //int epochs , // int miniBatchSize, float eta, testData */)

	/*void */ updateMiniBatch(/*number_vector mini_batch, float eta*/);

	/* 2 2d int vectors (might have to split this into two methods */
	backPropagation(/*vector x (INPUT), vector y (OUTPUT - KNOWN - e.g. LABELS) */);

	/*vector_int or just a number */evaluate(/*testData*/);

	/*vector_int or just a number*/cost_derivative(/*outputActivations, y*/);

	/*float_vector_type*/ sigmoid(/* vector z // or int z*/):

	/*float_vector_type*/ sigmoid_prime(/*vector z or int z*/)

};			