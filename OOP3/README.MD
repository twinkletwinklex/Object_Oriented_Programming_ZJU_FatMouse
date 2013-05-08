## Story

Adventure is a CLI game. The player has to explore in the castle with many levels and a lot of rooms. The task of the player is to find a room where the princess is prinsoned and take her leave the castle. There are many types of rooms, and each type of room has different types of exits. Note that there's a monster in one of the rooms, which the exact location is not able to be aware. But once the player meets a monster, the game is over.

When the game starts, the player is at the lobby of the castle. Then the program shows information about the lobby：name of the room, how many exits are there, and names of all exits (e.g.: "east", "south", "up"), like:

>>Welcome to the lobby. There are 3 exits as: east, west and up.
>>Enter your command:

The player then can input "go" followed by the name of one exit to enter the room connected with that door, like:

>>go east

The player goes into the room to the east. The program shows the information about that room, like what happened in the lobby just now. And the player may input command to choose another room.
Once the player enters a room with a monster, the program shows a message and game over. Once the player enters the room of princess, the program shows a message about the princess, and the process is going to leave with the player. The player then has to find their way out the castle. The only way to leave the castle is via the lobby.

All printed messages and user input are in English to simplify the code.

## Requirement

1. At least three different kinds of room;
1. At least five rooms;
1. The room with monster or princess is randomly set.