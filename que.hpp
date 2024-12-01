#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cutie {
public:
    virtual string description() = 0;
    virtual int cuteness_rating() = 0;
};

class Puppy : public Cutie {
public:
    string description() override {
        return "A puppy";
    }
    int cuteness_rating() override {
        return 11; 
    }
};

class Kitty : public Cutie {
public:
    string description() override {
        return "A kitty";
    }
    int cuteness_rating() override {
        return 10;
    }
};

class PygmyMarmoset : public Cutie {
public:
    string description() override {
        return "A marmoset";
    }
    int cuteness_rating() override {
        return 9;
    }
};

class QueueTees {
private:
    vector<Cutie*> queue; 

public:
    void enqueue(Cutie& cutie) {
        queue.push_back(&cutie); 
    }

    Cutie* dequeue() {
        if (queue.empty()) {
            cout << "Queue is empty." << endl;
            return nullptr;
        }
        Cutie* cutie = queue.front(); 
        queue.erase(queue.begin());  
        return cutie;
    }

  
    int size() const {
        return queue.size();
    }
};
