from PIL import Image,ImageDraw
import math

image = Image.open("/home/user/PycharmProjects/untitled2/lena.jpg")
draw = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixels = image.load()

i = 2
for i in range(height - 2):
    j = 2
    for j in range(width - 2):
     Gx = ((2 * pixels[i + 2, j + 1][0] + pixels[i + 2, j][0] + pixels[i + 2, j + 2][0]) - (2 * pixels[i, j + 1][0] + pixels[i, j][0] + pixels[i, j + 2][0]))
     Gy = ((2 * pixels[i + 1, j + 2][0] + pixels[i, j + 2][0] + pixels[i + 2, j + 2][0]) - (2 * pixels[i + 1, j][0] + pixels[i, j][0] + pixels[i + 2, j][0]))
     G = int(math.sqrt(Gx * Gx * Gy * Gy))
     draw.point((i, j),(G, G, G))
image.save("/home/user/PycharmProjects/untitled2/lena-sobel.jpg")
del draw