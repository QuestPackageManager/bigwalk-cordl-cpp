#pragma once
// IWYU pragma private; include "kcp2k/KcpConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__KcpConfig_def.hpp"
//  Writing Method size for method: ::kcp2k::KcpConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpConfig::*)(bool, int32_t, int32_t, int32_t, bool, uint32_t, int32_t, bool, uint32_t, uint32_t, int32_t, uint32_t)>(&::kcp2k::KcpConfig::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18144de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpConfig*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& kcp2k::KcpConfig::__cordl_internal_get_DualMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DualMode;
}
constexpr bool const& kcp2k::KcpConfig::__cordl_internal_get_DualMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DualMode;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_DualMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DualMode = value;
}
constexpr int32_t& kcp2k::KcpConfig::__cordl_internal_get_RecvBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecvBufferSize;
}
constexpr int32_t const& kcp2k::KcpConfig::__cordl_internal_get_RecvBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecvBufferSize;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_RecvBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecvBufferSize = value;
}
constexpr int32_t& kcp2k::KcpConfig::__cordl_internal_get_SendBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendBufferSize;
}
constexpr int32_t const& kcp2k::KcpConfig::__cordl_internal_get_SendBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendBufferSize;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_SendBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendBufferSize = value;
}
constexpr int32_t& kcp2k::KcpConfig::__cordl_internal_get_Mtu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mtu;
}
constexpr int32_t const& kcp2k::KcpConfig::__cordl_internal_get_Mtu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mtu;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_Mtu(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mtu = value;
}
constexpr bool& kcp2k::KcpConfig::__cordl_internal_get_NoDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr bool const& kcp2k::KcpConfig::__cordl_internal_get_NoDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_NoDelay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoDelay = value;
}
constexpr uint32_t& kcp2k::KcpConfig::__cordl_internal_get_Interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interval;
}
constexpr uint32_t const& kcp2k::KcpConfig::__cordl_internal_get_Interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interval;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_Interval(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interval = value;
}
constexpr int32_t& kcp2k::KcpConfig::__cordl_internal_get_FastResend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FastResend;
}
constexpr int32_t const& kcp2k::KcpConfig::__cordl_internal_get_FastResend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FastResend;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_FastResend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FastResend = value;
}
constexpr bool& kcp2k::KcpConfig::__cordl_internal_get_CongestionWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CongestionWindow;
}
constexpr bool const& kcp2k::KcpConfig::__cordl_internal_get_CongestionWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CongestionWindow;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_CongestionWindow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CongestionWindow = value;
}
constexpr uint32_t& kcp2k::KcpConfig::__cordl_internal_get_SendWindowSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendWindowSize;
}
constexpr uint32_t const& kcp2k::KcpConfig::__cordl_internal_get_SendWindowSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendWindowSize;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_SendWindowSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendWindowSize = value;
}
constexpr uint32_t& kcp2k::KcpConfig::__cordl_internal_get_ReceiveWindowSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveWindowSize;
}
constexpr uint32_t const& kcp2k::KcpConfig::__cordl_internal_get_ReceiveWindowSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveWindowSize;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_ReceiveWindowSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiveWindowSize = value;
}
constexpr int32_t& kcp2k::KcpConfig::__cordl_internal_get_Timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timeout;
}
constexpr int32_t const& kcp2k::KcpConfig::__cordl_internal_get_Timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timeout;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_Timeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timeout = value;
}
constexpr uint32_t& kcp2k::KcpConfig::__cordl_internal_get_MaxRetransmits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRetransmits;
}
constexpr uint32_t const& kcp2k::KcpConfig::__cordl_internal_get_MaxRetransmits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRetransmits;
}
constexpr void kcp2k::KcpConfig::__cordl_internal_set_MaxRetransmits(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRetransmits = value;
}
inline void kcp2k::KcpConfig::_ctor(bool  DualMode, int32_t  RecvBufferSize, int32_t  SendBufferSize, int32_t  Mtu, bool  NoDelay, uint32_t  Interval, int32_t  FastResend, bool  CongestionWindow, uint32_t  SendWindowSize, uint32_t  ReceiveWindowSize, int32_t  Timeout, uint32_t  MaxRetransmits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpConfig*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, DualMode, RecvBufferSize, SendBufferSize, Mtu, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize, Timeout, MaxRetransmits);
}
inline ::kcp2k::KcpConfig* kcp2k::KcpConfig::New_ctor(bool  DualMode, int32_t  RecvBufferSize, int32_t  SendBufferSize, int32_t  Mtu, bool  NoDelay, uint32_t  Interval, int32_t  FastResend, bool  CongestionWindow, uint32_t  SendWindowSize, uint32_t  ReceiveWindowSize, int32_t  Timeout, uint32_t  MaxRetransmits)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpConfig*>(DualMode, RecvBufferSize, SendBufferSize, Mtu, NoDelay, Interval, FastResend, CongestionWindow, SendWindowSize, ReceiveWindowSize, Timeout, MaxRetransmits));
}
// Ctor Parameters []
constexpr ::kcp2k::KcpConfig::KcpConfig()   {
}
