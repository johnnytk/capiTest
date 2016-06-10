#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <CommonAPI/CommonAPI.hpp>

#include "v1/org/test/capiTestStubDefault.hpp"

namespace gen = v1::org::test;

int main(void) {
    auto runtime = CommonAPI::Runtime::get();
    std::shared_ptr<gen::capiTestStubDefault> capiTestStubService = std::make_shared<gen::capiTestStubDefault>();

}
