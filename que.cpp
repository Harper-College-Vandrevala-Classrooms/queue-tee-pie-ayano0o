#include "que.hpp"

using namespace std;


int main() {

    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset marmoset;

    QueueTees queue;

    cout << "Initial queue size: " << queue.size() << endl;

    queue.enqueue(puppy);
    queue.enqueue(kitty);
    queue.enqueue(marmoset);

    cout << "Queue size after enqueueing: " << queue.size() << endl;

    Cutie* cutie = queue.dequeue();
    if (cutie) {
        cout << "Dequeued: " << cutie->description() << " with cuteness rating " << cutie->cuteness_rating() << endl;
    }

    cutie = queue.dequeue();
    if (cutie) {
        cout << "Dequeued: " << cutie->description() << " with cuteness rating " << cutie->cuteness_rating() << endl;
    }

    cutie = queue.dequeue();
    if (cutie) {
        cout << "Dequeued: " << cutie->description() << " with cuteness rating " << cutie->cuteness_rating() << endl;
    }

    cutie = queue.dequeue();

    return 0;
}
