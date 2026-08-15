#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SteamInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SteamInternal_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SteamInternal.set_OverrideLibraryPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SteamInternal::*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::SteamInternal::set_OverrideLibraryPath)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180546870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SteamInternal>(),
                        {"set_OverrideLibraryPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SteamInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SteamInternal::*)()>(&::PlayEveryWare::EpicOnlineServices::SteamInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180546850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SteamInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::SteamInternal::set_OverrideLibraryPath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SteamInternal>(),
                        {"set_OverrideLibraryPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::SteamInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SteamInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayEveryWare::EpicOnlineServices::SteamInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayEveryWare::EpicOnlineServices::SteamInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverrideLibraryPath", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::SteamInternal::SteamInternal(int32_t  ApiVersion, ::System::IntPtr  m_OverrideLibraryPath) noexcept  {
this->ApiVersion = ApiVersion;
this->m_OverrideLibraryPath = m_OverrideLibraryPath;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SteamInternal::SteamInternal()   {
}
