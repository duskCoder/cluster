#ifndef CLUSTER_H
#define CLUSTER_H

#include <queue>
#include <map>
#include <vector>

#include "Node.h"
#include "Job.h"

class Cluster {
    public:
        Cluster();

    private:
        std::vector<Node> _nodes;

        /* jobs which have not yet been assigned */
        std::queue<Job> _jobs_queue;

        std::map<const Node *, Job> _pending_jobs;

};

extern "C" {
    int cluster_init(void);
    void cluster_shutdown(void);

    int cluster_add_job(const char *function, const void *data, int size);
};

#endif
