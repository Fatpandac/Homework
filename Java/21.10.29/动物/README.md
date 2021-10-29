定义一个动物类，Animal(动物类型type成员变量，一个发声的方法sound());定义一个基于动物的狗类Dog（覆盖父类的发声方法）；定义一个基于动物的猫类Cat（覆盖父类的发声方法）；定义AnimalDemo类，声明一个Animal对象，分别创建一个Dog,Cat,类的对象，然后通过访问Animal对象来访问Dog  Cat 类对象的sound() 方法
```
class Animal {
	String type="";

	public Animal(){
	}

	public Animal(String type ){
	this.type=type;
	}

	public void sound(){
	}
}
```
****
**output:**
```
我的宠物:狗	颜色:红色
我的宠物:猫	颜色:黑色
```
