#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include <fstream>

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

    ofstream gifts;
    gifts.open ("gifts.txt",ios::app);
    
    cout<<"\nINFO ABOUT THE PERSON WHO YOU WANT TO GIFT"
          "\n##########################################\n";

    gifts<<"\nINFO ABOUT THE PERSON WHO YOU WANT TO GIFT"
          "\n##########################################\n";
    
	//Input for the person who you want to gift
	cout<<"\n(1) Age: \n";
	cin>>age;
		
		//Age Point out of 100 
		agePoint=(int)age%100;
        
	gifts<<"\n(1) Age: "<<age <<"\tAge Point: "<<agePoint <<endl;

	cout<<"\n(2) Gender [m/f/t]: \n";
	cin>>gender;

		//Gender Point out of 100
		if(gender=="m"||gender=="M")
			genderPoint=80;
		else if(gender=="f"||gender=="F")
                        genderPoint=90;
		else
			genderPoint=71;

	gifts<<"\n(2) Gender: "<<gender <<"\tGender Point: "<<genderPoint <<endl;
        
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
    				characterPoint=90; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
  			case _("dynamic"):
    				 characterPoint=80; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                     break;
			case _("flat"):
                    characterPoint=75; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("foil"):
                    characterPoint=70; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("round"):
                    characterPoint=65; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("static"):
                    characterPoint=60; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("stock"):
                    characterPoint=50; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("protagonist"):
                    characterPoint=40; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("antagonist"):
                    characterPoint=85; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
  			default:
                    characterPoint=20;
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
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
                            personalityPoint=1000 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                            
                        case _("mechanic"):
                            personalityPoint=550 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;

                        case _("nurturer"):
                            personalityPoint=800 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;

                        case _("artist"):
                            personalityPoint=700 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;

                        case _("protector"):
                            personalityPoint=600 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;                            
                            break;
                        case _("idealist"):
                            personalityPoint=100 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("scientist"):
                            personalityPoint=500 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                             break;
                        case _("thinker"):
                            personalityPoint=950 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                             break;
                        case _("doer"):
                            personalityPoint=650 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                             break;
                        case _("guardian"):
                            personalityPoint=400 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("performer"):
                            personalityPoint=300 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("caregiver"):
                            personalityPoint=750 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("inspirer"):
                            personalityPoint=850 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("giver"):
                            personalityPoint=900 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("visionary"):
                            personalityPoint=350 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("executive"):
                            personalityPoint=200 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        default:
                            personalityPoint=50 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
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
		"\t Working Class -> Press 9\n"
		"\t Proletariat -> Press 10\n"
		"\t Precarity -> Press 11\n"
		"\t Under class -> Press 12\n";
	cin>>familyBackground;

		switch(familyBackground) {
                        case 1:
                                familyBackgroundPoint=100; 
                                gifts<<"\n(5) Family Background: \tElite"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                break;
                        case 2:
                                 familyBackgroundPoint=96; 
                                 gifts<<"\n(5) Family Background: \tAristocracy"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 3:
                                 familyBackgroundPoint=93; 
                                 gifts<<"\n(5) Family Background: \tOligarchy"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 4:
                                 familyBackgroundPoint=90; 
                                 gifts<<"\n(5) Family Background: \tRuling class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 5:
                                 familyBackgroundPoint=80; 
                                 gifts<<"\n(5) Family Background: \tMiddle class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 6:
                                 familyBackgroundPoint=70; 
                                 gifts<<"\n(5) Family Background: \tUpper middle class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 7:
                                 familyBackgroundPoint=60; 
                                 gifts<<"\n(5) Family Background: \tLower middle class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 8:
                                 familyBackgroundPoint=50; 
                                 gifts<<"\n(5) Family Background: \tBourgeoisie"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 9:
                                 familyBackgroundPoint=40; 
                                 gifts<<"\n(5) Family Background: \tWorking class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 10:
                                 familyBackgroundPoint=30; 
                                 gifts<<"\n(5) Family Background: \tProletariat"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 11:
                                 familyBackgroundPoint=20; 
                                 gifts<<"\n(5) Family Background: \tPrecarity"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 12:
                                 familyBackgroundPoint=10; 
                                 gifts<<"\n(5) Family Background: \tUnder class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        default:
                                 familyBackgroundPoint=5;
                                 gifts<<"\n(5) Family Background: \tDefault"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
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
                                 professionPoint=55; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("corporate"):
                                 professionPoint=35; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("academician"):
                                 professionPoint=80; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("government"):
                                 professionPoint=100; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("ngo"):
                                 professionPoint=50; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("media"):
                                 professionPoint=70; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("research"):
                                 professionPoint=40; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("investor"):
                                 professionPoint=90; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("restaurant"):
                                 professionPoint=45; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("realestate"):
                                 professionPoint=30; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("mechanic"):
                                 professionPoint=35; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("health"):
                                 professionPoint=60; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("finance"):
                                 professionPoint=95; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("law"):
                                 professionPoint=85; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("religion"):
                                 professionPoint=75; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        default:
                                 professionPoint=50;
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
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
                                 designationPoint=96; 
                                 gifts<<"\n(7) Current designation: \tCo-founder"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 2:
                                 designationPoint=84; 
                                 gifts<<"\n(7) Current designation: \tTrustees" <<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 3:
                                 designationPoint=72; 
                                 gifts<<"\n(7) Current designation: \tPolicy Maker"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 4:
                                 designationPoint=60; 
                                 gifts<<"\n(7) Current designation: \tStrategy Maker" <<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 5:
                                 designationPoint=48; 
                                 gifts<<"\n(7) Current designation: \tManagement"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 6:
                                 designationPoint=36; 
                                 gifts<<"\n(7) Current designation: \tExecutives"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 7:
                                 designationPoint=24; 
                                 gifts<<"\n(7) Current designation: \tClarks"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 8:
                                 designationPoint=12; 
                                 gifts<<"\n(7) Current designation: \tOthers"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break; 
                        default:
                                 designationPoint=8;
                                 gifts<<"\n(7) Current designation: \tDefault"<<"\tDesignation Point: "<<designationPoint<<endl;
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
                                 influencePoint=90; 
                                 gifts<<"\n(8) Level of influence: \tConstant influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 2:
                                 influencePoint=80; 
                                 gifts<<"\n(8) Level of influence: \tPolitical influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 3:
                                 influencePoint=71; 
                                 gifts<<"\n(8) Level of influence: \tEconomic and financial influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 4:
                                 influencePoint=60; 
                                 gifts<<"\n(8) Level of influence: \tSocial influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 5:
                                 influencePoint=50; 
                                 gifts<<"\n(8) Level of influence: \tTrying to influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 6:
                                 influencePoint=40; 
                                 gifts<<"\n(8) Level of influence: \tNever try to influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        default:
                                 influencePoint=5;
                                 gifts<<"\n(8) Level of influence: \tDefault"<<"\tInfluence Point: "<<influencePoint<<endl;
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
                                 highestDegreePoint=60; 
                                 gifts<<"\n(9) Highest Degree: \tSchool "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        case 2:
                                 highestDegreePoint=70; 
                                 gifts<<"\n(9) Highest Degree: \tCollege "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        case 3:
                                 highestDegreePoint=80; 
                                 gifts<<"\n(9) Highest Degree: \tUndergraduate "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        case 4:
                                 highestDegreePoint=100; 
                                 gifts<<"\n(9) Highest Degree: \tPostgraduate "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        default:
                                 highestDegreePoint=10;
                                 gifts<<"\n(9) Highest Degree: \tDefault"<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                }

	cout<<"\n(10) Location of your highest reachable location for education\n"
		"\n\t Home town ->Press 1"
		"\n\t Home Country ->Press 2"
		"\n\t Self and at home ->Press 3"
		"\n\t Abroad ->Press 4\n";
        cin>>locationOfHigestAcademicInstitution;
		switch(locationOfHigestAcademicInstitution) {
                        case 1:
                                 locationOfHigestAcademicInstitutionPoint=50; 
                                 gifts<<"\n(10) Location of education:\tHome Town "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        case 2:
                                 locationOfHigestAcademicInstitutionPoint=80; 
                                 gifts<<"\n(10) Location of education:\tHome Country "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        case 3:
                                 locationOfHigestAcademicInstitutionPoint=10; 
                                 gifts<<"\n(10) Location of education: \tSelf and at home "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        case 4:
                                 locationOfHigestAcademicInstitutionPoint=100; 
                                 gifts<<"\n(10) Location of education: \tAbroad "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        default:
                                 locationOfHigestAcademicInstitutionPoint=10;
                                 gifts<<"\n(10) Location of education: \tDefault "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
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
                                 thinkingPatternPoint=700 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tConvergent"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 2:
                                 thinkingPatternPoint=600 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tDivergent"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 3:
                                 thinkingPatternPoint=500 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tCritical"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 4:
                                 thinkingPatternPoint=400 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tCreative"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 5:
                                 thinkingPatternPoint=300 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tSequential"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 6:
                                 thinkingPatternPoint=200 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tHolistic"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                      	default:
                                 thinkingPatternPoint=100 % (int) age;
                                 gifts<<"\n(11) Thinking Pattern: \tDefault"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
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
                                 highestPossibleFuturePoint=100; 
                                 gifts<<"\n(12) Predicted Future: \tGoal oriented"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 2:
                                 highestPossibleFuturePoint=96; 
                                 gifts<<"\n(12) Predicted Future: \tGet high no matter what"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 3:
                                 highestPossibleFuturePoint=93; 
                                 gifts<<"\n(12) Predicted Future: \tOrganized decency"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 4:
                                 highestPossibleFuturePoint=90; 
                                 gifts<<"\n(12) Predicted Future: \tModerate"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 5:
                                 highestPossibleFuturePoint=80; 
                                 gifts<<"\n(12) Predicted Future: \tAnything will do"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 6:
                                 highestPossibleFuturePoint=70; 
                                 gifts<<"\n(12) Predicted Future: \tClassical and conventional"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 7:
                                 highestPossibleFuturePoint=60; 
                                 gifts<<"\n(12) Predicted Future: \tFailed to convince"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        default:
                                 highestPossibleFuturePoint=5;
                                 gifts<<"\n(12) Predicted Future: \tDefault"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                }

	cout<<"\n(13) Number of Language knows\n";
        cin>>numberOfLanguageKnows;
        gifts<<"\n(13) Number of language knows: \t"<<numberOfLanguageKnows<<endl;

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
                                 identicalQualityPoint=100; 
                                 gifts<<"\n(14) Identical quality of awareness: \torganism consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 2:
                                 identicalQualityPoint=96; 
                                 gifts<<"\n(14) Identical quality of awareness: \tcontrol consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 3:
                                 identicalQualityPoint=93; 
                                 gifts<<"\n(14) Identical quality of awareness: \tconsciousness of"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 4:
                                 identicalQualityPoint=90; 
                                 gifts<<"\n(14) Identical quality of awareness: \tstate/event consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 5:
                                 identicalQualityPoint=80; 
                                 gifts<<"\n(14) Identical quality of awareness: \treportability"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 6:
                                 identicalQualityPoint=70; 
                                 gifts<<"\n(14) Identical quality of awareness: \tintrospective consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 7:
                                 identicalQualityPoint=60; 
                                 gifts<<"\n(14) Identical quality of awareness: \tsubjective consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 8:
                                 identicalQualityPoint=50; 
                                 gifts<<"\n(14) Identical quality of awareness: \tself-consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        default:
                                 identicalQualityPoint=5;
                                 gifts<<"\n(14) Identical quality of awareness: \tDefault"<<"\tPoint: "<<identicalQualityPoint<<endl;
                }

	cout<<"\n(15) Total Crowd in all events attended till now: \n";
        cin>>totalEstimatedAttendeeInAllEvents;
        totalEstimatedAttendeeInAllEventsPoint= totalEstimatedAttendeeInAllEvents% (int) age;
        gifts<<"\n(15) Total Crowd in all events attended till now: \t"<<totalEstimatedAttendeeInAllEvents<<"\tPoint: "<<totalEstimatedAttendeeInAllEventsPoint<<endl;
        
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
                                 traditionPoint= 500 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tAfrican"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 2:
                                 traditionPoint= 1000 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tAnalytic"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 3:
                                 traditionPoint= 900 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tAristotelian"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 4:
                                 traditionPoint= 300 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tBuddhist"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 5:
                                 traditionPoint= 800 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tChinese"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 6:
                                 traditionPoint= 700 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tChristian"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 7:
                                 traditionPoint= 600 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tContinental"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 8:
                                 traditionPoint= 400 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tExistentialism"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 9:
                                 traditionPoint= 750 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tHindu"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 10:
                                 traditionPoint= 200 % (int) age;  
                                 gifts<<"\n(16) Tradition: \tJain"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 11:
                                 traditionPoint= 950 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tJewish"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 12:
                                 traditionPoint= 650 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tPragmatism"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 13:
                                 traditionPoint= 550 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tEastern"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 14:
                                 traditionPoint= 450 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tIslamic"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 15:
                                 traditionPoint= 350 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tPlatonic"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 16:
                                 traditionPoint= 911 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tWestern"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        default:
                                 traditionPoint=100 % (int) age;
                                 gifts<<"\n(16) Tradition: \tDefault"<<"\tPoint: "<<traditionPoint<<endl;
                }

	cout<<"\n(17) Philosophy"
		"\n\t Epistemology ->Press 1"
		"\n\t Metaphysics ->Press 2"
		"\n\t Logic ->Press 3"
		"\n\t Ethics ->Press 4"
		"\n\t Aesthetics ->Press 5"
		"\n\t Other ->Press 6\n";
        cin>>philosophy;
		switch(philosophy) {
                        case 1:
                                 philosophyPoint=500  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tEpistemology"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 2:
                                 philosophyPoint=400  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tMetaphysics"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 3:
                                 philosophyPoint=300  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tLogic"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 4:
                                 philosophyPoint=200  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tEthics"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 5:
                                 philosophyPoint=100 % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tAesthetics"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break; 
                        default:
                                 philosophyPoint=600 % (int) age;
                                 gifts<<"\n(17) Philosophy: \tOthers"<<"\tPoint: "<<philosophyPoint<<endl;
                }

	cout<<"\n(18-A) Estimate number of real friends\n";
        cin>>numberofFriend;
        gifts<<"\n(18-A) Estimate number of real friends: \t"<<numberofFriend<<endl;
        
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
                "\t Underclass -> Press 12\n";
        cin>>averageClassofFriendCircle;
		switch(averageClassofFriendCircle) {
                        case 1:
                                 averageClassofFriendCirclePoint=100; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tElite"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 2:
                                 averageClassofFriendCirclePoint=96; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tAristocracy"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 3:
                                 averageClassofFriendCirclePoint=93; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tOligarchy"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 4:
                                 averageClassofFriendCirclePoint=90; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tRuling class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 5:
                                 averageClassofFriendCirclePoint=80; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tMiddle class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 6:
                                 averageClassofFriendCirclePoint=70; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tUpper middle class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 7:
                                 averageClassofFriendCirclePoint=60; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tLower middle class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 8:
                                 averageClassofFriendCirclePoint=50; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tBourgeoisie"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 9:
                                 averageClassofFriendCirclePoint=40; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tWorking class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 10:
                                 averageClassofFriendCirclePoint=30; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tProletariat"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 11:
                                 averageClassofFriendCirclePoint=20; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tPrecarity"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 12:
                                 averageClassofFriendCirclePoint=10; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tUnder class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        default:
                                 averageClassofFriendCirclePoint=5;
                                 gifts<<"\n(18-B) Average Class of friend circle: \tOthers"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                }

        weightOfFriendCircle=(numberofFriend*averageClassofFriendCirclePoint)%100;
        gifts<<"\n(18-C) Weight of friend circle: "<<weightOfFriendCircle<<endl;

	cout<<"\n(19-A) Estimate number of real colleagues\n";
	cin>>numberofColleagues;
    gifts<<"\n(19-A) Estimate number of real colleagues: \t"<<numberofColleagues<<endl;

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
                                 averageClassofColleagueCirclePoint=100; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tElite"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 2:
                                 averageClassofColleagueCirclePoint=96; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tAristocracy"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 3:
                                 averageClassofColleagueCirclePoint=93; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tOligarchy"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 4:
                                 averageClassofColleagueCirclePoint=90; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tRuling class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 5:
                                 averageClassofColleagueCirclePoint=80; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tMiddle class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 6:
                                 averageClassofColleagueCirclePoint=70; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tUpper middle class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 7:
                                 averageClassofColleagueCirclePoint=60; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tLower middle class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;                                 
                                 break;
                        case 8:
                                 averageClassofColleagueCirclePoint=50; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tBourgeoisie"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 9:
                                 averageClassofColleagueCirclePoint=40; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tWorking class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 10:
                                 averageClassofColleagueCirclePoint=30; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tProletariat"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 11:
                                 averageClassofColleagueCirclePoint=20; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tPrecarity"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 12:
                                 averageClassofColleagueCirclePoint=10; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tUnder class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        default:
                                 averageClassofColleagueCirclePoint=5;
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tOthers"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;

                }

        weightOfColleaguesCircle=(numberofColleagues*averageClassofColleagueCirclePoint)%100;
        gifts<<"\n(19-C) Weight of colleagues circle: "<<weightOfColleaguesCircle<<endl;
    
	cout<<"\n(20) Reaction Level"
                "\n\t Fast ->Press 1"
                "\n\t Moderate ->Press 2"
                "\n\t Steady ->Press 3"
                "\n\t Slow ->Press 4"
                "\n\t Incompatible ->Press 5\n";        
	cin>>reactionLevel;
		switch(reactionLevel) {
                        case 1:
                                 reactionLevelPoint=100; 
                                 gifts<<"\n(20) Reaction Level: \tFast"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 2:
                                 reactionLevelPoint=96; 
                                 gifts<<"\n(20) Reaction Level: \tModerate"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 3:
                                 reactionLevelPoint=93; 
                                 gifts<<"\n(20) Reaction Level: \tSteady"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 4:
                                 reactionLevelPoint=90; 
                                 gifts<<"\n(20) Reaction Level: \tSlow"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 5:
                                 reactionLevelPoint=80; 
                                 gifts<<"\n(20) Reaction Level: \tIncompatible"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        default:
                                 reactionLevelPoint=5;
                                 gifts<<"\n(20) Reaction Level: \tDefault"<<"\tPoint: "<<reactionLevelPoint<<endl;
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
                        	responseLevelPoint=100; 
                            gifts<<"\n(21) Response Level: \tFast"<<"\tPoint: "<<responseLevelPoint<<endl;
                            break;
                        case 2:
                                responseLevelPoint=80; 
                                gifts<<"\n(21) Response Level: \tModerate"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        case 3:
                                responseLevelPoint=60; 
                                gifts<<"\n(21) Response Level: \tSteady"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        case 4:
                                responseLevelPoint=40; 
                                gifts<<"\n(21) Response Level: \tSlow"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        case 5:
                                responseLevelPoint=20; 
                                gifts<<"\n(21) Response Level: \tIncompatible"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        default:
                                responseLevelPoint=10;
                                gifts<<"\n(21) Response Level: \tOthers"<<"\tPoint: "<<responseLevelPoint<<endl;
                }

	cout<<"\n(22) Current Psychological Status"
		"\n\t sanguine (enthusiastic, active, and social) ->Press 1"
		"\n\t choleric (independent, decisive, goal oriented) -Press 2"
		"\n\t melancholic (analytical, detail oriented, deep thinker and feeler) ->Press 3"
		"\n\t phlegmatic (relaxed, peaceful, quiet) ->Press 4 \n";
	cin>>currentPshychology;
		
		switch(currentPshychology) {
                        case 1:
                                currentPshychologyPoint=100 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tsanguine (enthusiastic, active, and social)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                        case 2:
                                currentPshychologyPoint=96 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tcholeric (independent, decisive, goal oriented)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                        case 3:
                                currentPshychologyPoint=100 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tmelancholic (analytical, detail oriented, deep thinker and feeler)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                        case 4:
                                currentPshychologyPoint=90 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tphlegmatic (relaxed, peaceful, quiet)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                       default:
                       		currentPshychologyPoint=5 % (int) age;
                            gifts<<"\n(22) Current Psychological Status: \tDefault and Systematic"<<"\tPoint: "<<currentPshychologyPoint<<endl;
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

    ofstream gifts;
    gifts.open ("gifts.txt",ios::app);

    cout<<"\nDATA ABOUT YOURSELF"
          "\n###################\n";
	//Input about giver
    gifts<<"\nDATA ABOUT YOURSELF"
          "\n###################\n";
    
	//Input for the person who you want to gift
	cout<<"\n(1) Age: \n";
	cin>>age;
		
		//Age Point out of 100 
		agePoint=(int)age%100;
        
	gifts<<"\n(1) Age: "<<age <<"\tAge Point: "<<agePoint <<endl;

	cout<<"\n(2) Gender [m/f/t]: \n";
	cin>>gender;

		//Gender Point out of 100
		if(gender=="m"||gender=="M")
			genderPoint=80;
		else if(gender=="f"||gender=="F")
                        genderPoint=90;
		else
			genderPoint=71;

	gifts<<"\n(2) Gender: "<<gender <<"\tGender Point: "<<genderPoint <<endl;
        
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
    				characterPoint=90; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
  			case _("dynamic"):
    				 characterPoint=80; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                     break;
			case _("flat"):
                    characterPoint=75; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("foil"):
                    characterPoint=70; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("round"):
                    characterPoint=65; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("static"):
                    characterPoint=60; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("stock"):
                    characterPoint=50; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("protagonist"):
                    characterPoint=40; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
			case _("antagonist"):
                    characterPoint=85; 
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
                    break;
  			default:
                    characterPoint=20;
                    gifts<<"\n(3) Character: "<<character <<"\tCharacter Point: "<<characterPoint<<endl;
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
                            personalityPoint=1000 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                            
                        case _("mechanic"):
                            personalityPoint=550 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;

                        case _("nurturer"):
                            personalityPoint=800 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;

                        case _("artist"):
                            personalityPoint=700 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;

                        case _("protector"):
                            personalityPoint=600 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;                            
                            break;
                        case _("idealist"):
                            personalityPoint=100 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("scientist"):
                            personalityPoint=500 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                             break;
                        case _("thinker"):
                            personalityPoint=950 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                             break;
                        case _("doer"):
                            personalityPoint=650 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                             break;
                        case _("guardian"):
                            personalityPoint=400 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("performer"):
                            personalityPoint=300 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("caregiver"):
                            personalityPoint=750 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("inspirer"):
                            personalityPoint=850 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("giver"):
                            personalityPoint=900 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("visionary"):
                            personalityPoint=350 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        case _("executive"):
                            personalityPoint=200 %(int)age; 
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
                            break;
                        default:
                            personalityPoint=50 %(int)age;
                            gifts<<"\n(4) Personality: "<<personality <<"\tPersonality Point: "<<personalityPoint<<endl;
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
		"\t Working Class -> Press 9\n"
		"\t Proletariat -> Press 10\n"
		"\t Precarity -> Press 11\n"
		"\t Under class -> Press 12\n";
	cin>>familyBackground;

		switch(familyBackground) {
                        case 1:
                                familyBackgroundPoint=100; 
                                gifts<<"\n(5) Family Background: \tElite"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                break;
                        case 2:
                                 familyBackgroundPoint=96; 
                                 gifts<<"\n(5) Family Background: \tAristocracy"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 3:
                                 familyBackgroundPoint=93; 
                                 gifts<<"\n(5) Family Background: \tOligarchy"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 4:
                                 familyBackgroundPoint=90; 
                                 gifts<<"\n(5) Family Background: \tRuling class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 5:
                                 familyBackgroundPoint=80; 
                                 gifts<<"\n(5) Family Background: \tMiddle class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 6:
                                 familyBackgroundPoint=70; 
                                 gifts<<"\n(5) Family Background: \tUpper middle class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 7:
                                 familyBackgroundPoint=60; 
                                 gifts<<"\n(5) Family Background: \tLower middle class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 8:
                                 familyBackgroundPoint=50; 
                                 gifts<<"\n(5) Family Background: \tBourgeoisie"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 9:
                                 familyBackgroundPoint=40; 
                                 gifts<<"\n(5) Family Background: \tWorking class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 10:
                                 familyBackgroundPoint=30; 
                                 gifts<<"\n(5) Family Background: \tProletariat"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 11:
                                 familyBackgroundPoint=20; 
                                 gifts<<"\n(5) Family Background: \tPrecarity"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        case 12:
                                 familyBackgroundPoint=10; 
                                 gifts<<"\n(5) Family Background: \tUnder class"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
                                 break;
                        default:
                                 familyBackgroundPoint=5;
                                 gifts<<"\n(5) Family Background: \tDefault"<<"\tFamily Background Point: "<<familyBackgroundPoint<<endl;
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
                                 professionPoint=55; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("corporate"):
                                 professionPoint=35; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("academician"):
                                 professionPoint=80; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("government"):
                                 professionPoint=100; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("ngo"):
                                 professionPoint=50; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("media"):
                                 professionPoint=70; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("research"):
                                 professionPoint=40; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("investor"):
                                 professionPoint=90; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("restaurant"):
                                 professionPoint=45; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("realestate"):
                                 professionPoint=30; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("mechanic"):
                                 professionPoint=35; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("health"):
                                 professionPoint=60; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("finance"):
                                 professionPoint=95; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("law"):
                                 professionPoint=85; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        case _("religion"):
                                 professionPoint=75; 
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
                                 break;
                        default:
                                 professionPoint=50;
                                 gifts<<"\n(6) Profession: "<<profession <<"\tProfession Point: "<<professionPoint<<endl;
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
                                 designationPoint=96; 
                                 gifts<<"\n(7) Current designation: \tCo-founder"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 2:
                                 designationPoint=84; 
                                 gifts<<"\n(7) Current designation: \tTrustees" <<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 3:
                                 designationPoint=72; 
                                 gifts<<"\n(7) Current designation: \tPolicy Maker"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 4:
                                 designationPoint=60; 
                                 gifts<<"\n(7) Current designation: \tStrategy Maker" <<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 5:
                                 designationPoint=48; 
                                 gifts<<"\n(7) Current designation: \tManagement"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 6:
                                 designationPoint=36; 
                                 gifts<<"\n(7) Current designation: \tExecutives"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 7:
                                 designationPoint=24; 
                                 gifts<<"\n(7) Current designation: \tClarks"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break;
                        case 8:
                                 designationPoint=12; 
                                 gifts<<"\n(7) Current designation: \tOthers"<<"\tDesignation Point: "<<designationPoint<<endl;
                                 break; 
                        default:
                                 designationPoint=8;
                                 gifts<<"\n(7) Current designation: \tDefault"<<"\tDesignation Point: "<<designationPoint<<endl;
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
                                 influencePoint=90; 
                                 gifts<<"\n(8) Level of influence: \tConstant influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 2:
                                 influencePoint=80; 
                                 gifts<<"\n(8) Level of influence: \tPolitical influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 3:
                                 influencePoint=71; 
                                 gifts<<"\n(8) Level of influence: \tEconomic and financial influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 4:
                                 influencePoint=60; 
                                 gifts<<"\n(8) Level of influence: \tSocial influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 5:
                                 influencePoint=50; 
                                 gifts<<"\n(8) Level of influence: \tTrying to influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        case 6:
                                 influencePoint=40; 
                                 gifts<<"\n(8) Level of influence: \tNever try to influence"<<"\tInfluence Point: "<<influencePoint<<endl;
                                 break;
                        default:
                                 influencePoint=5;
                                 gifts<<"\n(8) Level of influence: \tDefault"<<"\tInfluence Point: "<<influencePoint<<endl;
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
                                 highestDegreePoint=60; 
                                 gifts<<"\n(9) Highest Degree: \tSchool "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        case 2:
                                 highestDegreePoint=70; 
                                 gifts<<"\n(9) Highest Degree: \tCollege "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        case 3:
                                 highestDegreePoint=80; 
                                 gifts<<"\n(9) Highest Degree: \tUndergraduate "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        case 4:
                                 highestDegreePoint=100; 
                                 gifts<<"\n(9) Highest Degree: \tPostgraduate "<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                                 break;
                        default:
                                 highestDegreePoint=10;
                                 gifts<<"\n(9) Highest Degree: \tDefault"<<"\tHighest Degree Point: "<<highestDegreePoint<<endl;
                }

	cout<<"\n(10) Location of your highest reachable location for education\n"
		"\n\t Home town ->Press 1"
		"\n\t Home Country ->Press 2"
		"\n\t Self and at home ->Press 3"
		"\n\t Abroad ->Press 4\n";
        cin>>locationOfHigestAcademicInstitution;
		switch(locationOfHigestAcademicInstitution) {
                        case 1:
                                 locationOfHigestAcademicInstitutionPoint=50; 
                                 gifts<<"\n(10) Location of education:\tHome Town "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        case 2:
                                 locationOfHigestAcademicInstitutionPoint=80; 
                                 gifts<<"\n(10) Location of education:\tHome Country "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        case 3:
                                 locationOfHigestAcademicInstitutionPoint=10; 
                                 gifts<<"\n(10) Location of education: \tSelf and at home "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        case 4:
                                 locationOfHigestAcademicInstitutionPoint=100; 
                                 gifts<<"\n(10) Location of education: \tAbroad "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
                                 break;
                        default:
                                 locationOfHigestAcademicInstitutionPoint=10;
                                 gifts<<"\n(10) Location of education: \tDefault "<<"\tLocation of education Point: "<<locationOfHigestAcademicInstitutionPoint<<endl;
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
                                 thinkingPatternPoint=700 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tConvergent"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 2:
                                 thinkingPatternPoint=600 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tDivergent"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 3:
                                 thinkingPatternPoint=500 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tCritical"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 4:
                                 thinkingPatternPoint=400 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tCreative"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 5:
                                 thinkingPatternPoint=300 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tSequential"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                        case 6:
                                 thinkingPatternPoint=200 % (int) age; 
                                 gifts<<"\n(11) Thinking Pattern: \tHolistic"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
                                 break;
                      	default:
                                 thinkingPatternPoint=100 % (int) age;
                                 gifts<<"\n(11) Thinking Pattern: \tDefault"<<"\tThinking Pattern Point: "<<thinkingPatternPoint<<endl;
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
                                 highestPossibleFuturePoint=100; 
                                 gifts<<"\n(12) Predicted Future: \tGoal oriented"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 2:
                                 highestPossibleFuturePoint=96; 
                                 gifts<<"\n(12) Predicted Future: \tGet high no matter what"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 3:
                                 highestPossibleFuturePoint=93; 
                                 gifts<<"\n(12) Predicted Future: \tOrganized decency"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 4:
                                 highestPossibleFuturePoint=90; 
                                 gifts<<"\n(12) Predicted Future: \tModerate"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 5:
                                 highestPossibleFuturePoint=80; 
                                 gifts<<"\n(12) Predicted Future: \tAnything will do"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 6:
                                 highestPossibleFuturePoint=70; 
                                 gifts<<"\n(12) Predicted Future: \tClassical and conventional"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        case 7:
                                 highestPossibleFuturePoint=60; 
                                 gifts<<"\n(12) Predicted Future: \tFailed to convince"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                                 break;
                        default:
                                 highestPossibleFuturePoint=5;
                                 gifts<<"\n(12) Predicted Future: \tDefault"<<"\tPoint: "<<highestPossibleFuturePoint<<endl;
                }

	cout<<"\n(13) Number of Language knows\n";
        cin>>numberOfLanguageKnows;
        gifts<<"\n(13) Number of language knows: \t"<<numberOfLanguageKnows<<endl;

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
                                 identicalQualityPoint=100; 
                                 gifts<<"\n(14) Identical quality of awareness: \torganism consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 2:
                                 identicalQualityPoint=96; 
                                 gifts<<"\n(14) Identical quality of awareness: \tcontrol consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 3:
                                 identicalQualityPoint=93; 
                                 gifts<<"\n(14) Identical quality of awareness: \tconsciousness of"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 4:
                                 identicalQualityPoint=90; 
                                 gifts<<"\n(14) Identical quality of awareness: \tstate/event consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 5:
                                 identicalQualityPoint=80; 
                                 gifts<<"\n(14) Identical quality of awareness: \treportability"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 6:
                                 identicalQualityPoint=70; 
                                 gifts<<"\n(14) Identical quality of awareness: \tintrospective consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 7:
                                 identicalQualityPoint=60; 
                                 gifts<<"\n(14) Identical quality of awareness: \tsubjective consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        case 8:
                                 identicalQualityPoint=50; 
                                 gifts<<"\n(14) Identical quality of awareness: \tself-consciousness"<<"\tPoint: "<<identicalQualityPoint<<endl;
                                 break;
                        default:
                                 identicalQualityPoint=5;
                                 gifts<<"\n(14) Identical quality of awareness: \tDefault"<<"\tPoint: "<<identicalQualityPoint<<endl;
                }

	cout<<"\n(15) Total Crowd in all events attended till now: \n";
        cin>>totalEstimatedAttendeeInAllEvents;
        totalEstimatedAttendeeInAllEventsPoint= totalEstimatedAttendeeInAllEvents% (int) age;
        gifts<<"\n(15) Total Crowd in all events attended till now: \t"<<totalEstimatedAttendeeInAllEvents<<"\tPoint: "<<totalEstimatedAttendeeInAllEventsPoint<<endl;
        
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
                                 traditionPoint= 500 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tAfrican"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 2:
                                 traditionPoint= 1000 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tAnalytic"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 3:
                                 traditionPoint= 900 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tAristotelian"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 4:
                                 traditionPoint= 300 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tBuddhist"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 5:
                                 traditionPoint= 800 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tChinese"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 6:
                                 traditionPoint= 700 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tChristian"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 7:
                                 traditionPoint= 600 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tContinental"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 8:
                                 traditionPoint= 400 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tExistentialism"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 9:
                                 traditionPoint= 750 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tHindu"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 10:
                                 traditionPoint= 200 % (int) age;  
                                 gifts<<"\n(16) Tradition: \tJain"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 11:
                                 traditionPoint= 950 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tJewish"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 12:
                                 traditionPoint= 650 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tPragmatism"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 13:
                                 traditionPoint= 550 % (int) age ; 
                                 gifts<<"\n(16) Tradition: \tEastern"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 14:
                                 traditionPoint= 450 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tIslamic"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 15:
                                 traditionPoint= 350 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tPlatonic"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        case 16:
                                 traditionPoint= 911 % (int) age; 
                                 gifts<<"\n(16) Tradition: \tWestern"<<"\tPoint: "<<traditionPoint<<endl;
                                 break;
                        default:
                                 traditionPoint=100 % (int) age;
                                 gifts<<"\n(16) Tradition: \tDefault"<<"\tPoint: "<<traditionPoint<<endl;
                }

	cout<<"\n(17) Philosophy"
		"\n\t Epistemology ->Press 1"
		"\n\t Metaphysics ->Press 2"
		"\n\t Logic ->Press 3"
		"\n\t Ethics ->Press 4"
		"\n\t Aesthetics ->Press 5"
		"\n\t Other ->Press 6\n";
        cin>>philosophy;
		switch(philosophy) {
                        case 1:
                                 philosophyPoint=500  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tEpistemology"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 2:
                                 philosophyPoint=400  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tMetaphysics"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 3:
                                 philosophyPoint=300  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tLogic"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 4:
                                 philosophyPoint=200  % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tEthics"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break;
                        case 5:
                                 philosophyPoint=100 % (int) age; 
                                 gifts<<"\n(17) Philosophy: \tAesthetics"<<"\tPoint: "<<philosophyPoint<<endl;
                                 break; 
                        default:
                                 philosophyPoint=600 % (int) age;
                                 gifts<<"\n(17) Philosophy: \tOthers"<<"\tPoint: "<<philosophyPoint<<endl;
                }

	cout<<"\n(18-A) Estimate number of real friends\n";
        cin>>numberofFriend;
        gifts<<"\n(18-A) Estimate number of real friends: \t"<<numberofFriend<<endl;
        
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
                "\t Underclass -> Press 12\n";
        cin>>averageClassofFriendCircle;
		switch(averageClassofFriendCircle) {
                        case 1:
                                 averageClassofFriendCirclePoint=100; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tElite"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 2:
                                 averageClassofFriendCirclePoint=96; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tAristocracy"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 3:
                                 averageClassofFriendCirclePoint=93; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tOligarchy"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 4:
                                 averageClassofFriendCirclePoint=90; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tRuling class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 5:
                                 averageClassofFriendCirclePoint=80; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tMiddle class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 6:
                                 averageClassofFriendCirclePoint=70; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tUpper middle class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 7:
                                 averageClassofFriendCirclePoint=60; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tLower middle class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 8:
                                 averageClassofFriendCirclePoint=50; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tBourgeoisie"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 9:
                                 averageClassofFriendCirclePoint=40; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tWorking class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 10:
                                 averageClassofFriendCirclePoint=30; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tProletariat"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 11:
                                 averageClassofFriendCirclePoint=20; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tPrecarity"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        case 12:
                                 averageClassofFriendCirclePoint=10; 
                                 gifts<<"\n(18-B) Average Class of friend circle: \tUnder class"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                                 break;
                        default:
                                 averageClassofFriendCirclePoint=5;
                                 gifts<<"\n(18-B) Average Class of friend circle: \tOthers"<<"\tPoint: "<<averageClassofFriendCirclePoint<<endl;
                }

        weightOfFriendCircle=(numberofFriend*averageClassofFriendCirclePoint)%100;
        gifts<<"\n(18-C) Weight of friend circle: "<<weightOfFriendCircle<<endl;

	cout<<"\n(19-A) Estimate number of real colleagues\n";
	cin>>numberofColleagues;
    gifts<<"\n(19-A) Estimate number of real colleagues: \t"<<numberofColleagues<<endl;

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
                                 averageClassofColleagueCirclePoint=100; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tElite"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 2:
                                 averageClassofColleagueCirclePoint=96; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tAristocracy"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 3:
                                 averageClassofColleagueCirclePoint=93; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tOligarchy"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 4:
                                 averageClassofColleagueCirclePoint=90; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tRuling class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 5:
                                 averageClassofColleagueCirclePoint=80; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tMiddle class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 6:
                                 averageClassofColleagueCirclePoint=70; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tUpper middle class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 7:
                                 averageClassofColleagueCirclePoint=60; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tLower middle class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;                                 
                                 break;
                        case 8:
                                 averageClassofColleagueCirclePoint=50; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tBourgeoisie"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 9:
                                 averageClassofColleagueCirclePoint=40; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tWorking class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 10:
                                 averageClassofColleagueCirclePoint=30; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tProletariat"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 11:
                                 averageClassofColleagueCirclePoint=20; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tPrecarity"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        case 12:
                                 averageClassofColleagueCirclePoint=10; 
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tUnder class"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;
                                 break;
                        default:
                                 averageClassofColleagueCirclePoint=5;
                                 gifts<<"\n(19-B) Average Class of colleagues circle: \tOthers"<<"\tPoint: "<<averageClassofColleagueCirclePoint<<endl;

                }

        weightOfColleaguesCircle=(numberofColleagues*averageClassofColleagueCirclePoint)%100;
        gifts<<"\n(19-C) Weight of colleagues circle: "<<weightOfColleaguesCircle<<endl;
    
	cout<<"\n(20) Reaction Level"
                "\n\t Fast ->Press 1"
                "\n\t Moderate ->Press 2"
                "\n\t Steady ->Press 3"
                "\n\t Slow ->Press 4"
                "\n\t Incompatible ->Press 5\n";        
	cin>>reactionLevel;
		switch(reactionLevel) {
                        case 1:
                                 reactionLevelPoint=100; 
                                 gifts<<"\n(20) Reaction Level: \tFast"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 2:
                                 reactionLevelPoint=96; 
                                 gifts<<"\n(20) Reaction Level: \tModerate"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 3:
                                 reactionLevelPoint=93; 
                                 gifts<<"\n(20) Reaction Level: \tSteady"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 4:
                                 reactionLevelPoint=90; 
                                 gifts<<"\n(20) Reaction Level: \tSlow"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        case 5:
                                 reactionLevelPoint=80; 
                                 gifts<<"\n(20) Reaction Level: \tIncompatible"<<"\tPoint: "<<reactionLevelPoint<<endl;
                                 break;
                        default:
                                 reactionLevelPoint=5;
                                 gifts<<"\n(20) Reaction Level: \tDefault"<<"\tPoint: "<<reactionLevelPoint<<endl;
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
                        	responseLevelPoint=100; 
                            gifts<<"\n(21) Response Level: \tFast"<<"\tPoint: "<<responseLevelPoint<<endl;
                            break;
                        case 2:
                                responseLevelPoint=80; 
                                gifts<<"\n(21) Response Level: \tModerate"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        case 3:
                                responseLevelPoint=60; 
                                gifts<<"\n(21) Response Level: \tSteady"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        case 4:
                                responseLevelPoint=40; 
                                gifts<<"\n(21) Response Level: \tSlow"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        case 5:
                                responseLevelPoint=20; 
                                gifts<<"\n(21) Response Level: \tIncompatible"<<"\tPoint: "<<responseLevelPoint<<endl;
                                break;
                        default:
                                responseLevelPoint=10;
                                gifts<<"\n(21) Response Level: \tOthers"<<"\tPoint: "<<responseLevelPoint<<endl;
                }

	cout<<"\n(22) Current Psychological Status"
		"\n\t sanguine (enthusiastic, active, and social) ->Press 1"
		"\n\t choleric (independent, decisive, goal oriented) -Press 2"
		"\n\t melancholic (analytical, detail oriented, deep thinker and feeler) ->Press 3"
		"\n\t phlegmatic (relaxed, peaceful, quiet) ->Press 4 \n";
	cin>>currentPshychology;
		
		switch(currentPshychology) {
                        case 1:
                                currentPshychologyPoint=100 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tsanguine (enthusiastic, active, and social)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                        case 2:
                                currentPshychologyPoint=96 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tcholeric (independent, decisive, goal oriented)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                        case 3:
                                currentPshychologyPoint=100 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tmelancholic (analytical, detail oriented, deep thinker and feeler)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                        case 4:
                                currentPshychologyPoint=90 % (int) age; 
                                gifts<<"\n(22) Current Psychological Status: \tphlegmatic (relaxed, peaceful, quiet)"<<"\tPoint: "<<currentPshychologyPoint<<endl;
                                break;
                       default:
                       		currentPshychologyPoint=5 % (int) age;
                            gifts<<"\n(22) Current Psychological Status: \tDefault and Systematic"<<"\tPoint: "<<currentPshychologyPoint<<endl;
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
            grade="A+ Grade + Worthy, Extraordinary, Exclusively for Public Attention";
        }
        else if(point>=75 && point<=80)
        {
            grade="A Grade + Outstanding, Surprise, Precious";
        }
        else if(point>=70 && point<=75)
        {
            grade="A- Grade + Well Designed, Classifical, Proud to have";
        }
        else if(point>=65 && point<=70)
        {
            grade="B+ Grade + Very Good in all perspectives and taste";
        }
        else if(point>=60 && point<=65)
        {
            grade="B Grade + Very Good in all perspective";
        }
        else if(point>=55 && point<=60)
        {
            grade="B- Grade + Very Good and Seek Attentions";
        }
        else if(point>=50 && point<=55)
        {
            grade="C+ Grade + Satisfactory and Pay a good treat";
        }
        else if(point>=45 && point<=50)
        {
            grade="C Grade + Satisfactory and Remarkable in size";
        }
        else if(point>=40 && point<=45)
        {
            grade="D Grade + Maginal Line and Seek for highest quality";
        }
        else
        {
            grade="F Grade + Below Average and Pay Concisely";
        }
    return grade;
}

