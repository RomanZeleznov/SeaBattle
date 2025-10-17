public abstract class Player 
{ 
	private Field myField, enemyField;
	private String name;

	public Player(Field myField, Field enemyField, String name)
    {
        this.myField = myField;
        this.enemyField = enemyField;
        this.name = name;
    }
	public abstract void MakeMove();
	public abstract void ArrangeShips();   
    public Field getMyField()
    {
        return myField;
    }
    public void setMyField(Field myField)
    {
        this.myField = myField;
    }
    public Field getEnemyField()
    {
        return enemyField;
    }
    public void setEnemyField(Field enemyField)
    {
        this.enemyField = enemyField;
    }
    public String getName()
    {
        return name;
    }
    public void setName(String name)
    {
        this.name = name;
    }
}
