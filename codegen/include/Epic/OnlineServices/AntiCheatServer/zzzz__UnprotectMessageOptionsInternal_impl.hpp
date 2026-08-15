#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/UnprotectMessageOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__UnprotectMessageOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__UnprotectMessageOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>)>(&::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18052b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18050bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>"
constexpr  Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>* Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__UnprotectMessageOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutBufferSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::UnprotectMessageOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ClientHandle, uint32_t  m_DataLengthBytes, ::System::IntPtr  m_Data, uint32_t  m_OutBufferSizeBytes) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ClientHandle = m_ClientHandle;
this->m_DataLengthBytes = m_DataLengthBytes;
this->m_Data = m_Data;
this->m_OutBufferSizeBytes = m_OutBufferSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptionsInternal::UnprotectMessageOptionsInternal()   {
}
