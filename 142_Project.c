//Space Invaders NXT Edition
//By Mitchell Waite
//
//Music Credits:
//Never Gonna Give You Up (Rick Astley, 1987)
//Super Mario Death Tune (Nintendo, 1985)
//Donkey Kong Theme Song (Nintendo, 1980)
//Donkey Kong Start Tune (Nintendo, 1980)
//Gunfire and Explosion Effects (Edited from various online sources, 2014)


//FOURTH OCTAVE NOTE FREQUENCIES
#define	C4  261	//	C	note frequency
#define	Cs4 277	//	C	sharp note frequency (same as D flat)
#define	D4  294	//	D	note frequency
#define	Ds4 311	//	D	sharp note frequency (same as E flat)
#define	E4  329	//	E	note frequency
#define	F4  349	//	F	note frequency
#define	Fs4 370	//	F	sharp note frequency (same as G flat)
#define	G4  392	//	G	note frequency
#define	Gs4 415	//	G	sharp note frequency (same as A flat)
#define	A4  440	//	A	note frequency
#define	As4 466	//	A	sharp note frequency (same as B flat)
#define	B4  494	//	B	note frequency
//FIFTH OCTAVE NOTE FREQUENCIES
#define	C5  523	//	C	note frequency
#define	Cs5 554	//	C	sharp note frequency
#define	D5  587	//	D	note frequency
#define	Ds5 622	//	D	sharp note frequency
#define	E5  659	//	E	note frequency
#define	F5  698	//	F	note frequency
#define	Fs5 740	//	F	sharp note frequency
#define	G5  784	//	G	note frequency
#define	Gs5 831	//	G	sharp note frequency
#define	A5  880	//	A	note frequency
#define	As5 932	//	A	sharp note frequency
#define	B5  988	//	B	note frequency
//SIXTH OCTAVE NOTE FREQUENCIES
#define	C6  1046	//	note frequency
#define	Cs6 1109	//	sharp note frequency
#define	D6  1175	//	note frequency
#define	Ds6 1245	//	sharp note frequency
#define	E6  1319	//	note frequency
#define	F6  1397	//	note frequency
#define	Fs6 1480	//	sharp note frequency
#define	G6  1568	//	note frequency
#define	Gs6 1661	//	sharp note frequency
#define	A6  1760	//	note frequency
#define	As6 1865	//	sharp note frequency
#define	B6  1976	//	note frequency
//SEVENTH OCTAVE NOTE FREQUENCIES
#define	C7  2093	//	note frequency
#define	Cs7 2217	//	sharp note frequency
#define	D7  2349	//	note frequency
#define	Ds7 2489	//	sharp note frequency
#define	E7  2637	//	note frequency
#define	F7  2794	//	note frequency
#define	Fs7 2960	//	sharp note frequency
#define	G7  3136	//	note frequency
#define	Gs7 3322	//	sharp note frequency
#define	A7  3520	//	note frequency
#define	As7 3729	//	sharp note frequency
#define	B7  3951	//	note frequency

#define	P		0 //note frequency (a rest note)



//NOTE DURATION FACTORS (THEY MULTIPLY THE WHOLE NOTE DURATION)
#define	N1   1.0     //whole note
#define	N2   0.5     //half note
#define	N2h  0.75    //dotted half note
#define	N4   0.25    //quarter note
#define	N4h  0.375   //dotted quarter note
#define	N8   0.125   //eighth note
#define	N8h  0.1875  //dotted eighth note
#define	N16  0.0625  //sixteenth note
#define	N16h 0.09375 //dotted / sixteenth note
#define N10 0.1  //Tenth Note
#define N48 0.02083 //48th note
#define N35 0.02857 //35th note
#define N15 0.06667 //15th note
#define N17 0.05882 //17th note
#define N30h 0.05 //Dotted 30th note
#define N13 0.07692 //13th note
#define N7 0.142857 //7th note
#define N30 0.0333333 //30th note
#define N32 0.03125 //32nd note
#define N43 0.0232558 //43rd note
#define N34h 0.0441176 //dotted 34th note
#define N7h 0.2142857 //dotted 7th note
#define N18 0.0555555 //18th note
#define N14 0.07142857	//14th note
#define N9 0.1111111 //9th note
#define N17h 0.088235 //dotted 17th note
#define N27 0.037037 //27th note
#define N24 0.0416666 //24th note
#define N12 0.0833333 //12th note
#define N38 0.026315789 //38th note
#define N64 0.015625 //64th note
#define N55 0.0181818 //55th note
#define N5 0.2 //5th note
#define N26 0.0384615 //26th note
#define N32h 0.046875 //dotted 32nd note
#define N6 0.16666666 //6th note
#define N19 0.05263 //19th note
#define N77 0.012987 //77th note
#define N96 0.0104166 //96th note
#define N15h 0.1 //dotted 15th note


