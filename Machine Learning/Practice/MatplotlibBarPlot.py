import matplotlib.pyplot as plt

def main():
   language = ["C","C++","Java","Python"]
   students = [30,40,35,55]

   plt.bar(
       language,                 # Values of X axis
       students,                 # Values of Y axis
       width=0.6,                # width of bar
       edgecolor = "black",      # border of of bars
       linewidth = 1,            # width of bar border
       alpha = 0.8,              # transperance 0.0 to 0.1
       label = "Students"        # legend text
   )
   

   plt.title("Marvellous Bar Plot")
   plt.xlabel("Languages")
   plt.ylabel("Students")

   plt.legend()
   plt.show()

if __name__ == "__main__":
    main()