#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

//function to compute average
double compute_average(std::vector<int> &person) {

	double sum = 0;
	// iterate over all elements
     	for (int p:person){

        	//std::cout << "p is " << p << std::endl;
        	sum = sum + p;
     	}
	return (sum/person.size());
}

// switch statements
// fnv1 hashing code from
// https://github.com/elbeno/constexpr/blob/master/src/include/cx_fnv1.h
namespace fnv
{
  constexpr uint64_t _(uint64_t h, const char* s)
  {
    return (*s == 0) ? h :
      _((h * 1099511628211ull) ^ static_cast<uint64_t>(*s), s+1);
  }
}

constexpr uint64_t _(const char* s)
{
  return fnv::_(14695981039346656037ull, s);
}

uint64_t _(const std::string& s)
{
  return fnv::_(14695981039346656037ull, s.data());
}

double personsPerimetre()
{
    //About the person who you want to gift
	float age=0;
		int agePoint;
	string gender;
		int genderPoint;
	string character;
		int characterPoint;
	string personality;
		int personalityPoint;
	int familyBackground;
		int familyBackgroundPoint;
	string profession;
		int professionPoint;
	int designation;
		int designationPoint;
	int influence;
		int influencePoint;
	//string schoolInCapital;
	//int highestAcademicInstitutionAttended;
	int highestDegree;
		int highestDegreePoint;
	int locationOfHigestAcademicInstitution;
		int locationOfHigestAcademicInstitutionPoint;
	int thinkingPattern;
		int thinkingPatternPoint;
	int highestPossibleFuture;
		int highestPossibleFuturePoint;
	int numberOfLanguageKnows;
		int numberOfLanguageKnowsPoint;
	int identicalQuality;
		int identicalQualityPoint;
	int totalEstimatedAttendeeInAllEvents;
		int totalEstimatedAttendeeInAllEventsPoint;
	int tradition;
		int traditionPoint;
	int philosophy;
		int philosophyPoint;
	int numberofFriend;
	int averageClassofFriendCircle;
		int averageClassofFriendCirclePoint;
	int weightOfFriendCircle;
	int numberofColleagues;
	int averageClassofColleagueCircle;
		int averageClassofColleagueCirclePoint;
	int weightOfColleaguesCircle;
	int reactionLevel;
		int reactionLevelPoint;
	int responseLevel;
		int responseLevelPoint;
	int currentPshychology;
		int currentPshychologyPoint;

	double personsScore=0.0;

    cout<<"\nPERSON WHO TO GIFT"
         "\n###################\n";
    
	//Input for the person who you want to gift
	cout<<"\n(1) Age: \n";
	cin>>age;
		
		//Age Point out of 100 
		agePoint=(int)age%100;

	cout<<"\n(2) Gender [m/f/t]: \n";
	cin>>gender;

		//Gender Point out of 100
		if(gender=="m"||gender=="M")
			genderPoint=80;
		else if(gender=="f"||gender=="F")
                        genderPoint=90;
		else
			genderPoint=71;

	cout<<"\n(3) Charater Details: https://quizlet.com/21998611/types-of-character-in-literature-flash-cards/";
	cout<<"\nCharacter"
	       "\n\t confidante"
	       "\n\t dynamic"
	       "\n\t flat"
	       "\n\t foil"
	       "\n\t round"
	       "\n\t static"
	       "\n\t stock"
	       "\n\t protagonist"
	       "\n\t antagonist \n";
	cin>>character;

		switch(_(character)) {
  			case _("confidante"):
    				characterPoint=90; break;
  			case _("dynamic"):
    				 characterPoint=80; break;
			case _("flat"):
                                 characterPoint=75; break;
			case _("foil"):
                                 characterPoint=70; break;
			case _("round"):
                                 characterPoint=65; break;
			case _("static"):
                                 characterPoint=60; break;
			case _("stock"):
                                 characterPoint=50; break;
			case _("protagonist"):
                                 characterPoint=40; break;
			case _("antagonist"):
                                 characterPoint=85; break;
  			default:
                                 characterPoint=20;
  		}
		//cout<<characterPoint;

	cout<<"\n(4) Personality Details: http://www.personalitypage.com/html/high-level.html";
        cout<<"\nPersonality"
		"\n\t dutiful"
		"\n\t mechanic"
		"\n\t nurturer"
		"\n\t artist"
		"\n\t protector"
		"\n\t idealist"
		"\n\t scientist"
		"\n\t thinker"
		"\n\t doer"
		"\n\t guardian"
		"\n\t performer"
		"\n\t caregiver"
		"\n\t inspirer"
		"\n\t giver"
		"\n\t visionary"
		"\n\t executive \n";
        cin>>personality;

	switch(_(personality)) {
                        case _("dutiful"):
                                personalityPoint=1000 %(int)age; break;
                        case _("mechanic"):
                                 personalityPoint=550 %(int)age; break;
                        case _("nurturer"):
                                 personalityPoint=800 %(int)age; break;
                        case _("artist"):
                                 personalityPoint=700 %(int)age; break;
                        case _("protector"):
                                 personalityPoint=600 %(int)age; break;
                        case _("idealist"):
                                 personalityPoint=100 %(int)age; break;
                        case _("scientist"):
                                 personalityPoint=500 %(int)age; break;
                        case _("thinker"):
                                 personalityPoint=950 %(int)age; break;
                        case _("doer"):
                                 personalityPoint=650 %(int)age; break;
			case _("guardian"):
                                 personalityPoint=400 %(int)age; break;
                        case _("performer"):
                                 personalityPoint=300 %(int)age; break;
                        case _("caregiver"):
                                 personalityPoint=750 %(int)age; break;
                        case _("inspirer"):
                                 personalityPoint=850 %(int)age; break;
                        case _("giver"):
                                 personalityPoint=900 %(int)age; break;
                        case _("visionary"):
                                 personalityPoint=350 %(int)age; break;
                        case _("executive"):
                                 personalityPoint=200 %(int)age; break;
                        default:
                                 personalityPoint=50 %(int)age;
                }

	cout<<"\n(5) Family Background\n"
		"\t Elite -> Press 1\n"
		"\t Aristocracy -> Press 2\n"
		"\t Oligarchy -> Press 3\n"
		"\t Ruling class -> Press 4\n"
		"\t Middle class -> Press 5\n"
		"\t Upper middle class -> Press 6\n"
		"\t Lower middle class -> Press 7\n"
		"\t Bourgeoisie -> Press 8\n"
		"\t WorkingClass -> Press 9\n"
		"\t Proletariat -> Press 10\n"
		"\t Precarity -> Press 11\n"
		"\t Underclasss -> Press 12\n";
	cin>>familyBackground;

		switch(familyBackground) {
                        case 1:
                                familyBackgroundPoint=100; break;
                        case 2:
                                 familyBackgroundPoint=96; break;
                        case 3:
                                 familyBackgroundPoint=93; break;
                        case 4:
                                 familyBackgroundPoint=90; break;
                        case 5:
                                 familyBackgroundPoint=80; break;
                        case 6:
                                 familyBackgroundPoint=70; break;
                        case 7:
                                 familyBackgroundPoint=60; break;
                        case 8:
                                 familyBackgroundPoint=50; break;
                        case 9:
                                 familyBackgroundPoint=40; break;
                        case 10:
                                 familyBackgroundPoint=30; break;
                        case 11:
                                 familyBackgroundPoint=20; break;
                        case 12:
                                 familyBackgroundPoint=10; break;
                        default:
                                 familyBackgroundPoint=5;
		}

	cout<<"\n(6) Profession\n"
		"\t businessman\n"
		"\t corporate\n"
		"\t academician\n"
		"\t government\n"
		"\t ngo\n"
		"\t media\n"
		"\t research\n"
		"\t investor\n"
		"\t restaurant\n"
		"\t realestate\n"
		"\t mechanic\n"
		"\t health\n"
		"\t finance\n"
		"\t law\n"
		"\t religion\n";
	cin>>profession;

		switch(_(profession)) {
                        case _("businessman"):
                                 professionPoint=55; break;
                        case _("corporate"):
                                 professionPoint=35; break;
                        case _("academician"):
                                 professionPoint=80; break;
                        case _("government"):
                                 professionPoint=100; break;
                        case _("ngo"):
                                 professionPoint=50; break;
                        case _("media"):
                                 professionPoint=70; break;
                        case _("research"):
                                 professionPoint=40; break;
                        case _("investor"):
                                 professionPoint=90; break;
                        case _("restaurant"):
                                 professionPoint=45; break;
			case _("realestate"):
                                 professionPoint=30; break;
                        case _("mechanic"):
                                 professionPoint=35; break;
                        case _("health"):
                                 professionPoint=60; break;
                        case _("finance"):
                                 professionPoint=95; break;
                        case _("law"):
                                 professionPoint=85; break;
                        case _("religion"):
                                 professionPoint=75; break;
                        default:
                                 professionPoint=50;
                }


	cout<<"\n(7) Current designation"
		"\n\t Co-founder ->Press 1"
		"\n\t Trustees ->Press 2"
		"\n\t Policy Maker ->Press 3"
		"\n\t Strategy Maker ->Press 4"
		"\n\t Management ->Press 5"
		"\n\t Executives ->Press 6"
		"\n\t Clarks ->Press 7"
		"\n\t Others ->Press 8\n";
	cin>>designation;
		
		switch(designation) {
                        case 1:
                                 designationPoint=96; break;
                        case 2:
                                 designationPoint=84; break;
                        case 3:
                                 designationPoint=72; break;
                        case 4:
                                 designationPoint=60; break;
                        case 5:
                                 designationPoint=48; break;
                        case 6:
                                 designationPoint=36; break;
                        case 7:
                                 designationPoint=24; break;
                        case 8:
                                 designationPoint=12; break; 
                        default:
                                 designationPoint=8;
                }

	cout<<"\n(8) Level of influence"
		"\n\t Constant influence ->Press 1"
		"\n\t Political influence ->Press 2"
		"\n\t Economic and financial influence ->Press 3"
		"\n\t Social influence ->Press 4"
		"\n\t Trying to influence ->Press 5"
		"\n\t Never try to influence ->Press 6\n";
        cin>>influence;

		switch(influence) {
                        case 1:
                                 influencePoint=90; break;
                        case 2:
                                 influencePoint=80; break;
                        case 3:
                                 influencePoint=71; break;
                        case 4:
                                 influencePoint=60; break;
                        case 5:
                                 influencePoint=50; break;
                        case 6:
                                 influencePoint=40; break;
                        default:
                                 influencePoint=5;
                }

        //cin>>schoolInCapital;
        //cin>>highestAcademicInstitutionAttended;

	cout<<"\n(9) Highest Degree\n"
		"\n\t School ->Press 1"
		"\n\t College ->Press 2"
		"\n\t Undergraduate ->Press 3"
		"\n\t Postgraduate ->Press 4\n";
        cin>>highestDegree;
		
		switch(highestDegree) {
                        case 1:
                                 highestDegreePoint=60; break;
                        case 2:
                                 highestDegreePoint=70; break;
                        case 3:
                                 highestDegreePoint=80; break;
                        case 4:
                                 highestDegreePoint=100; break;
                        default:
                                 highestDegreePoint=10;
                }

	cout<<"\n(10) Location of your highest reachable location for education\n"
		"\n\t Home town ->Press 1"
		"\n\t Home Country ->Press 2"
		"\n\t Self and at home ->Press 3"
		"\n\t Abroad ->Press 4\n";
        cin>>locationOfHigestAcademicInstitution;
		switch(locationOfHigestAcademicInstitution) {
                        case 1:
                                 locationOfHigestAcademicInstitutionPoint=50; break;
                        case 2:
                                 locationOfHigestAcademicInstitutionPoint=80; break;
                        case 3:
                                 locationOfHigestAcademicInstitutionPoint=10; break;
                        case 4:
                                 locationOfHigestAcademicInstitutionPoint=100; break;
                        default:
                                 locationOfHigestAcademicInstitutionPoint=10;
                }
        
	cout<<"\n(11) Thinking Pattern"
		"\n\t Convergent ->Press 1"
		"\n\t Divergent ->Press 2"
		"\n\t Critical ->Press 3"
		"\n\t Creative ->Press 4"
		"\n\t Sequential ->Press 5"
		"\n\t Holistic ->Press 6\n";
	cin>>thinkingPattern;
		switch(thinkingPattern) {
                        case 1:
                                 thinkingPatternPoint=700 % (int) age; break;
                        case 2:
                                 thinkingPatternPoint=600 % (int) age; break;
                        case 3:
                                 thinkingPatternPoint=500 % (int) age; break;
                        case 4:
                                 thinkingPatternPoint=400 % (int) age; break;
                        case 5:
                                 thinkingPatternPoint=300 % (int) age; break;
                        case 6:
                                 thinkingPatternPoint=200 % (int) age; break;
                      	default:
                                 thinkingPatternPoint=100 % (int) age;
                }

	cout<<"\n(12) Predicted future\n"
		"\n\t Goal Oriented ->Press 1"
		"\n\t get high no matter what ->Press 2"
		"\n\t organized decency ->Press 3"
		"\n\t moderate ->Press 4"
		"\n\t anything will do ->Press 5"
		"\n\t classical and conventional ->Press 6"
		"\n\t Failed to convince ->Press 7\n";
        cin>>highestPossibleFuture;
		switch(highestPossibleFuture) {
                        case 1:
                                 highestPossibleFuturePoint=100; break;
                        case 2:
                                 highestPossibleFuturePoint=96; break;
                        case 3:
                                 highestPossibleFuturePoint=93; break;
                        case 4:
                                 highestPossibleFuturePoint=90; break;
                        case 5:
                                 highestPossibleFuturePoint=80; break;
                        case 6:
                                 highestPossibleFuturePoint=70; break;
                        case 7:
                                 highestPossibleFuturePoint=60; break;
                        default:
                                 highestPossibleFuturePoint=5;
                }

	cout<<"\n(13) Number of Language knows\n";
        cin>>numberOfLanguageKnows;

	cout<<"\n(14) Identical quality of awareness\n"
		"\n\t organism consciousness ->Press 1"
		"\n\t control consciousness ->Press 2"
		"\n\t consciousness of ->Press 3"
		"\n\t state/event consciousness ->Press 4"
		"\n\t reportability ->Press 5"
		"\n\t introspective consciousness ->Press 6"
		"\n\t subjective consciousness ->Press 7"
		"\n\t self-consciousness ->Press 8\n";
	cin>>identicalQuality;
		switch(identicalQuality) {
                        case 1:
                                 identicalQualityPoint=100; break;
                        case 2:
                                 identicalQualityPoint=96; break;
                        case 3:
                                 identicalQualityPoint=93; break;
                        case 4:
                                 identicalQualityPoint=90; break;
                        case 5:
                                 identicalQualityPoint=80; break;
                        case 6:
                                 identicalQualityPoint=70; break;
                        case 7:
                                 identicalQualityPoint=60; break;
                        case 8:
                                 identicalQualityPoint=50; break;
                        default:
                                 identicalQualityPoint=5;
                }

	cout<<"\n(15) Total Crowd in all events attended till now: \n";
        cin>>totalEstimatedAttendeeInAllEvents;
        totalEstimatedAttendeeInAllEventsPoint= totalEstimatedAttendeeInAllEvents% (int) age;
        
	cout<<"\n(16) Tradition"
	       "\n\t African ->Press 1"
	       "\n\t Analytic ->Press 2"
	       "\n\t Aristotelian ->Press 3"
	       "\n\t Buddhist ->Press 4"
	       "\n\t Chinese ->Press 5"
	       "\n\t Christian ->Press 6"
	       "\n\t Continental ->Press 7"
	       "\n\t Existentialism ->Press 8"
	       "\n\t Hindu ->Press 9"
	       "\n\t Jain ->Press 10"
	       "\n\t Jewish ->Press 11"
	       "\n\t Pragmatism ->Press 12"
	       "\n\t Eastern ->Press 13"
	       "\n\t Islamic ->Press 14"
	       "\n\t Platonic ->Press 15"
	       "\n\t Western ->Press 16\n";
        cin>>tradition;

		switch(tradition) {
                        case 1:
                                 traditionPoint= 500 % (int) age ; break;
                        case 2:
                                 traditionPoint= 1000 % (int) age ; break;
                        case 3:
                                 traditionPoint= 900 % (int) age ; break;
                        case 4:
                                 traditionPoint= 300 % (int) age ; break;
                        case 5:
                                 traditionPoint= 800 % (int) age ; break;
                        case 6:
                                 traditionPoint= 700 % (int) age ; break;
                        case 7:
                                 traditionPoint= 600 % (int) age ; break;
                        case 8:
                                 traditionPoint= 400 % (int) age ; break;
                        case 9:
                                 traditionPoint= 750 % (int) age ; break;
                        case 10:
                                 traditionPoint= 200 % (int) age;  break;
                        case 11:
                                 traditionPoint= 950 % (int) age ; break;
                        case 12:
                                 traditionPoint= 650 % (int) age; break;
                        case 13:
                                 traditionPoint= 550 % (int) age ; break;
                        case 14:
                                 traditionPoint= 450 % (int) age; break;
                        case 15:
                                 traditionPoint= 350 % (int) age; break;
                        case 16:
                                 traditionPoint= 911 % (int) age; break;
                        default:
                                 traditionPoint=100 % (int) age;
                }

	cout<<"\n(17) Philosophy"
		"\n\t Epistemology ->Press 1"
		"\n\t Metaphysics ->Press 2"
		"\n\t Logic ->Press 3"
		"\n\t Ethics ->Press 4"
		"\n\t Aesthetics ->Press 5"
		"\n\t Other\n";
        cin>>philosophy;
		switch(philosophy) {
                        case 1:
                                 philosophyPoint=500  % (int) age; break;
                        case 2:
                                 philosophyPoint=400  % (int) age; break;
                        case 3:
                                 philosophyPoint=300  % (int) age; break;
                        case 4:
                                 philosophyPoint=200  % (int) age; break;
                        case 5:
                                 philosophyPoint=100 % (int) age; break; 
                        default:
                                 philosophyPoint=600 % (int) age;
                }

	cout<<"\n(18-A) Estimate number of real friends\n";
        cin>>numberofFriend;
        cout<<"\n(18-B) Average Class of friend circle\n"
                "\t Elite -> Press 1\n"
                "\t Aristocracy -> Press 2\n"
                "\t Oligarchy -> Press 3\n"
                "\t Ruling class -> Press 4\n"
                "\t Middle class -> Press 5\n"
                "\t Upper middle class -> Press 6\n"
                "\t Lower middle class -> Press 7\n"
                "\t Bourgeoisie -> Press 8\n"
                "\t WorkingClass -> Press 9\n"
                "\t Proletariat -> Press 10\n"
                "\t Precarity -> Press 11\n"
                "\t Underclasss -> Press 12\n";
        cin>>averageClassofFriendCircle;
		switch(averageClassofFriendCircle) {
                        case 1:
                                 averageClassofFriendCirclePoint=100; break;
                        case 2:
                                 averageClassofFriendCirclePoint=96; break;
                        case 3:
                                 averageClassofFriendCirclePoint=93; break;
                        case 4:
                                 averageClassofFriendCirclePoint=90; break;
                        case 5:
                                 averageClassofFriendCirclePoint=80; break;
                        case 6:
                                 averageClassofFriendCirclePoint=70; break;
                        case 7:
                                 averageClassofFriendCirclePoint=60; break;
                        case 8:
                                 averageClassofFriendCirclePoint=50; break;
                        case 9:
                                 averageClassofFriendCirclePoint=40; break;
                        case 10:
                                 averageClassofFriendCirclePoint=30; break;
                        case 11:
                                 averageClassofFriendCirclePoint=20; break;
                        case 12:
                                 averageClassofFriendCirclePoint=10; break;
                        default:
                                 averageClassofFriendCirclePoint=5;
                }

        weightOfFriendCircle=(numberofFriend*averageClassofFriendCirclePoint)%100;

	cout<<"\n(19-A) Estimate number of real colleagues\n";
	cin>>numberofColleagues;
	cout<<"\n(19-B) Average Class of colleagues circle\n"
                "\t Elite -> Press 1\n"
                "\t Aristocracy -> Press 2\n"
                "\t Oligarchy -> Press 3\n"
                "\t Ruling class -> Press 4\n"
                "\t Middle class -> Press 5\n"
                "\t Upper middle class -> Press 6\n"
                "\t Lower middle class -> Press 7\n"
                "\t Bourgeoisie -> Press 8\n"
                "\t WorkingClass -> Press 9\n"
                "\t Proletariat -> Press 10\n"
                "\t Precarity -> Press 11\n"
                "\t Underclasss -> Press 12\n";
	cin>>averageClassofColleagueCircle;
		switch(averageClassofColleagueCircle) {
                        case 1:
                                averageClassofColleagueCirclePoint=100; break;
                        case 2:
                                 averageClassofColleagueCirclePoint=96; break;
                        case 3:
                                 averageClassofColleagueCirclePoint=93; break;
                        case 4:
                                 averageClassofColleagueCirclePoint=90; break;
                        case 5:
                                 averageClassofColleagueCirclePoint=80; break;
                        case 6:
                                 averageClassofColleagueCirclePoint=70; break;
                        case 7:
                                 averageClassofColleagueCirclePoint=60; break;
                        case 8:
                                 averageClassofColleagueCirclePoint=50; break;
                        case 9:
                                 averageClassofColleagueCirclePoint=40; break;
                        case 10:
                                 averageClassofColleagueCirclePoint=30; break;
                        case 11:
                                 averageClassofColleagueCirclePoint=20; break;
                        case 12:
                                 averageClassofColleagueCirclePoint=10; break;
                        default:
                                 averageClassofColleagueCirclePoint=5;
                }

        weightOfColleaguesCircle=(numberofColleagues*averageClassofColleagueCirclePoint)%100;

	cout<<"\n(20) Reaction Level"
                "\n\t Fast ->Press 1"
                "\n\t Moderate ->Press 2"
                "\n\t Steady ->Press 3"
                "\n\t Slow ->Press 4"
                "\n\t Incompatible ->Press 5\n";        
	cin>>reactionLevel;
		switch(reactionLevel) {
                        case 1:
                                 reactionLevelPoint=100; break;
                        case 2:
                                 reactionLevelPoint=96; break;
                        case 3:
                                 reactionLevelPoint=93; break;
                        case 4:
                                 reactionLevelPoint=90; break;
                        case 5:
                                 reactionLevelPoint=80; break;
                        default:
                                 reactionLevelPoint=5;
                }

	cout<<"\n(21) Response Level"
		"\n\t Fast ->Press 1"
		"\n\t Moderate ->Press 2"
		"\n\t Steady ->Press 3"
		"\n\t Slow ->Press 4"
		"\n\t Incompatible ->Press 5\n";
        cin>>responseLevel;

		switch(responseLevel) {
                        case 1:
                        	responseLevelPoint=100; break;
                        case 2:
                                responseLevelPoint=80; break;
                        case 3:
                                responseLevelPoint=60; break;
                        case 4:
                                responseLevelPoint=40; break;
                        case 5:
                                responseLevelPoint=20; break;
                        default:
                                responseLevelPoint=10;
                }

	cout<<"\n(22) Current Psychological Status"
		"\n\t sanguine (enthusiastic, active, and social) ->Press 1"
		"\n\t choleric (independent, decisive, goal oriented) -Press 2"
		"\n\t melancholic (analytical, detail oriented, deep thinker and feeler) ->Press 3"
		"\n\t phlegmatic (relaxed, peaceful, quiet) ->Press 4 \n";
	cin>>currentPshychology;
		
		switch(currentPshychology) {
                        case 1:
                                currentPshychologyPoint=100 % (int) age; break;
                        case 2:
                                currentPshychologyPoint=96 % (int) age; break;
                        case 3:
                                currentPshychologyPoint=100 % (int) age; break;
                        case 4:
                                currentPshychologyPoint=90 % (int) age; break;
                       default:
                       		currentPshychologyPoint=5 % (int) age;
                }

	//Finding the average value of all the persons score
	std::vector <int>person ={agePoint,genderPoint,characterPoint,personalityPoint,familyBackgroundPoint,professionPoint,designationPoint,influencePoint,highestDegreePoint,locationOfHigestAcademicInstitutionPoint,thinkingPatternPoint,highestPossibleFuturePoint,numberOfLanguageKnows,identicalQualityPoint,totalEstimatedAttendeeInAllEventsPoint,traditionPoint,philosophyPoint,weightOfFriendCircle,weightOfColleaguesCircle,reactionLevelPoint,responseLevelPoint,currentPshychologyPoint};
        
        personsScore = compute_average(person);
        //cout<<"\n"<<personsScore<<endl;
    return personsScore;
}