//define the size of each sprite
#define ROWS 8
#define COLS 8

//define the frequency and duration for the first part of the winner song
//Never Going to Give You Up (1987) By Rick Astley
int intF[] = {
    P,
    Cs5, P, Ds5, P, Gs4, P, Ds5, P, F5,
    P, Gs5, P, Fs5, P, F5, P, Cs5, P,
    Ds5, P, Gs4, P, Cs5, P, Ds5, P, Gs4,
    P, Ds5, P, F5, P, Gs5, P, Fs5, P,
    F5, P, Cs5, P, Ds5, P, Gs4, 0

};

float intD[] = {
    N4,
    N4h, N55, N2, N35, N16h, N35, N4h, N35, N4h,
    N27, N30, N35, N30, N35, N15h, N43, N4h, N48,
    N4h, N77, N1, N34h, N4h, N55, N2, N35, N16h,
    N35, N4h, N35, N4h, N27, N30, N35, N30, N35,
    N15h, N43, N4h, N48, N4h, N77, N1, 0
};

//define the frequency and duration for the rest of the winner song
//Never Going to Give You Up (1987) By Rick Astley
int songF[] = {
    P,
    As4, P, C5, P, Cs5, P, Cs5, P, Ds5,
    P, C5, P, As4, P, Gs4, P, As4, P,
    As4, P, C5, P, Cs5, P, As4, P, Gs4,
    P, Gs5, P, Gs5, P, Ds5, P, As4, P,
    As4, P, C5, P, Cs5, P, As4, P, Cs5,
    P, Ds5, P, C5, P, As4, P, C5, P,
    As4, P, Gs4, P, As4, P, As4, P, C5,
    P, Cs5, P, As4, P, Gs4, P, Ds5, P,
    Ds5, P, Ds5, P, F5, P, Ds5, P, Cs5,
    P, Ds5, P, F5, P, Ds5, P, Ds5, P,
    Ds5, P, F5, P, Ds5, P, Gs4, P, Gs4,
    P, Gs4, P, As4, P, C5, P, Cs5, P,
    As4, P, Ds5, P, F5, P, Ds5, P, Gs4,
    P, As4, P, Cs5, P, As4, P, F5, P,
    F5, P, Ds5, P, Gs4, P, As4, P, Cs5,
    P, As4, P, Ds5, P, Ds5, P, Cs5, P,
    C5, P, As4, P, Gs4, P, As4, P, Cs5,
    P, As4, P, Cs5, P, Ds5, P, C5, P,
    As4, P, Gs4, P, Gs4, P, Ds5, P, Cs5,
    P, Cs5, P, Gs4, P, As4, P, Cs5, P,
    As4, P, F5, P, F5, P, Ds5, P, Gs4,
    P, As4, P, Cs5, P, As4, P, Gs5, P,
    Cs5, P, Cs5, P, C5, P, As4, P, Gs4,
    P, As4, P, Cs5, P, As4, P, Cs5, P,
    Ds5, P, P, C5, P, As4, P, Gs4, P,
    Gs4, P, Ds5, P, Cs5, 0
};

