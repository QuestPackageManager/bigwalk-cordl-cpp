#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/ReceiveMessageFromServerOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ReceiveMessageFromServerOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ReceiveMessageFromServerOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>)>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180533430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>"
constexpr  Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>* Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__ReceiveMessageFromServerOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::ReceiveMessageFromServerOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_DataLengthBytes, ::System::IntPtr  m_Data) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_DataLengthBytes = m_DataLengthBytes;
this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptionsInternal::ReceiveMessageFromServerOptionsInternal()   {
}
