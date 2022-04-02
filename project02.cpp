

//  Project     : [MadLibs] 
//  Framework   : Framework for the projects 02

//            www.hasnatjanirafin.com
//            https://github.com/HasnatJaniRafin 

//  Name : Hasnat Jani Rafin [ 路飞 ]
//  ID   : 20172507
//  Date : 02 April 2022

//  ***** Copyright ©2022 [ All Rights Reserved ] ******


#include <iostream>
using namespace std;


void photoshoot();
void RomeoAndJulietlovestory();
void Goodbye();
void showMenu();
void AdayattheZoo();
void ColdNovemberday();
void Thegoodplan();

int main(int argc,char*argv[])
{
	system("color 3f");
	int choice = 0;
	while (choice!=6)
	while (1)
	{
	showMenu();
	cout<<"\n\n\t\tplease choose the option = ";
	while(!(cin>>choice)||(choice<1)||(choice>6)) 
	{
	cout<<"\n\tInvalid. Please input again:";
	cin.clear();
	cin.sync();
	}	
		cout<<"\nYour choice is : " <<choice<<endl;
		cin.sync();
		switch(choice)
	{
	case 1:
		RomeoAndJulietlovestory();
		break;
	case 2:
		Thegoodplan();
		break;
	case 3:
		photoshoot();
		break;	
	case 4:
		AdayattheZoo();
		break;
	case 5:
		ColdNovemberday();
		break;
	case 6:
		Goodbye();
		break;
	}
        
	cout<<"\n\tPress the ANY key to return to the menu."<<endl;
	getchar();

	}
	getchar();
	return 0;
    }
        void showMenu()
        {
		cout<<"\n\n\n";
cout<<"\t\t\t*******************************************************************************\n\n"<<endl;
  cout<<"\t\t\t********************* [ Make a story by your own word ] *********************\n\n"<<endl;

  cout<<"\t\t\t*************************** The Games of Mad Lib  ***************************"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl; 
  cout<<"\t\t\t*                                                                           *"<<endl; 
  cout<<"\t\t\t*      1. Romeo & Juliet love story        2. Good plan                     *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl; 
  cout<<"\t\t\t*                                                                           *"<<endl; 
  cout<<"\t\t\t*      3. Photography                      4. Spent a day at the ZOO        *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl; 
  cout<<"\t\t\t*                                                                           *"<<endl; 
  cout<<"\t\t\t*      5. November the Cold weather        6. Exit                          *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl;
  cout<<"\t\t\t*                                                                           *"<<endl;
  cout<<"\t\t\t*           Copyright © Hasnat Jani Rafin [ All Rights Reserved ]           *"<<endl;
  cout<<"\t\t\t****************************** Thanks for Play ******************************"<<endl;
 
		}
     void AdayattheZoo()
     {
     	string adjective1,noun1;
     	cout<<"\n\tPlease input an adjective :";
     	cin>>adjective1;
     	
     	cout<<"\n\tPlease input a noun :";
     	cin>>noun1;
     	
     	string pverb1,adverb1,adjective2,noun2;
     	cout<<"\n\tPlease input a past tense verb :";
     	cin>>pverb1;
     	
     	cout<<"\n\tPlease input an adverb :";
     	cin>>adverb1;
     	
     	cout<<"\n\tPlease input an adjective :";
     	cin>>adjective2;
     	
     	cout<<"\n\tPlease input a noun :";
     	cin>>noun2;
     	
     	string noun3;
     	cout<<"\n\tPlease input a noun :";
     	cin>>noun3;
     	
     	string adjective3,verb,adverb2;
     	cout<<"\n\tPlease input an adjective :";
     	cin>>adjective3;
     	
     	cout<<"\n\tPlease input a verb :";
     	cin>>verb;
     	
     	cout<<"\n\tPlease input an adverb :";
     	cin>>adverb2;
     	
     	string pVerb2,adjective4;
     	cout<<"\n\tPlease input a past tense verb :";
     	cin>>pVerb2;
     	
     	cout<<"\n\tPlease input an adjective : ";
     	cin>>adjective4;
     	
     	cout<<"\n";
     	cout<<"\t======== Spent a day at the ZOO ========";
     	cout<<"\n\n";
     	cout<<"\tToday I went to the zoo. I saw a "<<adjective1<<" "<<noun1<<" jumping up and down in its tree."<<endl;
     	
     	cout<<"\tHe "<<pverb1<<" "<<adverb1<<" through the large tunnel that led to its "<<adjective2<<" "<<noun2<<". "<<endl;
     	
     	cout<<"\tI got some peanuts and passed them through the cage to a gigantic gray "<<noun3<<" towering above my head. "<<endl;
     	
     	cout<<"\tFeeding that animal made me hungry. I went to get a "<<adjective3<<" scoop of ice cream. It filled my stomach. Afterwards I had to "<<verb<<" "<<adverb2<<" to catch the bus. "<<endl;
     	
     	cout<<"\tWhen I got home I "<<pVerb2<<" my mom for a "<<adjective4<<" day at the zoo. "<<endl; 
     	cout<<"<\t======== THE END ========";
     	cout<<"\n";
	 }
	  
	  void ColdNovemberday()
	  {
	  	string adjective1, adjective2,typeofbird,room;
	  	cout<<"\tPlease input an adjective: ";
	  	cin>>adjective1;
	  	
	  	cout<<"\tPlease input another adjective: ";
	  	cin>>adjective2;
	  	
	  	cout<<"\tPlease input a type of bird: ";
	  	cin>>typeofbird;
	  	
	  	cout<<"\tPlease input a room in a house: ";
	  	cin>>room;
	  	
	  	string pverb, verb;
	  	cout<<"\tPlease input a past tense verb: ";
	  	cin>>pverb;
	  	
	  	cout<<"\tPlease input a verb: ";
	  	cin>>verb;
	  	
	  	string relativename,noun1,liquid,ingverb1;
	  	cout<<"\tPlease input a relative's name: ";
	  	cin>>relativename;
	  	
	  	cout<<"\tPlease input a noun: ";
	  	cin>>noun1;
	  	
	  	cout<<"\tPlease input a liquid: ";
	  	cin>>liquid;
	  	
	  	cout<<"\tPlease input a verb ending in-ing: ";
	  	cin>>ingverb1;
	  	
	  	string partofbody,pluralnoun,ingverb2,noun2;
	  	cout<<"\tPlease input a part of body(plural): ";
	  	cin>>partofbody;
	  	
	  	cout<<"\tPlease input a plural noun: ";
	  	cin>>pluralnoun;
	  	
	  	cout<<"\tPlease input a verb ending in-ing: ";
	  	cin>>ingverb2;
	  	
	  	cout<<"\tPlease input a noun: ";
	  	cin>>noun2;
	  	
	  	cout<<"\n";
	  	cout<<"\t========  November the Cold weather  ========";
	  	cout<<"\n\n";
	  	cout<<"\tIt was a "<<adjective1<<", cold November day. I woke up to the "<<adjective2<<" smell of "<<typeofbird<<" roasting in the "<<room<<" downstairs. "<<endl;
		
		cout<<"\tI "<<pverb<<" down the stairs to see if I could help "<<verb<<" the dinner. "<<endl;
		
		cout<<"\tMy mom said, 'See if "<<relativename<<" needs a fresh "<<noun1<<".' So I carried a tray of glasses full of "<<liquid<<" into the "<<ingverb1<<" room . "<<endl;
		
		cout<<"\tWhen I got there, I couldnt believe my "<<partofbody<<"!! There was "<<pluralnoun<<" "<<ingverb2<<" "<<noun2<<"!!! "<<endl;
		cout<<"\t======== THE END ===================";
		cout<<"\n\n";
	  }
	  
	  void Thegoodplan()
	  {
	  	string adjective1,sportsname,cityname;
	  	cout<<"\tPlease input an adjective: ";
	  	cin>>adjective1;
	  	
	  	cout<<"\tPlease input a sports name: ";
	  	cin>>sportsname;
	  	
	  	cout<<"\tPlease input a city name: ";
	  	cin>>cityname;
	  	
	  	string noun1,noun2;
	  	cout<<"\tPlease input a noun: ";
	  	cin>>noun1;
	  	
	  	cout<<"\tPlease input another noun: ";
	  	cin>>noun2;
	  	
	  	string verb,noun3,noun4,noun5;
	  	cout<<"\tPlease input an action verb: ";
	  	cin>>verb;
	  	
	  	cout<<"\tPlease input a noun: ";
	  	cin>>noun3;
	  	
	  	cout<<"\tPlease input another noun: ";
	  	cin>>noun4;
	  	
	  	cout<<"\tPlease input another noun: ";
	  	cin>>noun5;
	  	
	  	string adjective2,foodname,adjective3,drinkname;
	  	cout<<"\tPlease input an adjective: ";
	  	cin>>adjective2;
	  	
	  	cout<<"\tPlease input a food name: ";
	  	cin>>foodname;
	  	
	  	cout<<"\tPlease input an adjective: ";
	  	cin>>adjective3;
	  	
	  	cout<<"\tPlease input a drink name: ";
	  	cin>>drinkname;
	  	
	  	cout<<"\n";
	  	cout<<"\t======== GOOD PLAN ========";
	  	cout<<"\n\n";
	  	cout<<"\tOne day my "<<adjective1<<" friend and I decide to go to the "<<sportsname<<" game in "<<cityname<<"."<<endl;
	  	
	  	cout<<"\tWe really wanted to see the "<<noun1<<" play the "<<noun2<<"."<<endl;
	  	
	  	cout<<"\tSo we "<<verb<<" our "<<noun3<<" down to the "<<noun4<<" and bought some "<<noun5<<"."<<endl;
	  	
	  	cout<<"\tWe got into the game and it was a lot of fun. We ate some "<<adjective2<<" "<<foodname<<" and drank some "<<drinkname<<". We had a great time!We plan to go again next year! "<<endl;
	    cout<<"\t ===========THE END ===========";
	    cout<<"\n\n";
	  }
	  
	  void photoshoot()
	  {
	      
	      string animal,feelings,things,professonal,cloth,things2,person,place3,verb,food;
	      
          cout<<"\n\n\t\tAnimals : ";
          cin>>animal;
	      
	      cout<<"\t\tFeeling : ";
	      cin>>feelings;
	      
	      cout<<"\t\tThings (plural) : ";
	      cin>>things;
	      
	      cout<<"\t\tA Professional (like Baker) : ";
	      cin>>professonal;
	      
	      cout<<"\t\tA Piece of Clothing : ";
	      cin>>cloth;
	      
	      cout<<"\t\tThings (plural) : ";
	      cin>>things2;
	      
	      cout<<"\t\tA Person : ";
	      cin>>person;
	      
	      cout<<"\t\tA Place : ";
	      cin>>place3;
	      
	      cout<<"\t\tVerb  with ing : ";
	      cin>>verb;
	      
	      cout<<"\t\tFood : ";
	      cin>>food;
	      
	      cout<<"\n\n\t\t================= PHOTOGRAPHY ==================";
	      cout<<"\n\n\t\t Say "<<food<<" the photographer said as the camera flashed!"<<person<<" \n"
	      
	      "\t\tand I had gone to "<<place3<<" to get our photos taken today. The first photo we\n"
	      
	      "\t\treally wanted was a picture of us dressed as "<<animal<<" pretending to be a "<<professonal<<".\n"
	     
	      "\t\tWhen we saw the proofs of it, I was a bit "<<feelings<<" because it looked different \n"
	      
	      "\t\tthan in my head. (I hadn't imagined so many boxs behind us.) However, the second photo\n"
	      
	      "\t\twas exactly what I wanted. We both looked like "<<things2<<" wearing "<<cloth<<" and \n"
	      
	      "\t\t"<<verb<<"--exactly what I had in mind!";
	      cout<<"\n\n\t\t================THE END =====================";
	      cout<<"\n\n";
	  }
	  
	  void RomeoAndJulietlovestory()
	  {
	  	string facialfeature,partofbody,household;
		cout<<"\tPlease input a facial feature: ";
		cin>>facialfeature;
		
		cout<<"\tPlease input a part of body: ";
		cin>>partofbody;
		
		cout<<"\tPlease input a household chore: ";
		cin>>household;
		
		string animalsname1,animalsname2,typeofdance;
		cout<<"\tPlease input a name of a wild animal: ";
		cin>>animalsname1;
		
		cout<<"\tPlease input another name of a wild animal: ";
		cin>>animalsname2;
		
		cout<<"\tPlease input a type of dance: ";
		cin>>typeofdance;
		
		string pieceofhardware,fruit;
		cout<<"\tPlease input a piece of hardware: ";
		cin>>pieceofhardware;
		
		cout<<"\tPlease input a name of a fruit: ";
		cin>>fruit;
		
		string artmaterial,cleaningproduct,automotiveproduct,verb;
		cout<<"\tPlease inputa name of an art material: ";
		cin>>artmaterial;
		
		cout<<"\tPlease input a name of a cleaning product: ";
		cin>>cleaningproduct;
		
		cout<<"\tPlease input a name of an automotive product: ";
		cin>>automotiveproduct;
		
		cout<<"\tPlease input a verb: ";
		cin>>verb;
		
		string medicaltest,emotion;
		cout<<"\tPlease input a medical test: ";
		cin>>medicaltest;
		
		cout<<"\tPlease input a name of an emotion: ";
		cin>>emotion;
		
		string room,name1,name2,name3,name4;
		cout<<"\tPlease input a name of a room: ";
		cin>>room;
		
		cout<<"\tPlease input a funny girl name: ";
		cin>>name1;
		
		cout<<"\tPlease input another funny girl name: ";
		cin>>name2;
		
		cout<<"\tPlease input a funny boy name: ";
		cin>>name3;
		
		cout<<"\tPlease input another funny boy name: ";
		cin>>name4;
		
		string instrument,clothes,toy;
		cout<<"\tPlease input a name of a musical instrument: ";
		cin>>instrument;
		
		cout<<"\tPlease input an item of clothing: ";
		cin>>clothes;
		
		cout<<"\tPlease input a name of a child's toy: ";
		cin>>toy;
		
		cout<<"\n";
		cout<<"\t=========== Romeo And Juliet lovestory =============";
		cout<<"\n\n";
		cout<<"\tWhen Juliet and Romeo first met they knew right away they were destined to be together. Romeo was immediately attracted to Juliet's "<<facialfeature<<" and Juliet loved Romeo's "<<partofbody<<". So in 6 months they were engaged and planned a large "<<household<<"."<<endl;
		
		cout<<"\tAt the wedding, everyone raved about the "<<animalsname1<<" and the "<<animalsname2<<" . The highlight of the evening was the "<<typeofdance<<" dancing."<<endl;
		
		cout<<"\tBefore you knew it there was a "<<pieceofhardware<<" in Romeo's eyes. He told Juliet it was time to start a "<<fruit<<"."<<endl;
		
		cout<<"\tAfter a romantic dinner of "<<artmaterial<<" and "<<cleaningproduct<<", with a little "<<automotiveproduct<<" to drink, the "<<verb<<" began."<<endl;
		
		cout<<"\tThree weeks later Juliet took a "<<medicaltest<<" test and they discovered the "<<emotion<<" news--she was pregnant."<<endl;
		
		cout<<"\tNow they are busy decorating the "<<room<<",  picking out names such as "<<name1<<", "<<name2<<", "<<name3<<", and "<<name4<<". "<<endl;
		
		cout<<"\tMost pregnant women have cravings and Juliet is no exception. She has sent Romeo to the store for things like a "<<instrument<<" and an "<<clothes<<". But overall the pregnancy is passing without a hitch and before you know it, the little "<<toy<<" will enter the world."<<endl;
	    
		cout<<"\t ===================== THE END ======================";
	    cout<<"\n\n";
	  }
	  
	  void Goodbye()
	  {
	      cout<<"\n\n"<<endl;
	      cout<<"\t\t\t /\\/\\ "<<endl;
    	  cout<<"\t\t\t_\\   \\_ "<<endl;
	      cout<<"\t\t\t\\      )  _,    ,,_ "<<endl;
	      cout<<"\t\t\t_|    (  ( 9`> < 6 ) _ __ "<<endl;
	      cout<<"\t\t\t\\_     \\__) (__,) (_ )' / "<<endl;
    	  cout<<"\t\t\t  \\_    _)   \\-/  / `-,(_ "<<endl;
	      cout<<"\t\t\t    `--'Z    /`\\_ `,___,/ "<<endl;
	      cout<<"\t\t\t       /(__,/    ))/ "<<endl;
	      cout<<"\t\t\t      /  \((_    /`/` "<<endl;
	      cout<<"\t\t\t     /   |\\`\\ "<<endl;
	      cout<<"\t\t\t     `-^-' "<<endl;
	      cout<<"\t\t========================= THANKS FOR PLAY ======================================= "<<endl;
	  	exit(0);
	  }