float songD[] = {
    N2,
    N10, N48, N35, N16h, N10, N48, N15, N17, N30h,
    N13, N7, N30, N32, N32, N4h, N2, N16h, N32,
    N10, N43, N16h, N35, N16h, N35, N34h, N7h, N18,
    N14, N8, N9, N17h, N27, N4h, N4h, N24, N12,
    N16h, N35, N38, N10, N9, N64, N24, N12, N9,
    N55, N30, N5, N9, N55, N16h, N30, N32, N32,
    N38, N27, N4, N4h, N17h, N26, N16h, N35, N17,
    N15, N10, N43, N32h, N13, N6, N12, N10, N38,
    N17h, N27, N16h, N30, N17h, N27, N4, N4, N2,
    N17h, N32h, N13, N10, N38, N7h, N34h, N24, N12,
    N16h, N35, N17h, N26, N10, N43, N12, N34h, N8h,
    N2, N30h, N13, N16h, N35, N17, N15, N10, N48,
    N19, N8h, N10, N38, N12, N34h, N4, N8, N27,
    N38, N38, N27, N27, N38, N43, N26, N7, N19,
    N8, N17, N5, N6, N30, N35, N43, N26, N26,
    N43, N43, N26, N7, N26, N8, N18, N7, N32h,
    N27, N38, N10, N43, N32, N32, N38, N27, N27,
    N38, N43, N26, N8h, N19, N19, N14, N6, N35,
    N35, N30, N8h, N18, N17, N15, N9, N77, N16h,
    N30, N4, N4, N32, N32, N38, N27, N26, N43,
    N43, N26, N5, N24, N12, N24, N4, N7, N32,
    N32, N43, N26, N26, N43, N96, N19, N5, N30,
    N24, N12, N8h, N96, N32, N32, N10, N43, N32,
    N32, N55, N34h, N34h, N55, N55, N34h, N5, N27,
    N34h, N12, N8, N19, N7, N38, N27, N7h, N30h,
    N19, N14, N5, N26, N4, 0

};


//define the frequency and duration of the song that plays before the game starts
//From the Donkey Kong Arcade Game (Nintendo)
int lvlF[] = {
    C5,
    D5, Ds5, C5, B5, C6, B5, C6, B5, C6,
    B5, C6, B5, C6, B5, C6, B5, C6, 0
};

float lvlD[] = {
    N2,
    N8h, N4h, N4h, N16, N16, N16, N16, N16, N16,
    N16, N16, N16, N16, N16, N16, N16, N2, 0
};

//Define the frequency and duration of the song that plays during a loss
//From Super Mario Brothers, (Nintendo)
int dieF[] = {
    C6,
    C6, C6, P, B5, F6, P, F6, F6, E6,
    D6, C6, P, E5, P, C5, 0
};

float dieD[] = {
    N32,
    N32, N32, N8, N16, N16, N16, N16, N16h, N16h,
    N16, N16, N16, N16, N16, N16, 0
};

//define the player's sprite
byte PlayerSprite[8][8]=
				{	{0,0,0,1,1,0,0,0},
					{0,0,0,1,1,0,0,0},
					{0,0,0,1,1,0,0,0},
					{0,0,1,1,1,1,0,0},
					{0,1,1,1,1,1,1,0},
					{1,1,1,1,1,1,1,1},
					{1,1,1,1,1,1,1,1},
					{1,1,1,1,1,1,1,1}
				};

//define the sprite for the enemies
byte enemySprite[8][8]=
				{	{0,0,1,1,1,1,0,0},
					{0,1,0,1,1,0,1,0},
					{1,0,0,1,1,0,0,1},
					{1,1,1,1,1,1,1,1},
					{1,1,1,1,1,1,1,1},
					{1,1,1,1,1,1,1,1},
					{0,0,0,1,1,0,0,0},
					{1,1,1,1,1,1,1,1}
				};

//enemy struct typedef, to store enemy position and alive status
typedef union
{
	struct {
		bool live;
		int xpos;
		float ypos;
	};
} enemy;

//Typedef for the sprite drawing function
typedef byte BYTE2D[8][8];



//function declarations
void PlayWinner(); //function that plays when the game is won
void IntroLoop();//function that controls the introduction menu
int GameLoop(int waves);//controls the game, returns the status(win/loss) and requires the number of waves of enemies
void creditsLoop(); //controls the credits
void GameLoss();//shows a you lose message and plays a tone
void DrawImage(BYTE2D pixels, int left, int top);//draws sprites on screen with an image, x, and y position

//global (high)score variables
int hiscore;
int score = 0;
int themePos = 0;//records the note position of the game theme for the music task
int difficulty = 0;//keeps track of the difficulty(number of waves) of enemies