int main()
{
	
    double personsScore;
    double giversScore;
    double currencyYouWantToSpend;
    string giftGrade;
    
    ofstream gifts;
    gifts.open ("gifts.txt",ios::app);

    gifts<<"\n***********************************************************"
        "\n         GIFTS CHOOSING CATEGORIES AND ESTIMATE PRICE"
          "\n***********************************************************\n";

    personsScore=personsPerimetre();
    cout<<"\nGIFTEE'S PATTERNED SCORE"
          "\n************************\n";
    cout<<personsScore<<endl;

    gifts<<"\nGIFTEE'S PATTERNED SCORE"
          "\n************************\n";
    gifts<<personsScore<<endl;

    giversScore=giversPerimetre();
    cout<<"\nYOUR PATTERNED SCORE"
          "\n********************\n";
    cout<<giversScore<<endl;
    gifts<<"\nYOUR PATTERNED SCORE"
          "\n********************\n";
    gifts<<giversScore<<endl;
    
    currencyYouWantToSpend=currency(personsScore,giversScore);
    giftGrade=grade(fmod(personsScore,giversScore));
    
    cout<<"\n***********************"
          "\n         SCORES"
          "\n***********************\n";
    cout<<"Giftee's Score: \t"<<personsScore<<endl;
    cout<<"Your Score:: \t\t"<<giversScore<<endl;

    cout<<"\nRECOMMENDATIONS"
          "\n***************\n";
    cout<<"Estimate currency you may expense (MINIMUM): \t $"<<currencyYouWantToSpend<<endl;
    cout<<"Minimum quality of the GIFT: \t grade "<<giftGrade<<endl;

    cout<<"\n*******************************************************************************************************************"
          "\n      GIFT MEANS MAKING MEMORIES & FOLLOW UP IMAGE AND REPUTATION - SO WORTH MUCH TO LEARN THE PERSPECTIVES"
          "\n*******************************************************************************************************************\n";

          
    gifts<<"\n***********************"
          "\n         SCORES"
          "\n***********************\n";
    gifts<<"Giftee's Score: \t"<<personsScore<<endl;
    gifts<<"Your Score:: \t\t"<<giversScore<<endl;

    gifts<<"\nRECOMMENDATIONS"
          "\n***************\n";
    gifts<<"Estimate currency you may expense (MINIMUM): \t $"<<currencyYouWantToSpend<<endl;
    gifts<<"Minimum quality of the GIFT: \t grade "<<giftGrade<<endl;

    gifts<<"\n*******************************************************************************************************************"
          "\n      GIFT MEANS MAKING MEMORIES & FOLLOW UP IMAGE AND REPUTATION - SO WORTH MUCH TO LEARN THE PERSPECTIVES"
          "\n*******************************************************************************************************************\n";

	return 0;
}
