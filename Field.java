import java.util.ArrayList;
public class Field 
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
        cells = new ArrayList<Cell>();
        for (int y = 0; y < size; y++) 
        {
            for(int x = 0; x < size; x++)
            cells.add(new Cell(x,y));
        }
        ships = new ArrayList<Ship>();
        aliveShipCount = 0;
        selectedShip = null;
        System.out.println("Field is created");
    }

    public ArrayList<Cell> getCells()
    {
        return (ArrayList<Cell>)cells.clone();
    }
	public void AddShip(Ship ship)
    {
        ships.add(ship);
        aliveShipCount++;
        System.out.println("Ship is added");
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
        return cells.get(position.getY() * size + position.getX());
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
