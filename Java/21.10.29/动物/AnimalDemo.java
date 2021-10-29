/*
** FileName: AnimalDemo.java
** Author: Fatpandac
** Create: 2021/10/29
** Description: 
*/

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

class Dog extends Animal {

    public void sound(){
        System.out.println("我的宠物:狗	颜色:红色");
    }
}

class Cat extends Animal {

    public void sound(){
        System.out.println("我的宠物:猫	颜色:黑色");
    }
}

public class AnimalDemo {
    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat();
        dog.sound();
        cat.sound();
    }
}
