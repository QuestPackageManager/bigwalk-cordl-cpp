#pragma once
// IWYU pragma private; include "Shipmates/Utils/CodeGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/Utils/zzzz__CodeGenerator_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Shipmates::Utils::CodeGenerator.GenerateCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Shipmates::Utils::CodeGenerator::GenerateCode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181acb250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::CodeGenerator*>(),
                        {"GenerateCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Shipmates::Utils::CodeGenerator::setStaticF__random(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "_random", ::Shipmates::Utils::CodeGenerator*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* Shipmates::Utils::CodeGenerator::getStaticF__random()  {
return ::cordl_internals::getStaticField<::System::Random*, "_random", ::Shipmates::Utils::CodeGenerator*>();
}
inline ::StringW Shipmates::Utils::CodeGenerator::GenerateCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::Utils::CodeGenerator*>(),
                        {"GenerateCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Shipmates::Utils::CodeGenerator::CodeGenerator()   {
}
