
#ifndef TESETEST_H
#define TESETEST_H

#include <cppunit/extensions/HelperMacros.h>

using namespace TeseNative;

namespace TeseNativeTests {

    class TeseTest : public CPPUNIT_NS::TestFixture {
        CPPUNIT_TEST_SUITE(TeseTest);

        CPPUNIT_TEST(testTese);

        CPPUNIT_TEST_SUITE_END();

    public:
        TeseTest();
        virtual ~TeseTest();
        void setUp();
        void tearDown();

    private:
        Tese* tese;
        void testTese();

    };

}

#endif /* TESETEST_H */
