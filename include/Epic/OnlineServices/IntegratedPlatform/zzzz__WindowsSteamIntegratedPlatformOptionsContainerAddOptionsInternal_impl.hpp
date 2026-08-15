#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamIntegratedPlatformOptionsContainerAddOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>"
constexpr  Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>* Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__WindowsSteamIntegratedPlatformOptionsContainerAddOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Options", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Options) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Options = m_Options;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal::WindowsSteamIntegratedPlatformOptionsContainerAddOptionsInternal()   {
}
