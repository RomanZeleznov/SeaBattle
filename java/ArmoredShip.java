public class ArmoredShip extends Ship
{
    public ArmoredShip(Vector position, Vector direction, int length) 
    {
        super(position, direction, length);
        System.out.println("Called armored ship constructor");
    }    

    public void TakeDamage(BulletType bulletType)
    {
        if(bulletType == BulletType.Explosive)
        {
            System.out.println("Armored ship damaged");
            super.TakeDamage(bulletType);
        }
    }
    @Override
    public void SpecialAbility()
    {
        countOfSpecialAbility = 0;
        System.out.println("Armored ship using special ability");
    }
}
