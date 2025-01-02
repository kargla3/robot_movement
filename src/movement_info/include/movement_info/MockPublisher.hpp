#ifndef MOCKPUBLISHER_HPP
#define MOCKPUBLISHER_HPP

#include "gmock/gmock.h"
#include "movement_info/movement_interface.hpp"


// Mock class for MovementInterface
// This class is used to mock the MovementInterface class
// Used for testing publishing of movement info
class MockPublisher : public MovementInterface
{
public:
    MockPublisher() : MovementInterface("publisherTest") {}

    // Mock method for publish_movement_info
    MOCK_METHOD(void, publish_movement_info, (), (override));
};
#endif // MOCKPUBLISHER_HPP