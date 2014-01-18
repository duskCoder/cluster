#include <stddef.h>
#include <exception>
#include "Cluster.h"

static Cluster *cluster_g = NULL;

extern "C" {
    int cluster_init(void)
    {
        try {
            cluster_g = new Cluster;
        } catch (...) {
            return -1;
        }

        return 0;
    }

    void cluster_shutdown(void)
    {
        delete cluster_g;
        cluster_g = NULL;
    }

    int cluster_add_job(const char *function, const void *data, int size)
    {
        return 0;
    }
};
