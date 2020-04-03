#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;
using namespace std;

#include <string>

TEST_CASE("Check the correctness of relations"){
    Tree T("Yosef");
    T.addFather("Yosef", "Yaakov")
            .addMother("Yosef", "Rachel")
            .addFather("Yaakov", "Isaac")
            .addMother("Yaakov", "Rivka")
            .addFather("Isaac", "Avraham")
            .addFather("Avraham", "Terah");

    CHECK(T.relation("Yosef") == "me");
    CHECK(T.relation("Yaakov") == "father");
    CHECK(T.relation("Rachel") == "mother");
    CHECK(T.relation("Isaac") == "grandfather");
    CHECK(T.relation("Rivka") == "grandmother");
    CHECK(T.relation("Avraham") == "great-grandfather");
    CHECK(T.relation("Terah") == "great-great-grandfather");
    CHECK(T.relation("Tera") == "unrelated");
}

TEST_CASE("Check the correctness of find"){
    Tree T("Yosef");
    T.addFather("Yosef", "Yaakov")
            .addMother("Yosef", "Rachel")
            .addFather("Yaakov", "Isaac")
            .addMother("Yaakov", "Rivka")
            .addFather("Isaac", "Avraham")
            .addFather("Avraham", "Terah");

    CHECK(T.find("me") == "Yosef");
    CHECK(T.find("father") == "Yaakov");
    CHECK(T.find("mother") == "Rachel");
    CHECK(T.find("grandfather") == "Isaac");
    CHECK(T.find("grandmother") == "Rivka");
    CHECK(T.find("great-grandfather") == "Avraham");
    CHECK(T.find("great-great-grandfather") == "Terah");
    CHECK_THROWS(T.find("uncle"));
}