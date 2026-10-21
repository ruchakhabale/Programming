embedding = {
    0 : [0.0,0.0,0.0], 
    1 : [0.2,0.4,0.1], 
    2 : [0.3,0.1,0.5],  
    3 : [0.8,0.7,0.9],  
    4 : [0.1,0.2,0.9],  
    5 : [0.9,0.3,0.2]   
}

sequnace = [1,2,5,3]

print("Sequance for 'food was not good' is : ",sequnace)

for token in sequnace:
    print("Token : ",token)
    print("Vector : ",embedding[token])
    print("------------------------------------")