task gameTheme()
{

//notes and durations for the music that plays during the game
//Donkey Kong Theme Song, (Nintendo)
int notesF[] = {
   D5,
    D5, A5, P, F5, G5, F5, D5, D5, D5,
    As5, P, G5, A5, G5, E5, E5, E5, C6,
    P, A5, As5, C6, D6, F5, G5, A5, P,
    E5, F5, G5, F5, D5, D5, A5, P, F5,
    G5, F5, D5, D5, D5, As5, P, G5, A5,
    G5, E5, E5, E5, C6, P, A5, As5, C6,
    D6, F5, G5, A5, P, E5, F5, G5, E5,
    0
};

float notesD[] = {
    N8,
    N8, N2, N16, N8, N8, N8, N2h, N8, N8,
    N2, N16, N8, N8, N8, N2h, N8, N8, N2,
    N16, N8, N8, N8, N2h, N8, N8, N2, N16,
    N8, N8, N8, N1, N8, N8, N2, N16, N8,
    N8, N8, N2h, N8, N8, N2, N16, N8, N8,
    N8, N2h, N8, N8, N2, N16, N8, N8, N8,
    N2h, N8, N8, N2, N16, N8, N8, N8, N2,
    0
};

while(true) //infinite loop for the music, so it will play until the task is stopped
{
int beats = 172; //tempo in beats per minute

int freq;
	float duration;
	int wholenote, quarternote; //duration of whole and quarter note in milliseconds
	int tics; //durationation in 10-millisecond tics needed by PlayTone() function


	quarternote = 1000 * (60 / (float)beats); //how many milliseconds
	wholenote = 4 * quarternote; //how many milliseconds

	bPlaySounds = true;
	nVolume = 2;

	do
	{
		freq = notesF[themePos]; //get first note frequency
		duration = notesD[themePos]; //get first note duration
		tics = (int)((wholenote * duration) / 10); //how many 10 msec tics
		PlayTone(freq, tics); //queue it
		wait10Msec(tics); //let it play
		themePos++;
	} while (duration > 0);
	themePos = 0; //reset the song position to zero, so we start at the beginning of the song
}

}

task main() //controls the different modules of the game
{
	srand(nSysTime);  // generate seed for rand() from current system time
	int gameResult = 0;//set the game result default to zero (a loss)
	while(true) //infinite loop, so that we don't abort the program (unless the user chooses to)
	{
		eraseDisplay(); //clear the display of graphics, to prepare for a new session
		IntroLoop(); //call the intro loop
		wait10Msec(10);//wait 100msec to prevent sound conflicts
		themePos = 0; //set the position of the game theme music to zero
		StartTask(gameTheme); //start the theme music
		gameResult = GameLoop(difficulty); //start the game with the specified difficulty
		StopTask(gameTheme); //stop the theme music after the game session is over
		if (gameResult == 0) //if the game session has returned a zero (player lost) call the game loss function
		{
			GameLoss();
		}
		else //since the only other outcome is a win, play the winner function
		{
			PlayWinner();
		}
		creditsLoop(); //show the credits
	}
}

void IntroLoop()
{
		SensorType[S4] = sensorTouch; //set the sensor types
		SensorType[S1] = sensorTouch;
		int menuSel = 0; //variable for the menu selection

		while(true) //Intro Screen Loop
		{
		nxtDisplayCenteredTextLine(1,"SPACE"); //draw the title text centred on the screen
		nxtDisplayCenteredTextLine(2,"INVADERS");
		nxtDisplayCenteredTextLine(3,"NXT Edition");
		nxtDisplayCenteredTextLine(5,"Press Start!");

		if (SensorValue[S1] == 1) //if sensor 1 is pressed (menu selection)
		{
			if(menuSel < 2) //if the menu selection value is less than 2, increment
			{
				menuSel ++;
			}
			else //if the menu selection is 2, set it back to zero
			{
				menuSel = 0;
			}
		}

		switch(menuSel) //set the difficulty variable (number of waves of enemies) and draw on screen text based on the menu selection value
		{
			case 0:
			{
				difficulty = 1;
				nxtDisplayCenteredTextLine(7,"Difficulty: Easy");
				break;
			}
			case 1:
			{
				difficulty = 2;
				nxtDisplayCenteredTextLine(7,"Difficulty: Med");
				break;
			}
			case 2:
			{
				difficulty = 3;
				nxtDisplayCenteredTextLine(7,"Difficulty: Hard");
				break;
			}
		}

		if(SensorValue[S4] == 1) //if the start game button is pressed
			{
				eraseDisplay(); //clear the display and write please wait on screen
				nxtDisplayCenteredTextLine(5,"Please Wait...");


				//the code below plays the song that indicates the start of the level
				int i = 0;
				int freq, tics;
				float duration;
				int beats; //beats per minutes (one beat = one quater-note)
				long wholenote, quarternote;//durationation of whole and quarter note in millisecond tics


				beats = 150;//tempo in beats per minute
				quarternote = (1000*60)/(float)beats; //how many milliseconds
				wholenote = 4*quarternote; //how many milliseconds

				while(lvlD[i]!=0)//keep going until a 0-duration marker seen
				{
					duration = lvlD[i];//get the note duration
					freq = lvlF[i]; //get the note frequency
					tics = (int)((wholenote*duration)/10);//how many 10 msec "tics"
					PlayTone(freq, tics);//queue it
					wait10Msec(tics);//let it play
					i = i+1; //move to next note
				}


				break;
			}


		wait10Msec(10); //pause 100 msec for the proper operation of the menu
		}
}

