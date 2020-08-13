//
// Created by jada on 13.08.2020.
//

#ifndef TIMEWORKER_SMARTPOINTER_H
#define TIMEWORKER_SMARTPOINTER_H

template <typename T>
class SmartPointer {
private:
    T actualPointer;
    void clearPointer() const;
public:
    T get_pointer();
};

#endif //TIMEWORKER_SMARTPOINTER_H
