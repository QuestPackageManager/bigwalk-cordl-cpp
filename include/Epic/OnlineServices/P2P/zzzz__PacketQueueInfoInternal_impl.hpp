#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/PacketQueueInfoInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketQueueInfoInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketQueueInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::PacketQueueInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::PacketQueueInfoInternal::*)(::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>)>(&::Epic::OnlineServices::P2P::PacketQueueInfoInternal::Get)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180532fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::PacketQueueInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::PacketQueueInfoInternal::Get(::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::PacketQueueInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::PacketQueueInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>"
constexpr  Epic::OnlineServices::P2P::PacketQueueInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>* Epic::OnlineServices::P2P::PacketQueueInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__PacketQueueInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::PacketQueueInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_IncomingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IncomingPacketQueueCurrentSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IncomingPacketQueueCurrentPacketCount", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutgoingPacketQueueMaxSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutgoingPacketQueueCurrentSizeBytes", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OutgoingPacketQueueCurrentPacketCount", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::PacketQueueInfoInternal::PacketQueueInfoInternal(uint64_t  m_IncomingPacketQueueMaxSizeBytes, uint64_t  m_IncomingPacketQueueCurrentSizeBytes, uint64_t  m_IncomingPacketQueueCurrentPacketCount, uint64_t  m_OutgoingPacketQueueMaxSizeBytes, uint64_t  m_OutgoingPacketQueueCurrentSizeBytes, uint64_t  m_OutgoingPacketQueueCurrentPacketCount) noexcept  {
this->m_IncomingPacketQueueMaxSizeBytes = m_IncomingPacketQueueMaxSizeBytes;
this->m_IncomingPacketQueueCurrentSizeBytes = m_IncomingPacketQueueCurrentSizeBytes;
this->m_IncomingPacketQueueCurrentPacketCount = m_IncomingPacketQueueCurrentPacketCount;
this->m_OutgoingPacketQueueMaxSizeBytes = m_OutgoingPacketQueueMaxSizeBytes;
this->m_OutgoingPacketQueueCurrentSizeBytes = m_OutgoingPacketQueueCurrentSizeBytes;
this->m_OutgoingPacketQueueCurrentPacketCount = m_OutgoingPacketQueueCurrentPacketCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::PacketQueueInfoInternal::PacketQueueInfoInternal()   {
}