double giversPerimetre()
{
    //About the giver
	float age=0;
		int agePoint;
	string gender;
		int genderPoint;
	string character;
		int characterPoint;
	string personality;
		int personalityPoint;
	int familyBackground;
		int familyBackgroundPoint;
	string profession;
		int professionPoint;
	int designation;
		int designationPoint;
	int influence;
		int influencePoint;
	//string schoolInCapital;
	//int highestAcademicInstitutionAttended;
	int highestDegree;
		int highestDegreePoint;
	int locationOfHigestAcademicInstitution;
		int locationOfHigestAcademicInstitutionPoint;
	int thinkingPattern;
		int thinkingPatternPoint;
	int highestPossibleFuture;
		int highestPossibleFuturePoint;
	int numberOfLanguageKnows;
		int numberOfLanguageKnowsPoint;
	int identicalQuality;
		int identicalQualityPoint;
	int totalEstimatedAttendeeInAllEvents;
		int totalEstimatedAttendeeInAllEventsPoint;
	int tradition;
		int traditionPoint;
	int philosophy;
		int philosophyPoint;
	int numberofFriend;
	int averageClassofFriendCircle;
		int averageClassofFriendCirclePoint;
	int weightOfFriendCircle;
	int numberofColleagues;
	int averageClassofColleagueCircle;
		int averageClassofColleagueCirclePoint;
	int weightOfColleaguesCircle;
	int reactionLevel;
		int reactionLevelPoint;
	int responseLevel;
		int responseLevelPoint;
	int currentPshychology;
		int currentPshychologyPoint;

	double giversScore=0.0;

    cout<<"\nDATA ABOUT YOURSELF"
          "\n###################\n";
	//Input about giver
	cout<<"\n(1) Age: \n";
	cin>>age;
		
		//Age Point out of 100 
		agePoint=(int)age%100;

	cout<<"\n(2) Gender [m/f/t]: \n";
	cin>>gender;

		//Gender Point out of 100
		if(gender=="m"||gender=="M")
			genderPoint=80;
		else if(gender=="f"||gender=="F")
                        genderPoint=90;
		else
			genderPoint=71;

	cout<<"\n(3) Charater Details: https://quizlet.com/21998611/types-of-character-in-literature-flash-cards/";
	cout<<"\nCharacter"
	       "\n\t confidante"
	       "\n\t dynamic"
	       "\n\t flat"
	       "\n\t foil"
	       "\n\t round"
	       "\n\t static"
	       "\n\t stock"
	       "\n\t protagonist"
	       "\n\t antagonist \n";
	cin>>character;

		switch(_(character)) {
  			case _("confidante"):
    				characterPoint=90; break;
  			case _("dynamic"):
    				 characterPoint=80; break;
			case _("flat"):
                                 characterPoint=75; break;
			case _("foil"):
                                 characterPoint=70; break;
			case _("round"):
                                 characterPoint=65; break;
			case _("static"):
                                 characterPoint=60; break;
			case _("stock"):
                                 characterPoint=50; break;
			case _("protagonist"):
                                 characterPoint=40; break;
			case _("antagonist"):
                                 characterPoint=85; break;
  			default:
                                 characterPoint=20;
  		}
		//cout<<characterPoint;

	cout<<"\n(4) Personality Details: http://www.personalitypage.com/html/high-level.html";
        cout<<"\nPersonality"
		"\n\t dutiful"
		"\n\t mechanic"
		"\n\t nurturer"
		"\n\t artist"
		"\n\t protector"
		"\n\t idealist"
		"\n\t scientist"
		"\n\t thinker"
		"\n\t doer"
		"\n\t guardian"
		"\n\t performer"
		"\n\t caregiver"
		"\n\t inspirer"
		"\n\t giver"
		"\n\t visionary"
		"\n\t executive \n";
        cin>>personality;

	switch(_(personality)) {
                        case _("dutiful"):
                                personalityPoint=1000 %(int)age; break;
                        case _("mechanic"):
                                 personalityPoint=550 %(int)age; break;
                        case _("nurturer"):
                                 personalityPoint=800 %(int)age; break;
                        case _("artist"):
                                 personalityPoint=700 %(int)age; break;
                        case _("protector"):
                                 personalityPoint=600 %(int)age; break;
                        case _("idealist"):
                                 personalityPoint=100 %(int)age; break;
                        case _("scientist"):
                                 personalityPoint=500 %(int)age; break;
                        case _("thinker"):
                                 personalityPoint=950 %(int)age; break;
                        case _("doer"):
                                 personalityPoint=650 %(int)age; break;
                        case _("guardian"):
                                 personalityPoint=400 %(int)age; break;
                        case _("performer"):
                                 personalityPoint=300 %(int)age; break;
                        case _("caregiver"):
                                 personalityPoint=750 %(int)age; break;
                        case _("inspirer"):
                                 personalityPoint=850 %(int)age; break;
                        case _("giver"):
                                 personalityPoint=900 %(int)age; break;
                        case _("visionary"):
                                 personalityPoint=350 %(int)age; break;
                        case _("executive"):
                                 personalityPoint=200 %(int)age; break;
                        default:
                                 personalityPoint=50 %(int)age;
                }

	cout<<"\n(5) Family Background\n"
		"\t Elite -> Press 1\n"
		"\t Aristocracy -> Press 2\n"
		"\t Oligarchy -> Press 3\n"
		"\t Ruling class -> Press 4\n"
		"\t Middle class -> Press 5\n"
		"\t Upper middle class -> Press 6\n"
		"\t Lower middle class -> Press 7\n"
		"\t Bourgeoisie -> Press 8\n"
		"\t WorkingClass -> Press 9\n"
		"\t Proletariat -> Press 10\n"
		"\t Precarity -> Press 11\n"
		"\t Underclasss -> Press 12\n";
	cin>>familyBackground;

		switch(familyBackground) {
                        case 1:
                                familyBackgroundPoint=100; break;
                        case 2:
                                 familyBackgroundPoint=96; break;
                        case 3:
                                 familyBackgroundPoint=93; break;
                        case 4:
                                 familyBackgroundPoint=90; break;
                        case 5:
                                 familyBackgroundPoint=80; break;
                        case 6:
                                 familyBackgroundPoint=70; break;
                        case 7:
                                 familyBackgroundPoint=60; break;
                        case 8:
                                 familyBackgroundPoint=50; break;
                        case 9:
                                 familyBackgroundPoint=40; break;
                        case 10:
                                 familyBackgroundPoint=30; break;
                        case 11:
                                 familyBackgroundPoint=20; break;
                        case 12:
                                 familyBackgroundPoint=10; break;
                        default:
                                 familyBackgroundPoint=5;
		}

	cout<<"\n(6) Profession\n"
		"\t businessman\n"
		"\t corporate\n"
		"\t academician\n"
		"\t government\n"
		"\t ngo\n"
		"\t media\n"
		"\t research\n"
		"\t investor\n"
		"\t restaurant\n"
		"\t realestate\n"
		"\t mechanic\n"
		"\t health\n"
		"\t finance\n"
		"\t law\n"
		"\t religion\n";
	cin>>profession;

		switch(_(profession)) {
                        case _("businessman"):
                                 professionPoint=55; break;
                        case _("corporate"):
                                 professionPoint=35; break;
                        case _("academician"):
                                 professionPoint=80; break;
                        case _("government"):
                                 professionPoint=100; break;
                        case _("ngo"):
                                 professionPoint=50; break;
                        case _("media"):
                                 professionPoint=70; break;
                        case _("research"):
                                 professionPoint=40; break;
                        case _("investor"):
                                 professionPoint=90; break;
                        case _("restaurant"):
                                 professionPoint=45; break;
			case _("realestate"):
                                 professionPoint=30; break;
                        case _("mechanic"):
                                 professionPoint=35; break;
                        case _("health"):
                                 professionPoint=60; break;
                        case _("finance"):
                                 professionPoint=95; break;
                        case _("law"):
                                 professionPoint=85; break;
                        case _("religion"):
                                 professionPoint=75; break;
                        default:
                                 professionPoint=50;
                }


	cout<<"\n(7) Current designation"
		"\n\t Co-founder ->Press 1"
		"\n\t Trustees ->Press 2"
		"\n\t Policy Maker ->Press 3"
		"\n\t Strategy Maker ->Press 4"
		"\n\t Management ->Press 5"
		"\n\t Executives ->Press 6"
		"\n\t Clarks ->Press 7"
		"\n\t Others ->Press 8\n";
	cin>>designation;
		
		switch(designation) {
                        case 1:
                                 designationPoint=96; break;
                        case 2:
                                 designationPoint=84; break;
                        case 3:
                                 designationPoint=72; break;
                        case 4:
                                 designationPoint=60; break;
                        case 5:
                                 designationPoint=48; break;
                        case 6:
                                 designationPoint=36; break;
                        case 7:
                                 designationPoint=24; break;
                        case 8:
                                 designationPoint=12; break; 
                        default:
                                 designationPoint=8;
                }

	cout<<"\n(8) Level of influence"
		"\n\t Constant influence ->Press 1"
		"\n\t Political influence ->Press 2"
		"\n\t Economic and financial influence ->Press 3"
		"\n\t Social influence ->Press 4"
		"\n\t Trying to influence ->Press 5"
		"\n\t Never try to influence ->Press 6\n";
        cin>>influence;

		switch(influence) {
                        case 1:
                                 influencePoint=90; break;
                        case 2:
                                 influencePoint=80; break;
                        case 3:
                                 influencePoint=71; break;
                        case 4:
                                 influencePoint=60; break;
                        case 5:
                                 influencePoint=50; break;
                        case 6:
                                 influencePoint=40; break;
                        default:
                                 influencePoint=5;
                }

        //cin>>schoolInCapital;
        //cin>>highestAcademicInstitutionAttended;

	cout<<"\n(9) Highest Degree\n"
		"\n\t School ->Press 1"
		"\n\t College ->Press 2"
		"\n\t Undergraduate ->Press 3"
		"\n\t Postgraduate ->Press 4\n";
        cin>>highestDegree;
		
		switch(highestDegree) {
                        case 1:
                                 highestDegreePoint=60; break;
                        case 2:
                                 highestDegreePoint=70; break;
                        case 3:
                                 highestDegreePoint=80; break;
                        case 4:
                                 highestDegreePoint=100; break;
                        default:
                                 highestDegreePoint=10;
                }

	cout<<"\n(10) Location of your highest reachable location for education\n"
		"\n\t Home town ->Press 1"
		"\n\t Home Country ->Press 2"
		"\n\t Self and at home ->Press 3"
		"\n\t Abroad ->Press 4\n";
        cin>>locationOfHigestAcademicInstitution;
		switch(locationOfHigestAcademicInstitution) {
                        case 1:
                                 locationOfHigestAcademicInstitutionPoint=50; break;
                        case 2:
                                 locationOfHigestAcademicInstitutionPoint=80; break;
                        case 3:
                                 locationOfHigestAcademicInstitutionPoint=10; break;
                        case 4:
                                 locationOfHigestAcademicInstitutionPoint=100; break;
                        default:
                                 locationOfHigestAcademicInstitutionPoint=10;
                }
        
	cout<<"\n(11) Thinking Pattern"
		"\n\t Convergent ->Press 1"
		"\n\t Divergent ->Press 2"
		"\n\t Critical ->Press 3"
		"\n\t Creative ->Press 4"
		"\n\t Sequential ->Press 5"
		"\n\t Holistic ->Press 6\n";
	cin>>thinkingPattern;
		switch(thinkingPattern) {
                        case 1:
                                 thinkingPatternPoint=700 % (int) age; break;
                        case 2:
                                 thinkingPatternPoint=600 % (int) age; break;
                        case 3:
                                 thinkingPatternPoint=500 % (int) age; break;
                        case 4:
                                 thinkingPatternPoint=400 % (int) age; break;
                        case 5:
                                 thinkingPatternPoint=300 % (int) age; break;
                        case 6:
                                 thinkingPatternPoint=200 % (int) age; break;
                      	default:
                                 thinkingPatternPoint=100 % (int) age;
                }

	cout<<"\n(12) Predicted future\n"
		"\n\t Goal Oriented ->Press 1"
		"\n\t get high no matter what ->Press 2"
		"\n\t organized decency ->Press 3"
		"\n\t moderate ->Press 4"
		"\n\t anything will do ->Press 5"
		"\n\t classical and conventional ->Press 6"
		"\n\t Failed to convince ->Press 7\n";
        cin>>highestPossibleFuture;
		switch(highestPossibleFuture) {
                        case 1:
                                 highestPossibleFuturePoint=100; break;
                        case 2:
                                 highestPossibleFuturePoint=96; break;
                        case 3:
                                 highestPossibleFuturePoint=93; break;
                        case 4:
                                 highestPossibleFuturePoint=90; break;
                        case 5:
                                 highestPossibleFuturePoint=80; break;
                        case 6:
                                 highestPossibleFuturePoint=70; break;
                        case 7:
                                 highestPossibleFuturePoint=60; break;
                        default:
                                 highestPossibleFuturePoint=5;
                }

	cout<<"\n(13) Number of Language knows\n";
        cin>>numberOfLanguageKnows;

	cout<<"\n(14) Identical quality of awareness\n"
		"\n\t organism consciousness ->Press 1"
		"\n\t control consciousness ->Press 2"
		"\n\t consciousness of ->Press 3"
		"\n\t state/event consciousness ->Press 4"
		"\n\t reportability ->Press 5"
		"\n\t introspective consciousness ->Press 6"
		"\n\t subjective consciousness ->Press 7"
		"\n\t self-consciousness ->Press 8\n";
	cin>>identicalQuality;
		switch(identicalQuality) {
                        case 1:
                                 identicalQualityPoint=100; break;
                        case 2:
                                 identicalQualityPoint=96; break;
                        case 3:
                                 identicalQualityPoint=93; break;
                        case 4:
                                 identicalQualityPoint=90; break;
                        case 5:
                                 identicalQualityPoint=80; break;
                        case 6:
                                 identicalQualityPoint=70; break;
                        case 7:
                                 identicalQualityPoint=60; break;
                        case 8:
                                 identicalQualityPoint=50; break;
                        default:
                                 identicalQualityPoint=5;
                }

	cout<<"\n(15) Total Crowd in all events attended till now: \n";
        cin>>totalEstimatedAttendeeInAllEvents;
        totalEstimatedAttendeeInAllEventsPoint= totalEstimatedAttendeeInAllEvents% (int) age;

	cout<<"\n(16) Tradition"
	       "\n\t African ->Press 1"
	       "\n\t Analytic ->Press 2"
	       "\n\t Aristotelian ->Press 3"
	       "\n\t Buddhist ->Press 4"
	       "\n\t Chinese ->Press 5"
	       "\n\t Christian ->Press 6"
	       "\n\t Continental ->Press 7"
	       "\n\t Existentialism ->Press 8"
	       "\n\t Hindu ->Press 9"
	       "\n\t Jain ->Press 10"
	       "\n\t Jewish ->Press 11"
	       "\n\t Pragmatism ->Press 12"
	       "\n\t Eastern ->Press 13"
	       "\n\t Islamic ->Press 14"
	       "\n\t Platonic ->Press 15"
	       "\n\t Western ->Press 16\n";
        cin>>tradition;

		switch(tradition) {
                        case 1:
                                 traditionPoint= 500 % (int) age ; break;
                        case 2:
                                 traditionPoint= 1000 % (int) age ; break;
                        case 3:
                                 traditionPoint= 900 % (int) age ; break;
                        case 4:
                                 traditionPoint= 300 % (int) age ; break;
                        case 5:
                                 traditionPoint= 800 % (int) age ; break;
                        case 6:
                                 traditionPoint= 700 % (int) age ; break;
                        case 7:
                                 traditionPoint= 600 % (int) age ; break;
                        case 8:
                                 traditionPoint= 400 % (int) age ; break;
                        case 9:
                                 traditionPoint= 750 % (int) age ; break;
                        case 10:
                                 traditionPoint= 200 % (int) age;  break;
                        case 11:
                                 traditionPoint= 950 % (int) age ; break;
                        case 12:
                                 traditionPoint= 650 % (int) age; break;
                        case 13:
                                 traditionPoint= 550 % (int) age ; break;
                        case 14:
                                 traditionPoint= 450 % (int) age; break;
                        case 15:
                                 traditionPoint= 350 % (int) age; break;
                        case 16:
                                 traditionPoint= 911 % (int) age; break;
                        default:
                                 traditionPoint=100 % (int) age;
                }

	cout<<"\n(17) Philosophy"
		"\n\t Epistemology ->Press 1"
		"\n\t Metaphysics ->Press 2"
		"\n\t Logic ->Press 3"
		"\n\t Ethics ->Press 4"
		"\n\t Aesthetics ->Press 5"
		"\n\t Other\n";
        cin>>philosophy;
		switch(philosophy) {
                        case 1:
                                 philosophyPoint=500  % (int) age; break;
                        case 2:
                                 philosophyPoint=400  % (int) age; break;
                        case 3:
                                 philosophyPoint=300  % (int) age; break;
                        case 4:
                                 philosophyPoint=200  % (int) age; break;
                        case 5:
                                 philosophyPoint=100 % (int) age; break; 
                        default:
                                 philosophyPoint=600 % (int) age;
                }

	cout<<"\n(18-A) Estimate number of real friends\n";
        cin>>numberofFriend;
        cout<<"\n(18-B) Average Class of friend circle\n"
                "\t Elite -> Press 1\n"
                "\t Aristocracy -> Press 2\n"
                "\t Oligarchy -> Press 3\n"
                "\t Ruling class -> Press 4\n"
                "\t Middle class -> Press 5\n"
                "\t Upper middle class -> Press 6\n"
                "\t Lower middle class -> Press 7\n"
                "\t Bourgeoisie -> Press 8\n"
                "\t WorkingClass -> Press 9\n"
                "\t Proletariat -> Press 10\n"
                "\t Precarity -> Press 11\n"
                "\t Underclasss -> Press 12\n";
        cin>>averageClassofFriendCircle;
		switch(averageClassofFriendCircle) {
                        case 1:
                                 averageClassofFriendCirclePoint=100; break;
                        case 2:
                                 averageClassofFriendCirclePoint=96; break;
                        case 3:
                                 averageClassofFriendCirclePoint=93; break;
                        case 4:
                                 averageClassofFriendCirclePoint=90; break;
                        case 5:
                                 averageClassofFriendCirclePoint=80; break;
                        case 6:
                                 averageClassofFriendCirclePoint=70; break;
                        case 7:
                                 averageClassofFriendCirclePoint=60; break;
                        case 8:
                                 averageClassofFriendCirclePoint=50; break;
                        case 9:
                                 averageClassofFriendCirclePoint=40; break;
                        case 10:
                                 averageClassofFriendCirclePoint=30; break;
                        case 11:
                                 averageClassofFriendCirclePoint=20; break;
                        case 12:
                                 averageClassofFriendCirclePoint=10; break;
                        default:
                                 averageClassofFriendCirclePoint=5;
                }

        weightOfFriendCircle=(numberofFriend*averageClassofFriendCirclePoint)%100;

	cout<<"\n(19-A) Estimate number of real colleagues\n";
	cin>>numberofColleagues;
	cout<<"\n(19-B) Average Class of colleagues circle\n"
                "\t Elite -> Press 1\n"
                "\t Aristocracy -> Press 2\n"
                "\t Oligarchy -> Press 3\n"
                "\t Ruling class -> Press 4\n"
                "\t Middle class -> Press 5\n"
                "\t Upper middle class -> Press 6\n"
                "\t Lower middle class -> Press 7\n"
                "\t Bourgeoisie -> Press 8\n"
                "\t WorkingClass -> Press 9\n"
                "\t Proletariat -> Press 10\n"
                "\t Precarity -> Press 11\n"
                "\t Underclasss -> Press 12\n";
	cin>>averageClassofColleagueCircle;
		switch(averageClassofColleagueCircle) {
                        case 1:
                                averageClassofColleagueCirclePoint=100; break;
                        case 2:
                                 averageClassofColleagueCirclePoint=96; break;
                        case 3:
                                 averageClassofColleagueCirclePoint=93; break;
                        case 4:
                                 averageClassofColleagueCirclePoint=90; break;
                        case 5:
                                 averageClassofColleagueCirclePoint=80; break;
                        case 6:
                                 averageClassofColleagueCirclePoint=70; break;
                        case 7:
                                 averageClassofColleagueCirclePoint=60; break;
                        case 8:
                                 averageClassofColleagueCirclePoint=50; break;
                        case 9:
                                 averageClassofColleagueCirclePoint=40; break;
                        case 10:
                                 averageClassofColleagueCirclePoint=30; break;
                        case 11:
                                 averageClassofColleagueCirclePoint=20; break;
                        case 12:
                                 averageClassofColleagueCirclePoint=10; break;
                        default:
                                 averageClassofColleagueCirclePoint=5;
                }

        weightOfColleaguesCircle=(numberofColleagues*averageClassofColleagueCirclePoint)%100;

	cout<<"\n(20) Reaction Level"
                "\n\t Fast ->Press 1"
                "\n\t Moderate ->Press 2"
                "\n\t Steady ->Press 3"
                "\n\t Slow ->Press 4"
                "\n\t Incompatible ->Press 5\n";        
	cin>>reactionLevel;
		switch(reactionLevel) {
                        case 1:
                                 reactionLevelPoint=100; break;
                        case 2:
                                 reactionLevelPoint=96; break;
                        case 3:
                                 reactionLevelPoint=93; break;
                        case 4:
                                 reactionLevelPoint=90; break;
                        case 5:
                                 reactionLevelPoint=80; break;
                        default:
                                 reactionLevelPoint=5;
                }

	cout<<"\n(21) Response Level"
		"\n\t Fast ->Press 1"
		"\n\t Moderate ->Press 2"
		"\n\t Steady ->Press 3"
		"\n\t Slow ->Press 4"
		"\n\t Incompatible ->Press 5\n";
        cin>>responseLevel;

		switch(responseLevel) {
                        case 1:
                        	responseLevelPoint=100; break;
                        case 2:
                                responseLevelPoint=80; break;
                        case 3:
                                responseLevelPoint=60; break;
                        case 4:
                                responseLevelPoint=40; break;
                        case 5:
                                responseLevelPoint=20; break;
                        default:
                                responseLevelPoint=10;
                }

	cout<<"\n(22) Current Psychological Status"
		"\n\t sanguine (enthusiastic, active, and social) ->Press 1"
		"\n\t choleric (independent, decisive, goal oriented) -Press 2"
		"\n\t melancholic (analytical, detail oriented, deep thinker and feeler) ->Press 3"
		"\n\t phlegmatic (relaxed, peaceful, quiet) ->Press 4 \n";
	cin>>currentPshychology;
		
		switch(currentPshychology) {
                        case 1:
                                currentPshychologyPoint=100 % (int) age; break;
                        case 2:
                                currentPshychologyPoint=96 % (int) age; break;
                        case 3:
                                currentPshychologyPoint=100 % (int) age; break;
                        case 4:
                                currentPshychologyPoint=90 % (int) age; break;
                       default:
                       		currentPshychologyPoint=5 % (int) age;
                }

	//Finding the average value of all the persons score
	std::vector <int>giver ={agePoint,genderPoint,characterPoint,personalityPoint,familyBackgroundPoint,professionPoint,designationPoint,influencePoint,highestDegreePoint,locationOfHigestAcademicInstitutionPoint,thinkingPatternPoint,highestPossibleFuturePoint,numberOfLanguageKnows,identicalQualityPoint,totalEstimatedAttendeeInAllEventsPoint,traditionPoint,philosophyPoint,weightOfFriendCircle,weightOfColleaguesCircle,reactionLevelPoint,responseLevelPoint,currentPshychologyPoint};
        
        giversScore = compute_average(giver);
        //cout<<"\n"<<giversScore<<endl;
    return giversScore;
}

