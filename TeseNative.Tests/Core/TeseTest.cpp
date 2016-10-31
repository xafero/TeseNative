
#include "TeseTest.h"
#include "../../TeseNative/Core/Tese.h"
#include "../../TeseNative/Core/TeseBuilder.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TeseTest);

TeseTest::TeseTest() {
}

TeseTest::~TeseTest() {
}

void TeseTest::setUp() {
}

void TeseTest::tearDown() {
}

void TeseTest::testTese() {
    TeseNative::Tese tese();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}
