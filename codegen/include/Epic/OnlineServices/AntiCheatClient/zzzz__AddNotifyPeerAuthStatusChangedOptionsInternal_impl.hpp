#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AddNotifyPeerAuthStatusChangedOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyPeerAuthStatusChangedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyPeerAuthStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>"
constexpr  Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>* Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__AddNotifyPeerAuthStatusChangedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::AddNotifyPeerAuthStatusChangedOptionsInternal(int32_t  m_ApiVersion) noexcept  {
this->m_ApiVersion = m_ApiVersion;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptionsInternal::AddNotifyPeerAuthStatusChangedOptionsInternal()   {
}
