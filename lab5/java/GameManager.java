import java.util.ArrayList;

public class GameManager
{

	private boolean isRun;
	private ArrayList<Player> players;
	private int currentPlayerID;


	public GameManager()
    {
        isRun = false;
        players = new ArrayList<Player>();
        currentPlayerID = -1;
        System.out.println("GameManager is created");
    }

    public boolean getIsRun()
    {
        return isRun;
    }
	public void AddPlayer(Player player)
    {
        players.add(player);
        System.out.println("Player is added");
    }
	public void StartGame()
    {
        System.out.println("Game is started");
        WindowManager.DrawField(players.get(0).getMyField());
        WindowManager.DrawField(players.get(0).getEnemyField());
    }
	public void StopGame()
    {
       
    }
	public void ResumeGame()
    {
        
    }
	public void EndGame()
    {
        System.out.println("Game is over");
    }   
}
