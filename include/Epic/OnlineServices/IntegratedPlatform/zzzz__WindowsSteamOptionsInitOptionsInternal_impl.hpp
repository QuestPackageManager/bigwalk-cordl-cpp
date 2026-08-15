#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamOptionsInitOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptionsInitOptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptionsInitOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18051e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>"
constexpr  Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>* Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__WindowsSteamOptionsInitOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideLibraryPath", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamMajorVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamMinorVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamApiInterfaceVersionsArray", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamApiInterfaceVersionsArrayBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::WindowsSteamOptionsInitOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_OverrideLibraryPath, uint32_t  m_SteamMajorVersion, uint32_t  m_SteamMinorVersion, ::System::IntPtr  m_SteamApiInterfaceVersionsArray, uint32_t  m_SteamApiInterfaceVersionsArrayBytes) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_OverrideLibraryPath = m_OverrideLibraryPath;
this->m_SteamMajorVersion = m_SteamMajorVersion;
this->m_SteamMinorVersion = m_SteamMinorVersion;
this->m_SteamApiInterfaceVersionsArray = m_SteamApiInterfaceVersionsArray;
this->m_SteamApiInterfaceVersionsArrayBytes = m_SteamApiInterfaceVersionsArrayBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInitOptionsInternal::WindowsSteamOptionsInitOptionsInternal()   {
}
