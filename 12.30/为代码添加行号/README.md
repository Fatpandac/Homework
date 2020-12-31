读取C语言源文件“tt.c”，添加行号，行号后加TAB，再跟代码，后输出到output.txt中。文件不超过100行代码，两位行号，如01，10，每行不超过100个字符。
****
**output:**
```
>>output.txt
01 #include <stdio.h>
02 void main()
03 {
04      int price,num,total;
05      price=8;
06      num=46;
07      total=price*num;
08      printf("每本单价:%d元,共%d人,需要:%d元\n",price,num,total);          
09 }
```