//
// Created by jada on 10.08.2020.
//

#ifndef TIMEWORKER_TASKSERIALIZER_H
#define TIMEWORKER_TASKSERIALIZER_H


#include <vector>
#include "AbstractSerializer.h"
#include "../data/Task.h"
#include "list"

class TaskSerializer : public AbstractSerializer<Task, std::string> {
public:
    void serialize_object(Task *object) const override;

    void deserialize_object(std::string *filePath) const override;

private:
    std::list<Task> convert_to_list(std::vector<std::string> splitData) const;
};


#endif //TIMEWORKER_TASKSERIALIZER_H
