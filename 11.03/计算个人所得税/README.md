 2011年开始实行新个人所得税法，要求输入月薪salary，输出应交的个人所得税 tax (保留两位小数)。  
新税法方案如下：  
　　　　　　　tax=rate*(salary-3500) - deduction  
　　　　　当 salary<=3500时，rate=0、deduction=0;  
　　　　　当 3500<salary<=5000时,rate=3%、deduction=0;  
　　　　　当 5000<salary<=8000时,rate=10%、deduction=105;  
　　　　　当 8000<salary<=12500时,rate=20% 、deduction=555;  
　　　　　当 12500<salary<=38500时, rate=25% 、deduction=1005;  
　　　　　当 38500<salary<=58500时, rate=30% 、deduction=2755;  
　　　　　当 58500<salary<=83500时, rate=35% 、deduction=5505;  
　　　　　当 83500<salary时, rate=45% 、deduction=13505;  
****
**input:**
```
Enter the salary: 5010.87
```
**output:**
```
tax=46.09
```