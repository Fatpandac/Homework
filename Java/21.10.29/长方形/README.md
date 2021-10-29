定义一个名为Rectangle表示长方形的类，它包含double类型的长length和宽width两个私有成员变量，计算长方形面积的成员方法area（），分别对数据成员添加setter和getter方法，在主类RectangleDemo的main()中，通过setter和getter方法来访问Rectance类对象的数据成员
```Java
public class RectangleDemo {
	public static void main(String[] args) {
		Rectangle r=new Rectangle ();
		r.setLength(12.0);
		r.setWidth(30.0);
		System.out.println("长方形的面积为、"+r.area());		
	}
}
```
****
**output:**
```
长方形的面积为、360.0
```
