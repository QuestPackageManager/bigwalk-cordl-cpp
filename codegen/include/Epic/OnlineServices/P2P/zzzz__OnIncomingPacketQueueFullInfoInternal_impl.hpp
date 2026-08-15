#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnIncomingPacketQueueFullInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullInfoInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnIncomingPacketQueueFullInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::*)()>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::*)(::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>)>(&::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::Get)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18052fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::Get(::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>"
constexpr  Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>* Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnIncomingPacketQueueFullInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PacketQueueCurrentSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverflowPacketLocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverflowPacketChannel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OverflowPacketSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::OnIncomingPacketQueueFullInfoInternal(::System::IntPtr  m_ClientData, uint64_t  m_PacketQueueMaxSizeBytes, uint64_t  m_PacketQueueCurrentSizeBytes, ::System::IntPtr  m_OverflowPacketLocalUserId, uint8_t  m_OverflowPacketChannel, uint32_t  m_OverflowPacketSizeBytes) noexcept  {
this->m_ClientData = m_ClientData;
this->m_PacketQueueMaxSizeBytes = m_PacketQueueMaxSizeBytes;
this->m_PacketQueueCurrentSizeBytes = m_PacketQueueCurrentSizeBytes;
this->m_OverflowPacketLocalUserId = m_OverflowPacketLocalUserId;
this->m_OverflowPacketChannel = m_OverflowPacketChannel;
this->m_OverflowPacketSizeBytes = m_OverflowPacketSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal::OnIncomingPacketQueueFullInfoInternal()   {
}
