#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/InitializeThreadAffinityInternal.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeThreadAffinityInternal_def.hpp"
#include "Epic/OnlineServices/Platform/zzzz__InitializeThreadAffinity_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::*)(::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>)>(&::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::Set)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f7de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::*)()>(&::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::Set(::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Platform::InitializeThreadAffinity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>"
constexpr  Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>* Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Platform__InitializeThreadAffinity_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinity>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NetworkWork", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StorageIo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WebSocketIo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_P2PIo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HttpRequestIo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RTCIo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EmbeddedOverlayMainThread", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EmbeddedOverlayWorkerThreads", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CryptographyWork", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::InitializeThreadAffinityInternal(int32_t  m_ApiVersion, uint64_t  m_NetworkWork, uint64_t  m_StorageIo, uint64_t  m_WebSocketIo, uint64_t  m_P2PIo, uint64_t  m_HttpRequestIo, uint64_t  m_RTCIo, uint64_t  m_EmbeddedOverlayMainThread, uint64_t  m_EmbeddedOverlayWorkerThreads, uint64_t  m_CryptographyWork) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_NetworkWork = m_NetworkWork;
this->m_StorageIo = m_StorageIo;
this->m_WebSocketIo = m_WebSocketIo;
this->m_P2PIo = m_P2PIo;
this->m_HttpRequestIo = m_HttpRequestIo;
this->m_RTCIo = m_RTCIo;
this->m_EmbeddedOverlayMainThread = m_EmbeddedOverlayMainThread;
this->m_EmbeddedOverlayWorkerThreads = m_EmbeddedOverlayWorkerThreads;
this->m_CryptographyWork = m_CryptographyWork;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal::InitializeThreadAffinityInternal()   {
}
