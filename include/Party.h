#pragma once
#include <string>
#include <vector>



using std::string;
using std::vector;


class JoinPolicy;
class Simulation;
class Agent;

enum State
{
    Waiting,
    CollectingOffers,
    Joined
};

class Party
{
public:

    Party() = default;
    Party(int id, string name, int mandates, JoinPolicy *); 
    Party(const Party &);
    Party(Party &&);
    Party &operator=(Party &&other);
    Party &operator=(const Party &other);
    ~Party();


    State getState() const;
    void setState(State state);
    int getMandates() const;
    void step(Simulation &s);
    const string &getName() const;
    int getId() const ; 
    void setOffer(const Agent &agent);
    bool alreadyOffer(int, Simulation &) const;

private:
    int mId;
    string mName;
    int mMandates;
    JoinPolicy *mJoinPolicy;
    State mState;
    int iter = -1; 
    vector<int> offers={};
};
