//
// Created by jada on 10.08.2020.
//

#ifndef TIMEWORKER_ABSTRACTSERIALIZER_H
#define TIMEWORKER_ABSTRACTSERIALIZER_H

template <typename T>
class AbstractSerializer {
public:
    virtual void serialize_object(T object) const = 0;
    virtual void deserialize_object(T object) const = 0;
};

#endif //TIMEWORKER_ABSTRACTSERIALIZER_H
