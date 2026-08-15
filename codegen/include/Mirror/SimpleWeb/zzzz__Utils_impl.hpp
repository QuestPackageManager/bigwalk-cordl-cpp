#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__Utils_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::Utils.CheckForInterupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::SimpleWeb::Utils::CheckForInterupt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ad6320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Utils*>(),
                        {"CheckForInterupt", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::Utils::CheckForInterupt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Utils*>(),
                        {"CheckForInterupt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::Utils::Utils()   {
}
