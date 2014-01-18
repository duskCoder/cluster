#ifndef NODE_H
#define NODE_H

#include "Job.h"

class Node {
    public:
        Node();

        void assign(const Job &);

    private:
        int _sock;
};

#endif