double currency(double personsScore,double giversScore)
{
    double netCurrency= 0.0;
    int current;
    int currentPoint;
    
    cout<<"\nTell us about your Current Status"
          "\n#################################\n"
                "\t Elite -> Press 1\n"
                "\t Aristocracy -> Press 2\n"
                "\t Oligarchy -> Press 3\n"
                "\t Ruling class -> Press 4\n"
                "\t Middle class -> Press 5\n"
                "\t Upper middle class -> Press 6\n"
                "\t Lower middle class -> Press 7\n"
                "\t Bourgeoisie -> Press 8\n"
                "\t WorkingClass -> Press 9\n"
                "\t Proletariat -> Press 10\n"
                "\t Precarity -> Press 11\n"
                "\t Underclasss -> Press 12\n";
	cin>>current;
    
		switch(current) {
                        case 1:
                                currentPoint=100; break;
                        case 2:
                                 currentPoint=96; break;
                        case 3:
                                 currentPoint=93; break;
                        case 4:
                                 currentPoint=90; break;
                        case 5:
                                 currentPoint=80; break;
                        case 6:
                                 currentPoint=70; break;
                        case 7:
                                 currentPoint=60; break;
                        case 8:
                                 currentPoint=50; break;
                        case 9:
                                 currentPoint=40; break;
                        case 10:
                                 currentPoint=30; break;
                        case 11:
                                 currentPoint=20; break;
                        case 12:
                                 currentPoint=10; break;
                        default:
                                 currentPoint=5;
                }

    netCurrency= (fmod(giversScore,personsScore))*currentPoint;
    
    return netCurrency;
    
}