int GameLoop(int waves)
{
		//Array to hold the data for the enemy ships
		enemy enemies[5];

		//variables to hold motor encoder data, to control the box movement
		long motorEncoder = nMotorEncoder[motorB];
		long newMotorEncoder;


		int boxPosition = 42;//variable to hold the initial box position
		float bulletY = 8; //holds the initial bullet position
		int bulletX = 0; //records the bullet's x position
		int bulletFired = false;//records if a fired bullet is still on the screen
		int i; //loop index variable
		int wavesLeft = waves - 1; //holds how many waves are left after the current wave of enemies

		int time = 600;//time in loop cycles that the player has to play
		int delay = 50;//delay in msec for each loop

		int xoffset = 0; //holds the x offset of each enemy
		int xoffdir = 0; //holds the direction of the x offset of each enemy

		bool enemiesAlive = false; //will record if any enemies are alive at the end of each loop

		SensorType[S4] = sensorTouch; //set up the sensors
		SensorType[S1] = sensorTouch;

		score = 0; //set the initial score to zero

		for(i=0;i<=4;i++) //sets up the enemies
		{
			enemies[i].live = true;
			enemies[i].xpos = (100/5) * i;
			enemies[i].ypos = 40;
		}




	while(true)
		{
			eraseDisplay(); //clear the display of graphics

			newMotorEncoder = nMotorEncoder[motorB]; //get the new motor encoder value
			int boxChange; //holds the change in player position


			boxChange = (abs(motorEncoder - newMotorEncoder)); //calculate the magnitude of the change in player position
			if (motorEncoder > newMotorEncoder) //if the motor was turned forward
				{
					if(boxPosition < 91) //if the player is not already at the right of the screen
						{
							boxPosition += boxChange; //move the player to the right by the amount specified
						}
					else //if the player is at the right of the screen or more
						{
							boxPosition = 91; //set the player position to the right of the screen
						}
			}
			else //if the motor was turned backwards
			{
				boxChange = (abs(motorEncoder - newMotorEncoder)); //calculate the magnitude of the change in player position
				if(boxPosition > 1) //if the player is not at the left of the screen
				{
					boxPosition -= boxChange; //move the player to the left of the screen
				}
				else //if the player is at the left of the screen (or more), move the player to the left of the screen
				{
					boxPosition = 1;
				}
			}

			if (SensorValue[S4] == 1 && bulletFired == false) //if the fire button is pressed and a bullet is not currently on the screen
			{
				bulletFired = true; //set the bullet to be on the screen
				bulletX = boxPosition + 2; //set the bullet's initial position to the middle of the player's sprite
				bulletY = 12; //set the bullet's initial y position
				StopTask(gameTheme); //stop the games theme music
				ClearSounds(); //clear the sound buffer
				PlaySoundFile("gunshot.rso"); //play a pre recorded gun sound effect
				StartTask(gameTheme); //restart the game's theme
				score += 1; //increase the score by 1
			}

			if (bulletFired == true) //if the bullet was fired
			{
				nxtDrawCircle(bulletX,bulletY,4); //draw a circle (bullet) at the bullets current y position
				bulletY += 1; //increase the bullet's y position by 1

				for(i=0;i<=4;i++) //collision Detection
				{
					if(bulletY < enemies[i].ypos && bulletY > enemies[i].ypos - 8 && bulletX > (enemies[i].xpos + xoffset) && bulletX < (enemies[i].xpos + 8 + xoffset) && enemies[i].live == true) //if the bullet has collided with an alive enemy
					{
						StopTask(gameTheme); //stop the game music
						ClearSounds(); //clear the sound buffer
					PlaySoundFile("kaboom.rso"); //play a pre-recorded explosion
						StartTask(gameTheme); //restart the game music
						enemies[i].live = false; //set that enemy alive variable to false (enemy is now dead)
						bulletFired = false; //set the bullet as not fired, to enable another bullet to be fired
						score += 15; //increase the score by 15
					}
				}

				if (bulletY > 64) //if the bullet went off the top of the screen
				{
					bulletFired = false; //set the bullet as not fired, to enable another bullet to be fired
				}
			}

			//nxtDrawRect(boxPosition,0,boxPosition+8,8);		//debug functions to draw the player as a box instead of the sprite
			//nxtDisplayTextLine(1,"Box Position: %d",boxPosition);

			DrawImage(PlayerSprite, boxPosition, 8); //draw the player's sprite

			motorEncoder = newMotorEncoder; //set the motor encoder variable


			nxtDisplayTextLine(0,"Score: %d",score); //display the score and time left on the screen
			nxtDisplayTextLine(1,"Time Left: %d",time*0.05);




			for(i = 0;i<=4;i++) //for each enemy
			{
				if(enemies[i].live == true) //if it is alive
				{
					enemiesAlive = true; //record that an enemy is alive
					//nxtDrawRect(enemies[i].xpos,enemies[i].ypos,enemies[i].xpos + 8,enemies[i].ypos - 8); //debug function to draw an enemy as a box
					DrawImage(enemySprite, enemies[i].xpos + xoffset, (int)enemies[i].ypos); //draw the enemy's sprite
				}
			}

			if (xoffset < 8 && xoffdir == 0) //if the enemies are moving to the right and have not hit the right bound
			{
				xoffset = xoffset + 1; //move them one place to the right
			}
			else if (xoffset == 8 && xoffdir == 0) //if the enemies hit the right bound, flip the direction
			{
				xoffdir = 1;
			}
			else if (xoffset > 0 && xoffdir == 1) //if the enemies are moving to the left and have not hit the left bound,
			{
				xoffset = xoffset - 1; //move them one place to the left
			}
			else if (xoffset == 0 && xoffdir == 1)
			{
				xoffdir = 0; //if the enemies hit the left bound, flip the direction
			}


			if (time <= 0) //if the time has hit zero
			{

				return 0; //return a game loss
			}
			else //if time is not zero
			{
				time = time - 1; //decrement time
			}

			//if (SensorValue(S1) == 1)	//debug function to test the game's loss function
			//{
			//	return 0;
			//}

			if (enemiesAlive == false) //if all current enemies are dead
			{
				if(wavesLeft > 0) //if there are waves left
				{
					for(i=0;i<=4;i++) //sets up the new wave of enemies
					{
						enemies[i].live = true;
						enemies[i].xpos = (100/5) * i;
						enemies[i].ypos = 40;
					}
					wavesLeft -= 1; //decrease the amount of waves left
				}
				else //if there are no waves left
				{
				//return a game win
				return 1;
				}
			}

			if (enemies[0].ypos > 18) //if the enemies are above position 18 on the screen
			{
			for(i=0;i<=4;i++) //reduce the position by 0.04 (enemies will go from pos 40 to pos 18 in 600 cycles)
			{
			enemies[i].ypos = enemies[i].ypos - 0.04;
			}
			}
			else
			{
				return 0; //when the enemies reach the bottom, return a game loss
			}


			enemiesAlive = false; //reset the alive variable to false
			wait1Msec(delay); //wait the specified cycle delay
}
}

