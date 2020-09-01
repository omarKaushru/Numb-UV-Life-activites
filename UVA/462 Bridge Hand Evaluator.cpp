///Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{

	map<char,int> cards;
	cards['2'] = 2;
	cards['3'] = 3;
	cards['4'] = 4;
	cards['5'] = 5;
	cards['6'] = 6;
	cards['7'] = 7;
	cards['8'] = 8;
	cards['9'] = 1;
	cards['T'] = 10;
	cards['J'] = 11;
	cards['Q'] = 12;
	cards['K'] = 13;
	cards['A'] = 14;

	string buffer;
	istringstream iss;
	string token;
	int score,extra_score,maximum;

	map<char,int> suits;
	map<char,int>::iterator suits_it;

	vector<string> mycards;
	vector<string>::iterator myc_it;

	map<char,bool> stopped;

	while(getline(cin,buffer)){
		stopped['S'] = false;
		stopped['H'] = false;
		stopped['D'] = false;
		stopped['C'] = false;

		score = extra_score = maximum= 0;

		//printf("%s\n",buffer.c_str());
		iss.str(buffer);
		while(iss>>token){
			mycards.push_back(token);
			suits[token[1]] ++;
			maximum = max(suits[token[1]],maximum);
			if(cards[token[0]] >10){
				score += cards[token[0]] - 10;
			}
			if(token[0] == 'A')
				stopped[token[1]] = true;
		}
		for (myc_it = mycards.begin(); myc_it!= mycards.end(); myc_it++){
			if(suits[(*myc_it)[1]]==1 && (*myc_it)[0] == 'K')
				score--;
			if(suits[(*myc_it)[1]]<=2 && (*myc_it)[0] == 'Q')
				score--;
			if(suits[(*myc_it)[1]]<=3 && (*myc_it)[0] == 'J')
				score--;

			if((*myc_it)[0]=='K' && suits[(*myc_it)[1]]>1)
				stopped[(*myc_it)[1]] = true;
			if((*myc_it)[0]=='Q' && suits[(*myc_it)[1]]>2)
				stopped[(*myc_it)[1]] = true;
		}
		for(suits_it = suits.begin(); suits_it!=suits.end(); suits_it++){
			if(suits_it->second == 2){
				extra_score ++;
			}
			if(suits_it->second == 1){
				extra_score += 2;
			}
		}
		extra_score += (4 - suits.size())*2;

		if(stopped['S'] && stopped['H'] && stopped['D'] && stopped['C'] && (score>=16)){
			//notrump;
			printf("BID NO-TRUMP\n");
		}else if( (score + extra_score) >= 14){
			//bid in suit
			if(suits['S'] == maximum)
				token = "S";
			else if(suits['H'] == maximum)
				token = "H";
			else if(suits['D'] == maximum)
				token = "D";
			else
				token = "C";
			printf("BID %s\n",token.c_str());
		}else{
			//pass
			printf("PASS\n");
		}

		//printf("%d\n",suits['1']);
		mycards.clear();
    	suits.clear();
		iss.clear();
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

	map<char,int> cards;
	cards['2'] = 2;
	cards['3'] = 3;
	cards['4'] = 4;
	cards['5'] = 5;
	cards['6'] = 6;
	cards['7'] = 7;
	cards['8'] = 8;
	cards['9'] = 1;
	cards['T'] = 10;
	cards['J'] = 11;
	cards['Q'] = 12;
	cards['K'] = 13;
	cards['A'] = 14;

	string buffer;
	istringstream iss;
	string token;
	int score,extra_score,maximum;

	map<char,int> suits;
	map<char,int>::iterator suits_it;

	vector<string> mycards;
	vector<string>::iterator myc_it;

	map<char,bool> stopped;

	while(getline(cin,buffer)){
		stopped['S'] = false;
		stopped['H'] = false;
		stopped['D'] = false;
		stopped['C'] = false;

		score = extra_score = maximum= 0;

		//printf("%s\n",buffer.c_str());
		iss.str(buffer);
		while(iss>>token){
			mycards.push_back(token);
			suits[token[1]] ++;
			maximum = max(suits[token[1]],maximum);
			if(cards[token[0]] >10){
				score += cards[token[0]] - 10;
			}
			if(token[0] == 'A')
				stopped[token[1]] = true;
		}
		for (myc_it = mycards.begin(); myc_it!= mycards.end(); myc_it++){
			if(suits[(*myc_it)[1]]==1 && (*myc_it)[0] == 'K')
				score--;
			if(suits[(*myc_it)[1]]<=2 && (*myc_it)[0] == 'Q')
				score--;
			if(suits[(*myc_it)[1]]<=3 && (*myc_it)[0] == 'J')
				score--;

			if((*myc_it)[0]=='K' && suits[(*myc_it)[1]]>1)
				stopped[(*myc_it)[1]] = true;
			if((*myc_it)[0]=='Q' && suits[(*myc_it)[1]]>2)
				stopped[(*myc_it)[1]] = true;
		}
		for(suits_it = suits.begin(); suits_it!=suits.end(); suits_it++){
			if(suits_it->second == 2){
				extra_score ++;
			}
			if(suits_it->second == 1){
				extra_score += 2;
			}
		}
		extra_score += (4 - suits.size())*2;

		if(stopped['S'] && stopped['H'] && stopped['D'] && stopped['C'] && (score>=16)){
			//notrump;
			printf("BID NO-TRUMP\n");
		}else if( (score + extra_score) >= 14){
			//bid in suit
			if(suits['S'] == maximum)
				token = "S";
			else if(suits['H'] == maximum)
				token = "H";
			else if(suits['D'] == maximum)
				token = "D";
			else
				token = "C";
			printf("BID %s\n",token.c_str());
		}else{
			//pass
			printf("PASS\n");
		}

		//printf("%d\n",suits['1']);
		mycards.clear();
    	suits.clear();
		iss.clear();
	}
	return 0;
}
