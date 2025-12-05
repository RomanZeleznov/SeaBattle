
class Main {
    public static void main(String[] args) 
    {
        System.out.println("Overloading a base class method:");
        
        ArmoredShip armoredShip = new ArmoredShip(new Vector(0, 0), new Vector(0, 0), 2);
        armoredShip.TakeDamage(Ship.BulletType.Explosive);

        Ship s = armoredShip;
        s.TakeDamage(Ship.BulletType.Explosive);

        AmmunitionShip ammunitionShip = new AmmunitionShip(new Vector(0, 0),new Vector(0, 0) , 2);
        ammunitionShip.TakeDamage(Ship.BulletType.Explosive);

        System.out.println("\nVirtual functions:");

        ArmoredShip armoredShip1 = new ArmoredShip(new Vector(0, 0), new Vector(0, 0), 3);
        armoredShip.TakeDamage(Ship.BulletType.Explosive);

        Ship ship = new Ship(new Vector(0, 0), new Vector(0, 0), 3);
        ship.SpecialAbility();

        ship = armoredShip;
        ship.SpecialAbility();

        System.out.println("\nClonning:");

        Field f1 = new Field(2);
        Field f2 = null, f3 = null;
        try
        {
            f2 = f1.clone();
        }
        catch(CloneNotSupportedException ex)
        {}
        try
        {
            f3 = f1.DeepClone();
        }
        catch(CloneNotSupportedException ex)
        {}
        System.out.println("Is f1 pointer equals f2 pointer? : " + (f1.getCells() == f2.getCells()));
        System.out.println("Is f1 pointer equals f3 pointer? : " + (f1.getCells() == f3.getCells()));

        System.out.println("\nAbstract class:");
        Player[] players = new Player[2];

        PlayerHuman ph = new PlayerHuman(f1, f2, "player human");
        PlayerComputer pc = new PlayerComputer(f2, f1, "player computer");
        
        players[0] = ph;
        players[1] = pc;

        System.out.println("Players : " + players[0].getName() + ", " + players[1].getName());

        System.out.println("\nMultiple inheritance:");

        HasPlayerBehavior[] havingPlayerBehavior = new HasPlayerBehavior[2];
        havingPlayerBehavior[0] = ph;
        havingPlayerBehavior[1] = pc;

        System.out.println("Players in array of abstract class: " + players[0].getName() + ", " + players[1].getName());
        System.out.println("Players in array of interface: " + havingPlayerBehavior[0].getClass() + ", " + havingPlayerBehavior[1].getClass());
    }
}
