#pragma once

#include <vector>

#include "Graph.h"
#include "Agent.h"

using std::string;
using std::vector;

class Simulation
{
public:
    Simulation(Graph g, vector<Agent> agents);

    void step();
    bool shouldTerminate() const;

    const Graph &getGraph() const;
    const vector<Agent> &getAgents() const;
    const Party &getParty(int partyId) const;
    const vector<vector<int>> getPartiesByCoalitions() const;
    int getNumOfAgent();
    void addAgent(Agent &);
    const int getCoalitionSize(const int &)  ;
    void setOfferToPartyId(Agent &,int);
    const Agent &getAgentById(int);



private:
    Graph mGraph;
    vector<Agent> mAgents;
    vector<int> coalitionCounter={};
};
