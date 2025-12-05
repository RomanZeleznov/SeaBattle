public class AmmunitionShip extends Ship 
{
    public AmmunitionShip(Vector position, Vector direction, int length) 
    {
        super(position, direction, length);
        System.out.println("Called ammunition ship constructor");
    }    

    public void TakeDamage(BulletType bulletType)
    {
        if(bulletType == BulletType.Explosive)
        {
            hp = 0;
            System.out.println("Ammunition ship explosed");
            super.TakeDamage(bulletType);
            return;
        }
        hp--;
        if(!IsDestroyed())
            SpecialAbility();
        System.out.println("Ammunition ship damaged");
    }
    @Override
    public void SpecialAbility()
    {
        countOfSpecialAbility = 0;
        System.out.println("Ammunition ship using special ability");
    }
}
