"""
FileName: 060.py
Author: Fatpandac
Create: 2021/11/18
Description: Read a docement and return string with '山东' and '烟台'.
"""

from docx import Document

def main():
    doc = Document('data60.docx')
    for para in doc.paragraphs:
        if para.text.find('山东') != -1 or para.text.find('烟台') != -1:
            return para.text

print(main())
