"""
FileName: 138.py
Author: Fatpandac
Create: 2021/11/20
Description: Calculate score of a student.
"""

grades = {
        'A' : (91, 100),
        'B+': (81, 90 ),
        'B' : (71, 80 ),
        'C+': (61, 70 ),
        'C' : (51, 60 ),
        'D+': (41, 50 ),
        'D' : (31, 40 ),
        'E' : (21, 30 )
        }

def main(score, grade, high, low):
    return (grades[grade][1] - grades[grade][0]) * (score - low) \
                                / (high - low) + grades[grade][0]
