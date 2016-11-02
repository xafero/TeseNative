
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
    Customer* cus = new Customer(1, "Harry", "Johnson", 123.89, true,
            new Address("West Ohio Street", 22, 50023,
            new City("Ankeny", State::IA, 1L)),
            'm', 42, 13, 97.5f, 7, 10, 1, time(0));

    ofstream* out = new ofstream("test.tmp");
    tese->serialize(cus, out);
    out->flush();
    out->close();

    CPPUNIT_ASSERT(true);
}

void TeseNativeTests::TeseTest::testDeserialize() {
    ifstream* in = new ifstream("test.tmp");
    Customer* cus = tese->deserialize<Customer>(in);
    in->close();

    CPPUNIT_ASSERT(true);
}
