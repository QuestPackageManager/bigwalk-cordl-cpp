#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/BeginSessionOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientMode_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__BeginSessionOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__BeginSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>)>(&::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805121c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>"
constexpr  Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>* Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__BeginSessionOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Mode", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::BeginSessionOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  m_Mode) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Mode = m_Mode;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptionsInternal::BeginSessionOptionsInternal()   {
}