void PlayWinner() //controls the game's winning functions
{


	int i = 0; //loop counter variable
	int freq, tics; //variables to play the music
	float duration;
	int beats; //beats per minutes (one beat = one quater-note)
	long wholenote, quarternote;//durationation of whole and quarter note in millisecond tics

	int speed = 0; //speed and direction for the motors
	int direction = 1;

	beats = 120;//tempo in beats per minute
	quarternote = (1000*60)/(float)beats; //how many milliseconds
	wholenote = 4*quarternote; //how many milliseconds

	ClearSounds(); //clear the sound buffet and wait 1 second before the music
	wait10Msec(100);

	eraseDisplay();

				if(hiscore < score)
				{
					hiscore = score; //if the user has received a high score, set it
				}


				nxtDisplayCenteredBigTextLine(1,"You Win!"); //display a big You Win on the screen
				nxtDisplayCenteredTextLine(4,"Your Score: %d",score); //display the user's score and the high score
				nxtDisplayCenteredTextLine(5,"High Score: %d",hiscore);


	//play the winning song's intro
	while(intD[i]!=0)//keep going until a 0-duration marker seen
	{
		duration = intD[i];//get the note duration
		freq = intF[i]; //get the note frequency
		tics = (int)((wholenote*duration)/10);//how many 10 msec "tics"
		PlayTone(freq, tics);//queue it

			if(songF[i]!=P)
		{
		speed = rand() % 50;
		direction = -1 * direction;
		speed = speed * direction;
		motor[0] = 100;
		motor[1] = speed;
		motor[2] = -speed;
		}


		wait10Msec(tics);//let it play
		motor[0] = 0;
		motor[1] = 0;
		motor[2] = 0;

		i = i+1; //move to next note
	}

	i = 0; //reset the song counter


	//play the winning song's main part
	while(songD[i]!=0)//keep going until a 0-duration marker seen
	{
		duration = songD[i];//get the note duration
		freq = songF[i]; //get the note frequency
		tics = (int)((wholenote*duration)/10);//how many 10 msec "tics"
		PlayTone(freq, tics);//queue it

		if(songF[i]!=P)
		{
		speed = rand() % 50;
		direction = -1 * direction;
		speed = speed * direction;
		motor[0] = 100;
		motor[1] = speed;
		motor[2] = -speed;
		}


		wait10Msec(tics);//let it play
		motor[0] = 0;
		motor[1] = 0;
		motor[2] = 0;

		i = i+1; //move to next note
	}

}

