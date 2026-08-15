#pragma once
// IWYU pragma private; include "Shipmate/Utils/CLIUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Utils/zzzz__CLIUtils_def.hpp"
//  Writing Method size for method: ::Shipmate::Utils::CLIUtils.GetParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Shipmate::Utils::CLIUtils::GetParam)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181acaba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::CLIUtils*>(),
                        {"GetParam", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Shipmate::Utils::CLIUtils::GetParam(::StringW  aParam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::CLIUtils*>(),
                        {"GetParam", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, aParam);
}
// Ctor Parameters []
constexpr ::Shipmate::Utils::CLIUtils::CLIUtils()   {
}
