#ifndef MOCKPUBLISHER_HPP
#define MOCKPUBLISHER_HPP

#include "gmock/gmock.h"
#include "movement_info/movement_interface.hpp"

class MockPublisher : public MovementInterface
{
public:
    MockPublisher() : MovementInterface("publisherTest") {}

    MOCK_METHOD(void, publish_movement_info, (), (override));
};
#endif // MOCKPUBLISHER_HPP