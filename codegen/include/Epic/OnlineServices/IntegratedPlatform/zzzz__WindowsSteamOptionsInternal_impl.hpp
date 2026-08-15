#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/WindowsSteamOptionsInternal.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformManagementFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__WindowsSteamOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18051e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>"
constexpr  Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>* Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__WindowsSteamOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InitOptions", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::WindowsSteamOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Type, ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformManagementFlags  m_Flags, ::System::IntPtr  m_InitOptions) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Type = m_Type;
this->m_Flags = m_Flags;
this->m_InitOptions = m_InitOptions;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::WindowsSteamOptionsInternal::WindowsSteamOptionsInternal()   {
}
