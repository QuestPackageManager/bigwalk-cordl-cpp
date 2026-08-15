#pragma once
// IWYU pragma private; include "MA/Flora/ChangeVersionUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__ChangeVersionUtility_def.hpp"
//  Writing Method size for method: ::MA::Flora::ChangeVersionUtility.DidChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, uint32_t)>(&::MA::Flora::ChangeVersionUtility::DidChange)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18145b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChangeVersionUtility*>(),
                        {"DidChange", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::ChangeVersionUtility::DidChange(uint32_t  changeVersion, uint32_t  currentVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ChangeVersionUtility*>(),
                        {"DidChange", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, changeVersion, currentVersion);
}
// Ctor Parameters []
constexpr ::MA::Flora::ChangeVersionUtility::ChangeVersionUtility()   {
}
