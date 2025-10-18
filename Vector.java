public class Vector 
{
    private int x;
    private int y;
    
    public Vector(int x, int y)
    {
        this.x = x;
        this.y = y;
        System.out.println("Vector is created");
    }

    public int getX()
    {
        return this.x;
    }
    public void setX(int x)
    {
        this.x = x;
    }
    public int getY()
    {
        return this.y;
    }
    public void setY(int y)
    {
        this.y = y;
    }

    public static int getSumOfSquare(Vector v1, Vector v2)
    {
        return 0;
    }
    public static Vector rotateAt90(Vector v)
    {
        return null;
    }
}
