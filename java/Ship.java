public class Ship implements Cloneable
{
    
	private Vector position, direction;
	private int length;

    protected int hp,  countOfSpecialAbility = 1;

    public enum BulletType
    {
        Standart, Explosive
    }
	public Ship(Vector position, Vector direction, int length)
    {
        setPosition(position);
        setDirection(direction);
        this.length = length;
        this.hp = length;
        System.out.println("Called ship constructor");
    }
    public Ship(int posX, int posY, int dirX, int dirY, int length)
    {
        position = new Vector(posX, posY);
        direction = new Vector(dirX, dirY);
        this.length = length;
        this.hp = length;
        System.out.println("Ship is created");
    }
     @Override
    public Ship clone() throws CloneNotSupportedException
    {
        return (Ship)super.clone();
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
	public void TakeDamage(BulletType bulletType)
    {
        if(bulletType == BulletType.Standart)
            hp--;
        if(bulletType == BulletType.Explosive)
            hp -= 2;
        System.out.println("Ship damaged");
        if(!IsDestroyed())
            SpecialAbility();
    }
	public boolean IsDestroyed()
    {
        return hp <= 0;
    }
    public void SpecialAbility()
    {
        countOfSpecialAbility = 0;
        System.out.println("Ship usign special ability");
    }
}
