#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/GetProtectMessageOutputLengthOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__GetProtectMessageOutputLengthOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__GetProtectMessageOutputLengthOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>)>(&::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>"
constexpr  Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>* Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__GetProtectMessageOutputLengthOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::GetProtectMessageOutputLengthOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_DataLengthBytes) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_DataLengthBytes = m_DataLengthBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptionsInternal::GetProtectMessageOutputLengthOptionsInternal()   {
}