string grade(double point)
{
    string grade;
    
    if(point>=80) 
    {
        grade="A+ অ+ ক+ Outstanding";
    }
    else if(point>=75 && point<=80)
    {
        grade="A অ ক outstanding";
    }
    else if(point>=70 && point<=75)
    {
        grade="A- অ- ক- outstanding";
    }
    else if(point>=65 && point<=70)
    {
        grade="B+ আ+ খ+ very good";
    }
    else if(point>=60 && point<=65)
    {
        grade="B আ খ very good";
    }
    else if(point>=55 && point<=60)
    {
        grade="B- আ- খ- very good";
    }
    else if(point>=50 && point<=55)
    {
        grade="C+ ই+  গ+ Satisfactory";
    }
    else if(point>=45 && point<=50)
    {
        grade="C ই  গ Satisfactory";
    }
    else if(point>=40 && point<=45)
    {
        grade="D ঈ  ঘ Maginal";
    }
    else
    {
        grade="F ঋ ছ Below Average";
    }
    return grade;
}

int main()
{
	
    double personsScore;
    double giversScore;
    double currencyYouWantToSpend;
    string giftGrade;
    
    personsScore=personsPerimetre();
    giversScore=giversPerimetre();
    currencyYouWantToSpend=currency(personsScore,giversScore);
    giftGrade=grade(fmod(personsScore,giversScore));
    
    cout<<"\nScores"
          "\n**********\n";
    cout<<"Person's Score: \t"<<personsScore<<endl;
    cout<<"Your Score:: \t\t"<<giversScore<<endl;

    cout<<"\nOur Advice"
          "\n**********\n";
    cout<<"Currency you may expense (MINIMUM): \t $10 to $"<<currencyYouWantToSpend<<endl;
    cout<<"Minimum quality of the GIFT: \t grade "<<giftGrade<<endl;
    
	return 0;
}
