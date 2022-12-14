#pragma once
#include <vector>
#include "Party.h"


using std::vector;

class Simulation;


class Graph
{
public:
    Graph(vector<Party> vertices, vector<vector<int>> edges);
    int getMandates(int partyId) const;
    int getEdgeWeight(int v1, int v2) const;
    int getNumVertices() const;
    const Party &getParty(int partyId) const;
    void partiesStep(Simulation &s);
    const vector<Party> &getAllParties() const;
    void setOfferToPartyId(Agent &,int);


private:
    vector<Party> mVertices;
    vector<vector<int>> mEdges;
};
