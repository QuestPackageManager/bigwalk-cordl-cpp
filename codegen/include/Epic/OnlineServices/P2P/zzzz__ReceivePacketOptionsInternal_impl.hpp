#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/ReceivePacketOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ReceivePacketOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ReceivePacketOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>)>(&::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805334c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::_ctor(::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::ReceivePacketOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RequestedChannel", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::ReceivePacketOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_MaxDataSizeBytes, ::System::IntPtr  m_RequestedChannel) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_MaxDataSizeBytes = m_MaxDataSizeBytes;
this->m_RequestedChannel = m_RequestedChannel;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::ReceivePacketOptionsInternal::ReceivePacketOptionsInternal()   {
}
