//
// Created by jada on 10.08.2020.
//

#ifndef TIMEWORKER_TASKSERIALIZER_H
#define TIMEWORKER_TASKSERIALIZER_H


#include "AbstractSerializer.h"
#include "../data/Task.h"

class TaskSerializer : public AbstractSerializer<Task, std::string> {
public:
    void serialize_object(Task *object) const override;

    void deserialize_object(std::string *filePath) const override;
};


#endif //TIMEWORKER_TASKSERIALIZER_H
