//
// Created by jada on 10.08.2020.
//

#ifndef TIMEWORKER_ABSTRACTSERIALIZER_H
#define TIMEWORKER_ABSTRACTSERIALIZER_H

/**
 * AbstractSerializer for serializing objects.
 * The Implementation of the serialization can vary by use case
 * @tparam T Type of the object to serialize
 * @tparam V Type of the filepath
 */
template <typename T, typename V>
class AbstractSerializer {
public:
    /**
     * Serialize an object
     * @param object Object to serialize
     */
    virtual void serialize_object(T *object) const = 0;
    /**
     * Deserialize an object
     * @param filePath File path to the serialized object
     */
    virtual void deserialize_object(V *filePath) const = 0;
};

#endif //TIMEWORKER_ABSTRACTSERIALIZER_H
