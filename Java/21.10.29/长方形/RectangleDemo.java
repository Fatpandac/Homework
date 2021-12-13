class Rectangle {
    private double length;
    private double width;
    
    public void setLength(double length) {
        this.length = length;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double area() {
        return this.length * this.width;
    }
}

public class RectangleDemo {
	public static void main(String[] args) {
		Rectangle r=new Rectangle ();
		r.setLength(12.0);
		r.setWidth(30.0);
		System.out.println("长方形的面积为、"+r.area());		
	}
}
