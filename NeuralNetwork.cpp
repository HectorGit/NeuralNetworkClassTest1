/*
  ==============================================================================

    NeuralNetwork.cpp
    Created: 29 Sep 2017 2:54:03pm
    Author:  Owner

	//VERSION 1 OF CODE BASED ON ALEX THOMO'S IMPLEMENTATION

  ==============================================================================
*/

#include "NeuralNetwork.h"

//Constructor
NeuralNetwork(/*int[] vector sizes*/) 
{
	numLayers = //length of the sizes vector
	eta = // zero

	sizes = //list of # repr. how many nodes in each layer
	biasesMatrix = // correct size matrix, with random values initializing it.
	weightsMatrix = // correct size matrix, with random values initializing it.
	gradient_W = //correct size matrix, all zeros
	gradient_N = //correct size matrix, all zeros
}

~NeuralNetwork() 
{
	//release all memory or something Lolz
	//release numLayers and eta.
	//release biasesMatrix, weightsMatrix, gradient_W, and gradient_N
}

feedForward(/*vector activation[]*/);
			//for each bias and weight , 
			//calculate the sigmoid of wx+b vectors.
			//return the resulting activation[]
			/*"""Return the output of the network if ``a`` is input."""
			for b, w in zip(self.biases, self.weights):
			a = sigmoid(np.dot(w, a)+b)
			return a*/


stochasticGradientDescent(/*vector[][] trainingData, //int epochs , // int miniBatchSize,
							//float eta, //CAN pass the test data here, most likely NOT*/)
{
	//if(testData){ n = len(testData;}

	//for every epoch
		// shuffle the training Data
			// alternative to random.shuffle
			// is to have a vector with numbers that
			// will contain randomized indexes. this vector
			//can be used to access the training Data randomly
			//even if it it un shuffled.
		//select mini-batches
			/*mini_batches = [
			training_data[k:k+mini_batch_size]
			for k in xrange(0, n, mini_batch_size)]*/
		// for each batch 
			//updateNetwork(mini_batch, eta) //backpropagation
}

//***Consideration- need to have access to NN :: biasesMatrix and weightMatrix
updateMiniBatch(/*mini_batch, eta*//*due to consideration - biasesMatrix, weightsMatrix*/) 
{
	//create the gradient_W and gradient B matrices (fill w Zeros)
	//for X, Y in mini batch
		//unclear if could get both from a single
		//backPropagation operation !!!
		//delta_gradient_W = backPropagation(x,y)
		//delta_gradient_B = backPropagatio(x,y)

		/*  delta_nabla_b, delta_nabla_w = self.backprop(x, y)
            nabla_b = [nb+dnb for nb, dnb in zip(nabla_b, delta_nabla_b)]
            nabla_w = [nw+dnw for nw, dnw in zip(nabla_w, delta_nabla_w)]*/
		
		//elementwise
		//gradient_W = gradient_W + delta_gradient_W;
		//gradient_B = gradient_B + delta_gradient_B;
		//This changes the gradient matrices from being zero into having values 

	/*self.weights = [w - (eta / len(mini_batch))*nw
	for w, nw in zip(self.weights, nabla_w)]
	self.biases = [b - (eta / len(mini_batch))*nb
	for b, nb in zip(self.biases, nabla_b)]*/
		//This applies the gradients the corresponding matrices.

		//elementwise
		// weightsMatrices = weightsMatrices - gradientW;
		// biasesMatrices = biasesMatrices - gradientB;
}

//consideration - pass in the gradient matrices?
backPropagation(/*x, y*/ /*consideration - gradient_W, gradient_B*/)
{
	//create the gradient Matrices
	//gradient_W, gradient_B = zeroes matrices;

	/*-------------FeedForward------------------*/
	//activation defined in private members? NO !
	activation = x; //both vectors - init activation here.

	activations = [x]; //start to put things into this vector

	zs = []; // store all the z vectors layer by layer
			 // one z = wx+b in vector form (all z's for one level)

	// for each bias and weight
		//calculate z = w dot activation + b (all are vectors)
		//zs.append z;
		//calculate the activation_ by sigmoid(z)
		//activations append activation

		//->>>end up w - matrix of z's and matrix of activations.
		
	/*-------------BackWardsPass------------------*/

	//START BY get the ERROR (delta) at the last level ([-1]) 
	//indexing DOES NOT WORKLIKE THAT ON C++?!!!

	// and compute the other errors (partial drvs of. W's and B's)

	// error/delta = cost_derivative(activations[-1]) * sigmoid_prime(zs[-1]); //y-x

	//HERE WE SEE WE MIGHT SEPARATE BACKPROP INTO A) for B's ---and--- B)  for W's
	// gradient_B[-1] = delta;
	// gradient_W[-1] = delta dot activations[-2].transpose //previous level activation; 

	//-------Rest of the levels--------//
	   //REVIEW THIS MATH !!
	// for each level after that -
	// get its z -> z = z[-L]
	// and get its sp = sigmoid_prime(z)
	// get delta = ( weightsMatrix[-L + 1].transpose dot delta ) * SP;
	// gradient_B[-L] = delta;
	// gradient_W[-L] = (delta dot activations[-L-1].transpose);
	
	//return gradient_B and gradient_W; 
	//-> TIP == separate into TWO METHODS (one for B, 
	// one for W's)
				
}

evaluate(/*testData*/) 
{
	//for(x,y) in testData :
	//testResults = argMax(feedForward(x), y );
	//where do we get x and Y??

	//return sum( condition x==y for (x,y) in test results).
}

cost_derivative(/*outputActivations, y*/)
{
	//return outputActivations-y;
}

sigmoid(/*vector z // or int z*/)
{
	//return 1.0f/1.0f+np.exp(-z);
}

sigmoid_prime(/*vector z or int z*/)
{
	//return sigmoid(Z)*(1-sigmoid(z));

}
