#pragma once
// IWYU pragma private; include "Rewired/Utils/ExtensionMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__ExtensionMethods_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::ExtensionMethods.IsNullOrDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::Rewired::Utils::ExtensionMethods::IsNullOrDestroyed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181903870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExtensionMethods*>(),
                        {"IsNullOrDestroyed", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Rewired::Utils::ExtensionMethods::IsNullOrDestroyed(::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::ExtensionMethods*>(),
                        {"IsNullOrDestroyed", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, object);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::ExtensionMethods::ExtensionMethods()   {
}
