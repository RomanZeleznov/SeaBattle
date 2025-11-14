
class Main {
    public static void main(String[] args) 
    {
       Field myField = new Field(2);
       System.out.println("---------------------");
       Field enemyField = new Field(2);
       System.out.println("---------------------");
       
       Ship s1 = new Ship(0,0, 1,1, 2);
       System.out.println("---------------------");
       Ship s2 = new Ship(2,1,0,1, 3);
       System.out.println("---------------------");

       myField.AddShip(s1);
       enemyField.AddShip(s2);
       System.out.println("---------------------");
       
       PlayerHuman ph = new PlayerHuman(myField, enemyField, "player human");
       PlayerComputer pc = new PlayerComputer(myField, enemyField, "player computer");
       System.out.println("---------------------");
       
       GameManager gm = new GameManager();
       
       gm.AddPlayer(ph);
       gm.AddPlayer(pc);
       
       System.out.println("---------------------");
       gm.StartGame();
       gm.EndGame();

    }
}
