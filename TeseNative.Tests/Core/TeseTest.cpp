
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

void TeseNativeTests::TeseTest::testTese() {
    CPPUNIT_ASSERT(true);
}
