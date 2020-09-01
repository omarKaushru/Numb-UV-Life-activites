///Accepted
#include <bits/stdc++.h>
using namespace std;class Card
{
public:
    char suit;
    int value;

    Card(char v, char c)
    {
        this->convert(v);
        this->suit = c;
    }

    //Convert the 2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, A to numbers;

    void convert(char x)
    {
        switch (x)
        {
        case 'A':
            value = 14;
            return;
        case 'K':
            value = 13;
            return;
        case 'Q':
            value = 12;
            return;
        case 'J':
            value = 11;
            return;
        case 'T':
            value = 10;
            return;
        default:
            value = x - '0';
            return;
        }
    }

    static bool cmp(const Card &A, const Card &B)
    {
        return A.value < B.value;
    }
};

enum HANDRANK
{
    HIGH_CARD, PAIR, TWO_PAIR, THREE_KIND,
    STRAIGHT, FLUSH, FULL_HOUSE, FOUR_KIND,
    STRAIGHT_FLUSH
};

class Player
{
public:
    vector<Card> card;
    HANDRANK rank;
    vector<int> values;

    Player(string s)
    {
        //cout << "," << s << ',' << endl;
        card.push_back(Card(s[0], s[1]));
        card.push_back(Card(s[3], s[4]));
        card.push_back(Card(s[6], s[7]));
        card.push_back(Card(s[9], s[10]));
        card.push_back(Card(s[12], s[13]));

        std::sort(card.begin(), card.end(), Card::cmp);
        rank = getRank();
        setValue();
    }

    bool isStraight()
    {
        for (int i = 0; i < 4; i++)
        {
            if (card[i].value + 1 != card[i + 1].value)
                return false;
        }
        return true;
    }

    bool isFlush()
    {
        for (int i = 0; i < 4; i++)
            if (card[i].suit != card[i + 1].suit)
                return false;
        return true;
    }

    bool isFourKind()
    {
        if (card[0].value == card[1].value && card[1].value == card[2].value && card[2].value == card[3].value)
            return true;
        if (card[1].value == card[2].value && card[2].value == card[3].value && card[3].value == card[4].value)
            return true;
        return false;
    }

    bool isThreeKind()
    {
        if (card[0].value == card[2].value)
            return true;
        if (card[1].value == card[3].value)
            return true;
        if (card[2].value == card[4].value)
            return true;
        return false;
    }

    int numOfPairs()
    {
        int count = 0;
        for (int i = 0; i < 4; i++)
            if (card[i].value == card[i + 1].value)
            {
                count++;
                i++;
            }
        return count;
    }

    HANDRANK getRank()
    {
        bool flag1 = isStraight();
        bool flag2 = isFlush();
        bool flag3 = isFourKind();
        bool flag4 = isThreeKind();
        int pair = numOfPairs();
        //cout << pair << endl;
        if (flag1 && flag2)
            return STRAIGHT_FLUSH;
        if (flag3)
            return FOUR_KIND;
        //Take care here, there should be 2 fake pairs here;
        //pair should not be 1;
        if (flag4 && pair == 2)
            return FULL_HOUSE;
        if (flag2)
            return FLUSH;
        if (flag1)
            return STRAIGHT;
        if (flag4)
            return THREE_KIND;
        if (pair == 2)
            return TWO_PAIR;
        if (pair == 1)
            return PAIR;
        return HIGH_CARD;
    }

    void setValue()
    {
        for (int i = 0; i < 5; i++)
            values.push_back(0);
        switch (rank)
        {
        case STRAIGHT_FLUSH:
        case STRAIGHT:
            values[0] = card[4].value;
            break;
        case FLUSH:
        case HIGH_CARD:
            for (int i = 0; i < 5; ++i)
                values[i] = card[4 - i].value;
            break;
        case FULL_HOUSE:
        case FOUR_KIND:
        case THREE_KIND:
            values[0] = card[2].value;
            break;
        case TWO_PAIR:
            //Only three position for the single card: 0, 2, 4.
            if (card[0].value != card[1].value)
            { //ex. 2 33 44
                values[0] = card[4].value;
                values[1] = card[2].value;
                values[2] = card[0].value;
            }
            else if (card[2].value != card[3].value)
            { //ex.33 4 55
                values[0] = card[4].value;
                values[1] = card[0].value;
                values[2] = card[2].value;
            }
            else
            { //ex.55 66 7
                values[0] = card[2].value;
                values[1] = card[0].value;
                values[2] = card[4].value;
            }
            break;
        case PAIR:
            int pairValue;
            for (int i = 0; i <= 3; ++i) //search pair
                if (card[i].value == card[i + 1].value)
                {
                    pairValue = card[i].value;
                    break;
                }
            values[0] = pairValue;
            for (int i = 4, r = 1; i >= 0; --i)
            { //i for card, r for values
                if (card[i].value == pairValue)
                    continue;
                values[r++] = card[i].value;
            }
            break;
        }
    }

    int compareTo(Player other)
    {
        if (rank > other.rank)
            return 1;
        if (rank < other.rank)
            return -1;
        for (int i = 0; i < 5; i++)
        {
            if (values[i] > other.values[i])
                return 1;
            if (values[i] < other.values[i])
                return -1;
        }
        return 0;
    }
};

int main(int argc, char* argv[])
{
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    string str;
    while (getline(cin, str))
    {
        Player black(str.substr(0, 14));
        Player white(str.substr(15));
        switch (black.compareTo(white))
        {
        case 1:
            cout << "Black wins." << endl;
            break;
        case -1:
            cout << "White wins." << endl;
            break;
        case 0:
            cout << "Tie." << endl;
        }
    }
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}
