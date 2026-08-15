#pragma once
// IWYU pragma private; include "Rewired/IControllerTemplate_Internal.hpp"
#include "Rewired/zzzz__IControllerTemplate_Internal_def.hpp"
#include "Rewired/Internal/Localization/zzzz__DeviceLocalizationInfo_def.hpp"
#include "Rewired/zzzz__IControllerTemplate_def.hpp"
//  Writing Method size for method: ::Rewired::IControllerTemplate_Internal.get_deviceLocalizationInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::Localization::DeviceLocalizationInfo* (::Rewired::IControllerTemplate_Internal::*)()>(&::Rewired::IControllerTemplate_Internal::get_deviceLocalizationInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IControllerTemplate_Internal*>(),
                    {::i2c::class_of<::Rewired::IControllerTemplate_Internal*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::IControllerTemplate_Internal::get_deviceLocalizationInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IControllerTemplate_Internal*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(this, ___internal_method);
}
/// @brief Convert operator to "::Rewired::IControllerTemplate"
constexpr  Rewired::IControllerTemplate_Internal::operator ::Rewired::IControllerTemplate*() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IControllerTemplate"
constexpr ::Rewired::IControllerTemplate* Rewired::IControllerTemplate_Internal::i___Rewired__IControllerTemplate() noexcept {
return static_cast<::Rewired::IControllerTemplate*>(static_cast<void*>(this));
}
