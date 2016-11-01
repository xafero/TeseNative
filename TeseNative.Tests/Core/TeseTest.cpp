
#include "TeseTest.h"
#include "../../TeseNative/Core/Tese.h"
#include "../../TeseNative/Core/TeseBuilder.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TeseNativeTests::TeseTest);

TeseNativeTests::TeseTest::TeseTest() {
}

TeseNativeTests::TeseTest::~TeseTest() {
}

void TeseNativeTests::TeseTest::setUp() {
    TeseBuilder* builder = new TeseBuilder();
    tese = builder->skipNull(true)->create();
}

void TeseNativeTests::TeseTest::tearDown() {
    tese = NULL;
}

void TeseNativeTests::TeseTest::testSerialize() {
    Address* adr = new Address("Main Road", 21, 42,
            new City("Berlin", State::UT, 12345));

    CPPUNIT_ASSERT(true);
}

void TeseNativeTests::TeseTest::testDeserialize() {
    Address* adr = NULL;

    CPPUNIT_ASSERT(true);
}
