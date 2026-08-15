#pragma once
// IWYU pragma private; include "UnityEngine/RemoteConfigSettings.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::RemoteConfigSettings.RemoteConfigSettingsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RemoteConfigSettings*, bool)>(&::UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182548c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteConfigSettings*>(),
                        {"RemoteConfigSettingsUpdated", {}, {::i2c::type_of<::UnityEngine::RemoteConfigSettings*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::RemoteConfigSettings::__cordl_internal_get_m_Ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::RemoteConfigSettings::__cordl_internal_get_m_Ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ptr;
}
constexpr void UnityEngine::RemoteConfigSettings::__cordl_internal_set_m_Ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ptr = value;
}
constexpr ::System::Action_1<bool>*& UnityEngine::RemoteConfigSettings::__cordl_internal_get_Updated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Updated;
}
constexpr ::System::Action_1<bool>* const& UnityEngine::RemoteConfigSettings::__cordl_internal_get_Updated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Updated;
}
constexpr void UnityEngine::RemoteConfigSettings::__cordl_internal_set_Updated(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Updated = value;
}
inline void UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings*  rcs, bool  wasLastUpdatedFromServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RemoteConfigSettings*>(),
                        {"RemoteConfigSettingsUpdated", {}, {::i2c::type_of<::UnityEngine::RemoteConfigSettings*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rcs, wasLastUpdatedFromServer);
}
// Ctor Parameters []
constexpr ::UnityEngine::RemoteConfigSettings::RemoteConfigSettings()   {
}
