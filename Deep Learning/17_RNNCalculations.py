# ht = tanh(Wx*Xt + Wh * ht - 1 + b)

# Xt              Current input 
# Wx              Weight of Current input
# Wh              Weight of previous hidden state
# b               Bias
# ht-1            Previous hidden state
# tanh            Activation Function
# ht              New Hidden State

import numpy as np

def sigmoid(x):
    return 1 / ( 1 + np.exp(-x))

def RNNPredictions():
    print("Calculations of RNN")

    # food was not good
    inputs = [1,2,5,3]

    hidden_state = 0

    # RNN parameters
    Wx = 0.5
    Wh = 0.8
    bias = 0.1

    # RNN Calculations 
    for time_step, x in enumerate(inputs):
        previous_hidden_state = hidden_state

        weighted_input = Wx * x
        weighted_memory = Wh * previous_hidden_state

        total = weighted_input + weighted_memory + bias

        hidden_state = np.tanh(total)

        print("TimeStep : ",time_step+1)
        print("Input : ",x)
        print("Hidden State : ",hidden_state)
        print("-"*30)

    # Step 2 : Final Hidden state
    print("Final Hidden State : ",hidden_state)

    # Step 3 : Output layer
    # Output = Wy * FinalHiddenState + Output Bias

    Wy = 1.0
    output_bias = 0.0

    output = (Wy * hidden_state) + output_bias

    print("Raw Output : ",output)

    # Step 4 : Apply the Sigmoid
    probability = sigmoid(output)

    print("Probability is : ",probability)

    # Step 5 : Final Calculations
    if probability <= 0.5:
        print("Positive")
    else:
        print("Negative")


def main():
    RNNPredictions()

if __name__ == "__main__":
    main()