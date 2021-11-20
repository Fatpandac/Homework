"""
FileName: 124.py
Author: Fatpandac
Create: 2021/11/20
Description: Given a path of image, the image may be is RGB or gray and format 
             is jpg or png or BMP. If it's RGB, calculate the average value of 
             each value component of the pixel, then calculate gray value of
             it or the number of pixels whose color component average value is
             greater than or equal to 200, then divide the number of pixels and
             return the result.
"""

from itertools import product
from PIL import Image

def main(fn):
    img = Image.open(fn)
    if img.mode == 'RGB':
        width, height = img.size
        pixels = img.load()
        avg = []
        for i, j in product(range(width), range(height)):
            r, g, b = pixels[i, j]
            avg.append((r + g + b) / 3)
        avg = list(filter(lambda i: i >= 200, avg))
        return round(len(avg) / (width * height), 2)
    elif img.mode == 'L':
        width, height = img.size
        pixels = img.load()
        avg = []
        for i, j in product(range(width), range(height)):
            avg.append(pixels[i, j])
        avg = list(filter(lambda i: i >= 200, avg))
        return round(len(avg) / (width * height), 2)
