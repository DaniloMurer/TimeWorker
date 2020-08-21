//
// Created by jada on 11.08.2020.
//

#ifndef TIMEWORKER_ABSTRACTUSERINTERFACE_H
#define TIMEWORKER_ABSTRACTUSERINTERFACE_H


class AbstractUserInterface {
public:
    virtual void start() const = 0;
    virtual ~AbstractUserInterface() {
        delete this;
    }
};


#endif //TIMEWORKER_ABSTRACTUSERINTERFACE_H
