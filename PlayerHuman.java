public class PlayerHuman extends Player
{
	private boolean isMakingMove;

    public PlayerHuman(Field myField, Field enemyField, String name)
    {
        super(myField, enemyField, name);
        isMakingMove = false; 
        System.out.println("PlayerHuman is created");   
    }
    public boolean getIsMakingMove()
    {
        return isMakingMove;
    }
    @Override
	public void MakeMove()
    {

    }
    @Override
	public void ArrangeShips()
    {

    }    
}
