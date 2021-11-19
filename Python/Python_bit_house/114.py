"""
FileName: 114.py
Author: Fatpandac
Create: 2021/11/19
Description: Given a integer, return True if it's palindrome prime, otherwise 
             return False.
"""

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:                                      
            return False                                    
    return True                                             
                                                            
def main(num):                                              
    if is_prime(num) and str(num) == str(num)[::-1]:        
        return True                                         
    return False
