#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include "Resource.h"
#include <string>

using namespace std;

// Manages the campus resource inventory

class ResourceManager {
private:
    struct Node{
    Resource resources;
    Node* next;

    Node(const Resource& r) : resources(r), next (nullptr) {}
};

    Node* head;

public:
    ResourceManager();
    ~ResourceManager();

    void loadResources( string filename);
    void displayResources();
    void displayAvailability();
};

#endif // RESOURCE_MANAGER_H
