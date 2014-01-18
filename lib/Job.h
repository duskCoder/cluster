#ifndef JOB_H
#define JOB_H

class Job {
    public:
        /* default constructor */
        Job();

    private:
        /* every time a Job is instanciated, a new id is set */
        static unsigned long __id__;
        const int _id;
};

#endif
