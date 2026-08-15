#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPacketQueueSizeOptionsInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPacketQueueSizeOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SetPacketQueueSizeOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>)>(&::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180525730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>"
constexpr  Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>* Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SetPacketQueueSizeOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IncomingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutgoingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::SetPacketQueueSizeOptionsInternal(int32_t  m_ApiVersion, uint64_t  m_IncomingPacketQueueMaxSizeBytes, uint64_t  m_OutgoingPacketQueueMaxSizeBytes) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_IncomingPacketQueueMaxSizeBytes = m_IncomingPacketQueueMaxSizeBytes;
this->m_OutgoingPacketQueueMaxSizeBytes = m_OutgoingPacketQueueMaxSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptionsInternal::SetPacketQueueSizeOptionsInternal()   {
}
