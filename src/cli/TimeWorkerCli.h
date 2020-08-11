//
// Created by danil on 10.08.2020.
//

#ifndef TIMEWORKER_TIMEWORKERCLI_H
#define TIMEWORKER_TIMEWORKERCLI_H


#include "../interface/AbstractUserInterface.h"

class TimeWorkerCli : public AbstractUserInterface {
public:
    void start() const override;
};


#endif //TIMEWORKER_TIMEWORKERCLI_H
