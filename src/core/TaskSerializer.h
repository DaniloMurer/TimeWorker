//
// Created by jada on 10.08.2020.
//

#ifndef TIMEWORKER_TASKSERIALIZER_H
#define TIMEWORKER_TASKSERIALIZER_H


#include <vector>
#include "AbstractSerializer.h"
#include "../data/Task.h"
#include "list"

using namespace std;

class TaskSerializer : public AbstractSerializer<Task, string> {
public:
    void serialize_object(Task *object) const override;

    void deserialize_object(string *filePath) const override;

private:
    list<Task> convert_to_list(vector<string> splitData) const;
};


#endif //TIMEWORKER_TASKSERIALIZER_H
