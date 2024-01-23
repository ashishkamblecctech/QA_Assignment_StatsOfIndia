#include "pch.h"
#include "Point3D.h"

//Testing focuses on various aspects of the Point3D class

TEST(Point3DTest, DefaultConstructor) {
    //Point3DTest is test suite and DefaultConstructor is test case within that test suite
    Point3D point;

    EXPECT_FLOAT_EQ(point.x(), 0.0f);
    EXPECT_FLOAT_EQ(point.y(), 0.0f);
}

TEST(Point3DTest, ParameterizedConstructor) {
     //Point3DTest is test suite and ParameterizedConstructor is test case within that test suite
    Point3D point(1.0f, 2.0f);

    EXPECT_FLOAT_EQ(point.x(), 1.0f);
    EXPECT_FLOAT_EQ(point.y(), 2.0f);
}

TEST(Point3DTest1, SettersAndGetters) {
     //Point3DTest is test suite and SettersAndGetters is test case within that test suite
    Point3D point(3.0f, 4.0f);
    point.setX(3.0f);
    point.setY(4.0f);

    EXPECT_FLOAT_EQ(point.x(), 3.0f);
    EXPECT_FLOAT_EQ(point.y(), 4.0f);
}

TEST(Point3DTest1, ParameterizedConstructor) {
     //Point3DTest1 is test suite and ParameterizedConstructor is test case within that test suite
    Point3D point(1.0f, 2.0f, 3.0f);

    EXPECT_FLOAT_EQ(point.x(), 1.0f);
    EXPECT_FLOAT_EQ(point.y(), 2.0f);
    EXPECT_FLOAT_EQ(point.z(), 3.0f);
}

TEST(Point3DTest, SettersAndGetters) {
     //Point3DTest1 is test suite and SettersAndGetters is test case within that test suite
    Point3D point(3.0f, 4.0f);
    point.setX(3.0f);
    point.setY(4.0f);
    point.setZ(5.0f);

    EXPECT_FLOAT_EQ(point.x(), 3.0f);
    EXPECT_FLOAT_EQ(point.y(), 4.0f);
    EXPECT_FLOAT_EQ(point.z(), 5.0f);
}

#include "pch.h"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
