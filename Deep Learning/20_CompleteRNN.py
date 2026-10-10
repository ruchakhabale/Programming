import numpy as np

from  tensorflow.keras.preprocessing.text import Tokenizer
from  tensorflow.keras.preprocessing.sequence import pad_sequence
from  tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Embedding, SimpleRNN, Dense

# Step 1 : Load the data
train_sentences = [
    "food was good",
    "food was bad",
    "food was excellent",
    "food was terrible",
    "service was good",
    "service was bad",
    "service was excellent",
    "service was terrible",
    "ambience was good",
    "ambience was bad",
    "ambience was excellent",
    "ambience was terrible"
]

train_labels = [
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0
]

# Step 2 : Tokenization

tokenizer = Tokenizer(oov_token = "<OOV>")

tokenizer.fit_on_texts(train_sentences)

# Step 3 : Convert Training Data into sequence

train_sequence = tokenizer.text_to_sequences(train_sentences)

print("Training sequences : ")

for sentence, sequence in zip(train_sentences,train_sequence):
    print(sentence," -> ", sequence)


# Step 4 : Apply Padding

max_length = 4

X_train = pad_sequence(
    train_sequence,
    maxlen = max_length,
    padding = "pre"
)

Y_train = np.array(train_labels)

print("Padded training data")
print(X_train)

print("Training labels : ")
print(Y_train)

# Step 5 : Calculate vocabulary size

vocab_size = len(tokenizer.word_index) + 1

print("Vocabulary size is : ",vocab_size)

# Step 6 : Build RNN Model

model = Sequential()

model.add(
    Embedding(
        input_dim=vocab_size,
        output_dim=8,
        input_length=max_length
    )
)

model.add(
    SimpleRNN(
        units = 8,
        activation = "tanh"
    )
)

model.add(
    Dense(
        units=1,
        activation="sigmoid"
    )
)

# Step 7 : Compile the model

model.compile(
    optimizer = "adam",
    loss = "binary_crossentropy",
    metrices = ["accuracy"]
)

# Step 8 : Display model

model.build(input_shape = (None, max_length))

print("Model Architecture")
model.summary()

# Step 9 : Train the model

hisory = model.fit(
    X_train,
    Y_train,
    epochs = 100,
    verbose = 1
)

print("Model Training completed")

# Step 10 : Create unseen data

test_sentences = [
    "service was amazing",
    "service was terrible",
    "experience was excellent",
    "experience was terrible"
]

# Step 11 : convert text to sequence

test_sequences = tokenizer.texts_to_sequences(test_sentences)

X_test = pad_sequence(
    test_sentences,
    maxlen = max_length,
    padding = "pre"
)

# Step 12 : Predict the sentiment

for text, sequence, padded in zip(test_sentences, test_sequences, X_test):
    input_data = np.array([padded])

    prediction = model.predict(input_data,verbose = 0)

    probability = float(prediction[0][0])

    print("Sentence : ",text)
    print("Sequence : ",sequence)
    print("Padded Sequence : ",padded)
    print("Prediction : ",probability)

    if probability <= 0.5:
        print("Positive")
    else:
        print("Negative")
