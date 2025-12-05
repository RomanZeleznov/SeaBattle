public class Cell {

    public static final int NotClicked = 0;
    public static final int CLicked = 1;
    public static final int Ship = 2;
    public static final int DestroyedShip = 3;
    private Vector position;
	private int status;
	private boolean isCircled;
	public Vector[] polygon;


	public Cell(Vector position)
    {
       position = new Vector(position.getX(), position.getY());
       setStatus(0);
       setIsCirecled(false);
       setPolygonSquare();
    }
	public Cell(int x, int y)
    {
       position = new Vector(x, y);
       setStatus(0);
       setIsCirecled(false);
       setPolygonSquare();
    }
    public Vector getPosition()
    {
        return new Vector(position.getX(), position.getY());
    }

    public int getStatus()
    {
        return status;
    }
    public void setStatus(int status)
    {
        this.status = status;
    }
    public boolean getIsCirecled()
    {
        return  isCircled;
    }
    public void setIsCirecled(boolean isCircled)
    {
        this.isCircled = isCircled;
    }
    public Vector[] getPolygon()
    {
        return polygon.clone();
    }
	public void setPolygonSquare()
    {
       polygon = new Vector[4];
    }
	public void setPolygonTriangle(Vector direction)
    {
       polygon = new Vector[3];
    }
}
