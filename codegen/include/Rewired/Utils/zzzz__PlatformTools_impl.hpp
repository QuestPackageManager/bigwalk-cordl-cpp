#pragma once
// IWYU pragma private; include "Rewired/Utils/PlatformTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__PlatformTools_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::PlatformTools.IsSysVersionInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Rewired::Utils::PlatformTools::IsSysVersionInRange)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181930e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::PlatformTools*>(),
                        {"IsSysVersionInRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::Utils::PlatformTools::IsSysVersionInRange(::StringW  min, ::StringW  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::PlatformTools*>(),
                        {"IsSysVersionInRange", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, min, max);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::PlatformTools::PlatformTools()   {
}
