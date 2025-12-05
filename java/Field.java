import java.util.ArrayList;
public class Field implements Cloneable
{
 
    private	int size;
	private boolean isGot;
	private ArrayList<Cell> cells;
	private ArrayList<Ship> ships;


	private int aliveShipCount;
	private Ship selectedShip;


	public Field(int size)
    {
        this.size = size;
        isGot = false;
        try
        {
            cells = new ArrayList<Cell>();
            for (int y = 0; y < size; y++) 
            {
                for(int x = 0; x < size; x++)
                cells.add(new Cell(x,y));
            }
        }
        catch(Throwable t)
        {
            System.out.println("Intercepted error: " + t.getMessage());
            return;
        }
        ships = new ArrayList<Ship>();
        aliveShipCount = 0;
        selectedShip = null;
        System.out.println("Field is created");
    }
    @Override
    public Field clone() throws CloneNotSupportedException
    {
        return (Field)super.clone();
    }
    public Field DeepClone() throws CloneNotSupportedException
    {
        Field clone = (Field)this.clone();
        clone.cells = (ArrayList<Cell>)cells.clone();
        clone.ships = (ArrayList<Ship>)ships.clone();
        if(selectedShip != null)
            clone.selectedShip = (Ship)selectedShip.clone();
        return clone;
    }
    public ArrayList<Cell> getCells()
    {
        return cells;
    }
	public void AddShip(Ship ship)
    {
        try
        {   
            ships.add(ship);
            aliveShipCount++;
            System.out.println("Ship is added");
        }
        catch(Throwable t)
        {
            System.out.println("Intercepted error: " + t.getMessage());
        }
    }
	public void MoveSelectedShip(Vector position)
    {

    }
	public void RotateSelectedShip()
    {

    }
	public void Shot(Vector position)
    {

    }
	public Ship GetShipOnPosition(Vector position)
    {
        return null;
    }
	public Cell GetCellOnPosition(Vector position)
    {   
        try
        {
            int ind = position.getY() * size + position.getX();
            if(ind >= cells.size())
                throw new Throwable("Out of array list");
            return cells.get(ind);
        }
        catch(Throwable t)
        {
            System.out.println("Intercepted error: " + t.getMessage());
            return null;
        }
    }
	public void SetSelectedShip(Ship ship)
    {
        selectedShip = ship;
    }
	public void RemoveSelectedShip()
    {
        selectedShip = null;
    }
	public boolean IsAllShipDestroyed()
    {
        return aliveShipCount == 0;
    }
	public boolean IsCorrectShipsPositions()
    {
        return false;
    }
	private boolean IsCellInsideShip(Cell cell, Ship ship)
    {
        return false;
    }
	private boolean IsCellNearShip(Cell cell, Ship ship)
    {
        return false;
    }
	private boolean IsCorrectShipPosition(Ship ship)
    {
        return false;
    }
	private void CompileCells()
    {

    }   
}
