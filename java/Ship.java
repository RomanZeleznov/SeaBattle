public class Ship 
{
    
	private Vector position, direction;
	private int length, hp;


	public Ship(Vector position, Vector direction, int length)
    {
        setPosition(position);
        setDirection(direction);
        this.length = length;
        this.hp = length;
        System.out.println("Ship is created");
    }
    public Ship(int posX, int posY, int dirX, int dirY, int length)
    {
        position = new Vector(posX, posY);
        direction = new Vector(dirX, dirY);
        this.length = length;
        this.hp = length;
        System.out.println("Ship is created");
    }
    public Vector getPosition()
    {
        return new Vector(position.getX(), position.getY());
    }
    public void setPosition(Vector position)
    {
        this.position = new Vector(position.getX(), position.getY());
    }
    public Vector getDirection()
    {
        return new Vector(direction.getX(), direction.getY());
    }
    public void setDirection(Vector direction)
    {
        this.direction = new Vector(direction.getX(), direction.getY());
    }
    public int getLength()
    {
        return length;
    }
	public void TakeDamage()
    {
        hp--;
    }
	public boolean IsDestroyed()
    {
        return hp == 0;
    }
}
