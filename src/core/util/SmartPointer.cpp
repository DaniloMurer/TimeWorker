//
// Created by jada on 13.08.2020.
//

#include "SmartPointer.h"

template<typename T>
void SmartPointer<T>::clearPointer() const {
    delete actualPointer;
    actualPointer = nullptr;
}

template<typename T>
T SmartPointer<T>::get_pointer() {
    return this->actualPointer;
}
