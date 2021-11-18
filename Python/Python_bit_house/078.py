"""
FileName: 078.py
Author: Fatpandac
Create: 2021/11/18
Description: Reading a file, return the top three of hex colors without black and 
             default color.
"""

from operator import itemgetter
from docx import Document
from docx.shared import RGBColor

def main():
    doc = Document('data78.docx')
    colors = []
    for para in doc.paragraphs:
        for run in para.runs:
            if run.font.color.rgb != RGBColor(0, 0, 0):
                if run.font.color.rgb != None:
                    colors.append(run.font.color.rgb)
    hex_colors = list(map(str, sorted(colors, key=colors.count, reverse=True)))
    return tuple(sorted(set(hex_colors), key=hex_colors.index))[:3]

print(main())