void creditsLoop()
{
		eraseDisplay(); //clear the display
		nxtDisplayCenteredTextLine(0,"SPACE"); //draw the name of the game
		nxtDisplayCenteredTextLine(1,"INVADERS");
		nxtDisplayCenteredTextLine(3,"Project By:");
		nxtDisplayCenteredTextLine(4,"Mitchell Waite"); //draw the names of the creators of the game
		nxtDisplayCenteredTextLine(5,"and");
		nxtDisplayCenteredTextLine(6,"John Poldon");
		wait10Msec(1000); //wait 10 seconds
}

void DrawImage(BYTE2D pixels, int left, int top) //function that drawS a sprite on the screen
{
	int x, y; //for x and y drawing coordinates
	int i, j; //array row and column indices
	for(i=0; i<=ROWS-1; i++)
	{
		for(j=0; j<=COLS-1; j++)
		{
			x = left+j; //set x screen position according to the column value
			y = top-i; //set y screen position according to the row value
			if(pixels[i][j] == 0) //if there is no pixel to be drawn
				//do nothing
			else if(pixels[i][j] == 1)//if there is a pixel to be drawn
				nxtSetPixel(x, y); //draw the pixel


		}

	}
}


void GameLoss() //controls the game's loss
{
	ClearSounds(); //clear the sound buffer
	eraseDisplay();//clear the display
	nxtDisplayCenteredBigTextLine(1,"You Lose!"); //write a loss message on the screen
				//play the loss music
				int i = 0;
				int freq, tics;
				float duration;
				int beats; //beats per minutes (one beat = one quater-note)
				long wholenote, quarternote;//durationation of whole and quarter note in millisecond tics


				beats = 100;//tempo in beats per minute
				quarternote = (1000*60)/(float)beats; //how many milliseconds
				wholenote = 4*quarternote; //how many milliseconds

				while(dieD[i]!=0)//keep going until a 0-duration marker seen
				{
					duration = dieD[i];//get the note duration
					freq = dieF[i]; //get the note frequency
					tics = (int)((wholenote*duration)/10);//how many 10 msec "tics"
					PlayTone(freq, tics);//queue it
					wait10Msec(tics);//let it play
					i = i+1; //move to next note
				}

}
