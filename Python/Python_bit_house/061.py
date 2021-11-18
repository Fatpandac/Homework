"""
FileName: 061.py
Author: Fatpandac
Create: 2021/11/18
Description: Reading a file and return number in the tables of file.
"""

from docx import Document
import re

def main():
    doc = Document('data60.docx')
    number_list = []
    for table in doc.tables:
        for row in table.rows:
            for cell in row.cells:
                number_list += re.findall(r'\d+', cell.text)
    return sum(map(int, number_list))

print(main())
