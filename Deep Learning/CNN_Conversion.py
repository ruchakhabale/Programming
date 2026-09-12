from PIL import Image

img = Image.open("digit.png")
print(img.size)                    # Resolution of an image : 1024 * 1024

img = img.convert("L")              # Converting it to Grayscale
img = img.resize((28,28))

img.save("digit_28x28.png")

print(img.size)