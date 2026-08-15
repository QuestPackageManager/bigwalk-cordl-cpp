#pragma once
// IWYU pragma private; include "kcp2k/Kcp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Kcp)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace kcp2k {
struct AckItem;
}
namespace kcp2k {
class Kcp___c;
}
namespace kcp2k {
template<typename T>
class Pool_1;
}
namespace kcp2k {
class Segment;
}
// Forward declare root types
namespace kcp2k {
class Kcp;
}
namespace kcp2k {
class Kcp___c;
}
// Write type traits
MARK_REF_T(::kcp2k::Kcp*);
MARK_REF_T(::kcp2k::Kcp___c*);
DEFINE_IL2CPP_CLASS(::kcp2k::Kcp*, "kcp2k", "Kcp");
DEFINE_IL2CPP_CLASS(::kcp2k::Kcp___c*, "kcp2k", "Kcp/<>c");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.Kcp/<>c
class CORDL_TYPE Kcp___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::kcp2k::Kcp___c*  __9;

/// @brief Field <>9__61_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__61_0, put=setStaticF___9__61_0)) ::System::Func_1<::kcp2k::Segment*>*  __9__61_0;

/// @brief Field <>9__61_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__61_1, put=setStaticF___9__61_1)) ::System::Action_1<::kcp2k::Segment*>*  __9__61_1;

static inline ::kcp2k::Kcp___c* New_ctor() ;

/// @brief Method <.ctor>b__61_0, addr 0x1814530f0, size 0x60, virtual false, abstract: false, final false
inline ::kcp2k::Segment* __ctor_b__61_0() ;

/// @brief Method <.ctor>b__61_1, addr 0x181453150, size 0x50, virtual false, abstract: false, final false
inline void __ctor_b__61_1(::kcp2k::Segment*  segment) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::kcp2k::Kcp___c* getStaticF___9() ;

static inline ::System::Func_1<::kcp2k::Segment*>* getStaticF___9__61_0() ;

static inline ::System::Action_1<::kcp2k::Segment*>* getStaticF___9__61_1() ;

static inline void setStaticF___9(::kcp2k::Kcp___c*  value) ;

static inline void setStaticF___9__61_0(::System::Func_1<::kcp2k::Segment*>*  value) ;

static inline void setStaticF___9__61_1(::System::Action_1<::kcp2k::Segment*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Kcp___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Kcp___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Kcp___c(Kcp___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Kcp___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Kcp___c(Kcp___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20879};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::kcp2k::Kcp___c) == 0x10, "Size mismatch!");

} // namespace end def kcp2k
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.Kcp
class CORDL_TYPE Kcp : public ::System::Object {
public:
// Declarations
using __c = ::kcp2k::Kcp___c;

/// @brief Field SegmentPool, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SegmentPool, put=__cordl_internal_set_SegmentPool)) ::kcp2k::Pool_1<::kcp2k::Segment*>*  SegmentPool;

 __declspec(property(get=get_WaitSnd)) int32_t  WaitSnd;

/// @brief Field acklist, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_acklist, put=__cordl_internal_set_acklist)) ::System::Collections::Generic::List_1<::kcp2k::AckItem>*  acklist;

/// @brief Field buffer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field conv, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_conv, put=__cordl_internal_set_conv)) uint32_t  conv;

/// @brief Field current, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) uint32_t  current;

/// @brief Field cwnd, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cwnd, put=__cordl_internal_set_cwnd)) uint32_t  cwnd;

/// @brief Field dead_link, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_dead_link, put=__cordl_internal_set_dead_link)) uint32_t  dead_link;

/// @brief Field fastlimit, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastlimit, put=__cordl_internal_set_fastlimit)) int32_t  fastlimit;

/// @brief Field fastresend, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastresend, put=__cordl_internal_set_fastresend)) int32_t  fastresend;

/// @brief Field incr, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_incr, put=__cordl_internal_set_incr)) uint32_t  incr;

/// @brief Field interval, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) uint32_t  interval;

/// @brief Field mss, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mss, put=__cordl_internal_set_mss)) uint32_t  mss;

/// @brief Field mtu, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_mtu, put=__cordl_internal_set_mtu)) uint32_t  mtu;

/// @brief Field nocwnd, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_nocwnd, put=__cordl_internal_set_nocwnd)) bool  nocwnd;

/// @brief Field nodelay, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodelay, put=__cordl_internal_set_nodelay)) uint32_t  nodelay;

/// @brief Field output, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  output;

/// @brief Field probe, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_probe, put=__cordl_internal_set_probe)) uint32_t  probe;

/// @brief Field probe_wait, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_probe_wait, put=__cordl_internal_set_probe_wait)) uint32_t  probe_wait;

/// @brief Field rcv_buf, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rcv_buf, put=__cordl_internal_set_rcv_buf)) ::System::Collections::Generic::List_1<::kcp2k::Segment*>*  rcv_buf;

/// @brief Field rcv_nxt, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rcv_nxt, put=__cordl_internal_set_rcv_nxt)) uint32_t  rcv_nxt;

/// @brief Field rcv_queue, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rcv_queue, put=__cordl_internal_set_rcv_queue)) ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  rcv_queue;

/// @brief Field rcv_wnd, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_rcv_wnd, put=__cordl_internal_set_rcv_wnd)) uint32_t  rcv_wnd;

/// @brief Field rmt_wnd, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rmt_wnd, put=__cordl_internal_set_rmt_wnd)) uint32_t  rmt_wnd;

/// @brief Field rx_minrto, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rx_minrto, put=__cordl_internal_set_rx_minrto)) int32_t  rx_minrto;

/// @brief Field rx_rto, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rx_rto, put=__cordl_internal_set_rx_rto)) int32_t  rx_rto;

/// @brief Field rx_rttval, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rx_rttval, put=__cordl_internal_set_rx_rttval)) int32_t  rx_rttval;

/// @brief Field rx_srtt, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_rx_srtt, put=__cordl_internal_set_rx_srtt)) int32_t  rx_srtt;

/// @brief Field snd_buf, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_snd_buf, put=__cordl_internal_set_snd_buf)) ::System::Collections::Generic::List_1<::kcp2k::Segment*>*  snd_buf;

/// @brief Field snd_nxt, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_snd_nxt, put=__cordl_internal_set_snd_nxt)) uint32_t  snd_nxt;

/// @brief Field snd_queue, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_snd_queue, put=__cordl_internal_set_snd_queue)) ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  snd_queue;

/// @brief Field snd_una, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_snd_una, put=__cordl_internal_set_snd_una)) uint32_t  snd_una;

/// @brief Field snd_wnd, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_snd_wnd, put=__cordl_internal_set_snd_wnd)) uint32_t  snd_wnd;

/// @brief Field ssthresh, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ssthresh, put=__cordl_internal_set_ssthresh)) uint32_t  ssthresh;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Field ts_flush, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_ts_flush, put=__cordl_internal_set_ts_flush)) uint32_t  ts_flush;

/// @brief Field ts_probe, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_ts_probe, put=__cordl_internal_set_ts_probe)) uint32_t  ts_probe;

/// @brief Field updated, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_updated, put=__cordl_internal_set_updated)) bool  updated;

/// @brief Field xmit, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_xmit, put=__cordl_internal_set_xmit)) uint32_t  xmit;

/// @brief Method AckPush, addr 0x181450ae0, size 0x70, virtual false, abstract: false, final false
inline void AckPush(uint32_t  sn, uint32_t  ts) ;

/// @brief Method Check, addr 0x181450b50, size 0x100, virtual false, abstract: false, final false
inline uint32_t Check(uint32_t  current_) ;

/// @brief Method Flush, addr 0x181450ca0, size 0x730, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushBuffer, addr 0x181450c50, size 0x50, virtual false, abstract: false, final false
inline void FlushBuffer(int32_t  size) ;

/// @brief Method Input, addr 0x1814513d0, size 0x740, virtual false, abstract: false, final false
inline int32_t Input(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  size) ;

/// @brief Method InsertSegmentInReceiveBuffer, addr 0x181451b10, size 0xc0, virtual false, abstract: false, final false
inline void InsertSegmentInReceiveBuffer(::kcp2k::Segment*  newseg) ;

/// @brief Method MakeSpace, addr 0x181451bd0, size 0x60, virtual false, abstract: false, final false
inline void MakeSpace(::by_ref<int32_t>  size, int32_t  space) ;

/// @brief Method MoveReceiveBufferReadySegmentsToQueue, addr 0x181451c30, size 0xe0, virtual false, abstract: false, final false
inline void MoveReceiveBufferReadySegmentsToQueue() ;

static inline ::kcp2k::Kcp* New_ctor(uint32_t  conv, ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  output) ;

/// @brief Method ParseAck, addr 0x181451d10, size 0xa0, virtual false, abstract: false, final false
inline void ParseAck(uint32_t  sn) ;

/// @brief Method ParseData, addr 0x181451db0, size 0x1e0, virtual false, abstract: false, final false
inline void ParseData(::kcp2k::Segment*  newseg) ;

/// @brief Method ParseFastack, addr 0x181451f90, size 0x90, virtual false, abstract: false, final false
inline void ParseFastack(uint32_t  sn, uint32_t  ts) ;

/// @brief Method ParseUna, addr 0x181452020, size 0xe0, virtual false, abstract: false, final false
inline void ParseUna(uint32_t  una) ;

/// @brief Method PeekSize, addr 0x181452100, size 0x1b0, virtual false, abstract: false, final false
inline int32_t PeekSize() ;

/// @brief Method Receive, addr 0x1814522b0, size 0x300, virtual false, abstract: false, final false
inline int32_t Receive(::ArrayW<uint8_t>  buffer, int32_t  len) ;

/// @brief Method SegmentDelete, addr 0x1814525b0, size 0x30, virtual false, abstract: false, final false
inline void SegmentDelete(::kcp2k::Segment*  seg) ;

/// @brief Method SegmentNew, addr 0x1814525e0, size 0x30, virtual false, abstract: false, final false
inline ::kcp2k::Segment* SegmentNew() ;

/// @brief Method Send, addr 0x181452610, size 0x1e0, virtual false, abstract: false, final false
inline int32_t Send(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  len) ;

/// @brief Method SetInterval, addr 0x1814527f0, size 0x30, virtual false, abstract: false, final false
inline void SetInterval(uint32_t  interval) ;

/// @brief Method SetMtu, addr 0x181452820, size 0x70, virtual false, abstract: false, final false
inline void SetMtu(uint32_t  mtu) ;

/// @brief Method SetNoDelay, addr 0x181452890, size 0x50, virtual false, abstract: false, final false
inline void SetNoDelay(uint32_t  nodelay, uint32_t  interval, int32_t  resend, bool  nocwnd) ;

/// @brief Method SetWindowSize, addr 0x1814528e0, size 0x20, virtual false, abstract: false, final false
inline void SetWindowSize(uint32_t  sendWindow, uint32_t  receiveWindow) ;

/// @brief Method ShrinkBuf, addr 0x181452900, size 0x50, virtual false, abstract: false, final false
inline void ShrinkBuf() ;

/// @brief Method Update, addr 0x1814529f0, size 0x60, virtual false, abstract: false, final false
inline void Update(uint32_t  currentTimeMilliSeconds) ;

/// @brief Method UpdateAck, addr 0x181452950, size 0xa0, virtual false, abstract: false, final false
inline void UpdateAck(int32_t  rtt) ;

/// @brief Method WndUnused, addr 0x181452a50, size 0x40, virtual false, abstract: false, final false
inline uint32_t WndUnused() ;

constexpr ::kcp2k::Pool_1<::kcp2k::Segment*>* const& __cordl_internal_get_SegmentPool() const;

constexpr ::kcp2k::Pool_1<::kcp2k::Segment*>*& __cordl_internal_get_SegmentPool() ;

constexpr ::System::Collections::Generic::List_1<::kcp2k::AckItem>* const& __cordl_internal_get_acklist() const;

constexpr ::System::Collections::Generic::List_1<::kcp2k::AckItem>*& __cordl_internal_get_acklist() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr uint32_t const& __cordl_internal_get_conv() const;

constexpr uint32_t& __cordl_internal_get_conv() ;

constexpr uint32_t const& __cordl_internal_get_current() const;

constexpr uint32_t& __cordl_internal_get_current() ;

constexpr uint32_t const& __cordl_internal_get_cwnd() const;

constexpr uint32_t& __cordl_internal_get_cwnd() ;

constexpr uint32_t const& __cordl_internal_get_dead_link() const;

constexpr uint32_t& __cordl_internal_get_dead_link() ;

constexpr int32_t const& __cordl_internal_get_fastlimit() const;

constexpr int32_t& __cordl_internal_get_fastlimit() ;

constexpr int32_t const& __cordl_internal_get_fastresend() const;

constexpr int32_t& __cordl_internal_get_fastresend() ;

constexpr uint32_t const& __cordl_internal_get_incr() const;

constexpr uint32_t& __cordl_internal_get_incr() ;

constexpr uint32_t const& __cordl_internal_get_interval() const;

constexpr uint32_t& __cordl_internal_get_interval() ;

constexpr uint32_t const& __cordl_internal_get_mss() const;

constexpr uint32_t& __cordl_internal_get_mss() ;

constexpr uint32_t const& __cordl_internal_get_mtu() const;

constexpr uint32_t& __cordl_internal_get_mtu() ;

constexpr bool const& __cordl_internal_get_nocwnd() const;

constexpr bool& __cordl_internal_get_nocwnd() ;

constexpr uint32_t const& __cordl_internal_get_nodelay() const;

constexpr uint32_t& __cordl_internal_get_nodelay() ;

constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>* const& __cordl_internal_get_output() const;

constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>*& __cordl_internal_get_output() ;

constexpr uint32_t const& __cordl_internal_get_probe() const;

constexpr uint32_t& __cordl_internal_get_probe() ;

constexpr uint32_t const& __cordl_internal_get_probe_wait() const;

constexpr uint32_t& __cordl_internal_get_probe_wait() ;

constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>* const& __cordl_internal_get_rcv_buf() const;

constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>*& __cordl_internal_get_rcv_buf() ;

constexpr uint32_t const& __cordl_internal_get_rcv_nxt() const;

constexpr uint32_t& __cordl_internal_get_rcv_nxt() ;

constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>* const& __cordl_internal_get_rcv_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*& __cordl_internal_get_rcv_queue() ;

constexpr uint32_t const& __cordl_internal_get_rcv_wnd() const;

constexpr uint32_t& __cordl_internal_get_rcv_wnd() ;

constexpr uint32_t const& __cordl_internal_get_rmt_wnd() const;

constexpr uint32_t& __cordl_internal_get_rmt_wnd() ;

constexpr int32_t const& __cordl_internal_get_rx_minrto() const;

constexpr int32_t& __cordl_internal_get_rx_minrto() ;

constexpr int32_t const& __cordl_internal_get_rx_rto() const;

constexpr int32_t& __cordl_internal_get_rx_rto() ;

constexpr int32_t const& __cordl_internal_get_rx_rttval() const;

constexpr int32_t& __cordl_internal_get_rx_rttval() ;

constexpr int32_t const& __cordl_internal_get_rx_srtt() const;

constexpr int32_t& __cordl_internal_get_rx_srtt() ;

constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>* const& __cordl_internal_get_snd_buf() const;

constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>*& __cordl_internal_get_snd_buf() ;

constexpr uint32_t const& __cordl_internal_get_snd_nxt() const;

constexpr uint32_t& __cordl_internal_get_snd_nxt() ;

constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>* const& __cordl_internal_get_snd_queue() const;

constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*& __cordl_internal_get_snd_queue() ;

constexpr uint32_t const& __cordl_internal_get_snd_una() const;

constexpr uint32_t& __cordl_internal_get_snd_una() ;

constexpr uint32_t const& __cordl_internal_get_snd_wnd() const;

constexpr uint32_t& __cordl_internal_get_snd_wnd() ;

constexpr uint32_t const& __cordl_internal_get_ssthresh() const;

constexpr uint32_t& __cordl_internal_get_ssthresh() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr uint32_t const& __cordl_internal_get_ts_flush() const;

constexpr uint32_t& __cordl_internal_get_ts_flush() ;

constexpr uint32_t const& __cordl_internal_get_ts_probe() const;

constexpr uint32_t& __cordl_internal_get_ts_probe() ;

constexpr bool const& __cordl_internal_get_updated() const;

constexpr bool& __cordl_internal_get_updated() ;

constexpr uint32_t const& __cordl_internal_get_xmit() const;

constexpr uint32_t& __cordl_internal_get_xmit() ;

constexpr void __cordl_internal_set_SegmentPool(::kcp2k::Pool_1<::kcp2k::Segment*>*  value) ;

constexpr void __cordl_internal_set_acklist(::System::Collections::Generic::List_1<::kcp2k::AckItem>*  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_conv(uint32_t  value) ;

constexpr void __cordl_internal_set_current(uint32_t  value) ;

constexpr void __cordl_internal_set_cwnd(uint32_t  value) ;

constexpr void __cordl_internal_set_dead_link(uint32_t  value) ;

constexpr void __cordl_internal_set_fastlimit(int32_t  value) ;

constexpr void __cordl_internal_set_fastresend(int32_t  value) ;

constexpr void __cordl_internal_set_incr(uint32_t  value) ;

constexpr void __cordl_internal_set_interval(uint32_t  value) ;

constexpr void __cordl_internal_set_mss(uint32_t  value) ;

constexpr void __cordl_internal_set_mtu(uint32_t  value) ;

constexpr void __cordl_internal_set_nocwnd(bool  value) ;

constexpr void __cordl_internal_set_nodelay(uint32_t  value) ;

constexpr void __cordl_internal_set_output(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value) ;

constexpr void __cordl_internal_set_probe(uint32_t  value) ;

constexpr void __cordl_internal_set_probe_wait(uint32_t  value) ;

constexpr void __cordl_internal_set_rcv_buf(::System::Collections::Generic::List_1<::kcp2k::Segment*>*  value) ;

constexpr void __cordl_internal_set_rcv_nxt(uint32_t  value) ;

constexpr void __cordl_internal_set_rcv_queue(::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  value) ;

constexpr void __cordl_internal_set_rcv_wnd(uint32_t  value) ;

constexpr void __cordl_internal_set_rmt_wnd(uint32_t  value) ;

constexpr void __cordl_internal_set_rx_minrto(int32_t  value) ;

constexpr void __cordl_internal_set_rx_rto(int32_t  value) ;

constexpr void __cordl_internal_set_rx_rttval(int32_t  value) ;

constexpr void __cordl_internal_set_rx_srtt(int32_t  value) ;

constexpr void __cordl_internal_set_snd_buf(::System::Collections::Generic::List_1<::kcp2k::Segment*>*  value) ;

constexpr void __cordl_internal_set_snd_nxt(uint32_t  value) ;

constexpr void __cordl_internal_set_snd_queue(::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  value) ;

constexpr void __cordl_internal_set_snd_una(uint32_t  value) ;

constexpr void __cordl_internal_set_snd_wnd(uint32_t  value) ;

constexpr void __cordl_internal_set_ssthresh(uint32_t  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

constexpr void __cordl_internal_set_ts_flush(uint32_t  value) ;

constexpr void __cordl_internal_set_ts_probe(uint32_t  value) ;

constexpr void __cordl_internal_set_updated(bool  value) ;

constexpr void __cordl_internal_set_xmit(uint32_t  value) ;

/// @brief Method .ctor, addr 0x181452a90, size 0x320, virtual false, abstract: false, final false
inline void _ctor(uint32_t  conv, ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  output) ;

/// @brief Method get_WaitSnd, addr 0x181452db0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_WaitSnd() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Kcp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Kcp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Kcp(Kcp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Kcp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Kcp(Kcp const& ) = delete;

/// @brief Field ACK_FAST offset 0xffffffff size 0x4
static constexpr int32_t  ACK_FAST{static_cast<int32_t>(0x3)};

/// @brief Field ASK_SEND offset 0xffffffff size 0x4
static constexpr int32_t  ASK_SEND{static_cast<int32_t>(0x1)};

/// @brief Field ASK_TELL offset 0xffffffff size 0x4
static constexpr int32_t  ASK_TELL{static_cast<int32_t>(0x2)};

/// @brief Field CMD_ACK offset 0xffffffff size 0x4
static constexpr int32_t  CMD_ACK{static_cast<int32_t>(0x52)};

/// @brief Field CMD_PUSH offset 0xffffffff size 0x4
static constexpr int32_t  CMD_PUSH{static_cast<int32_t>(0x51)};

/// @brief Field CMD_WASK offset 0xffffffff size 0x4
static constexpr int32_t  CMD_WASK{static_cast<int32_t>(0x53)};

/// @brief Field CMD_WINS offset 0xffffffff size 0x4
static constexpr int32_t  CMD_WINS{static_cast<int32_t>(0x54)};

/// @brief Field DEADLINK offset 0xffffffff size 0x4
static constexpr int32_t  DEADLINK{static_cast<int32_t>(0x14)};

/// @brief Field FASTACK_LIMIT offset 0xffffffff size 0x4
static constexpr int32_t  FASTACK_LIMIT{static_cast<int32_t>(0x5)};

/// @brief Field FRG_MAX offset 0xffffffff size 0x4
static constexpr int32_t  FRG_MAX{static_cast<int32_t>(0xff)};

/// @brief Field INTERVAL offset 0xffffffff size 0x4
static constexpr int32_t  INTERVAL{static_cast<int32_t>(0x64)};

/// @brief Field MTU_DEF offset 0xffffffff size 0x4
static constexpr int32_t  MTU_DEF{static_cast<int32_t>(0x4b0)};

/// @brief Field OVERHEAD offset 0xffffffff size 0x4
static constexpr int32_t  OVERHEAD{static_cast<int32_t>(0x18)};

/// @brief Field PROBE_INIT offset 0xffffffff size 0x4
static constexpr int32_t  PROBE_INIT{static_cast<int32_t>(0x1b58)};

/// @brief Field PROBE_LIMIT offset 0xffffffff size 0x4
static constexpr int32_t  PROBE_LIMIT{static_cast<int32_t>(0x1d4c0)};

/// @brief Field RTO_DEF offset 0xffffffff size 0x4
static constexpr int32_t  RTO_DEF{static_cast<int32_t>(0xc8)};

/// @brief Field RTO_MAX offset 0xffffffff size 0x4
static constexpr int32_t  RTO_MAX{static_cast<int32_t>(0xea60)};

/// @brief Field RTO_MIN offset 0xffffffff size 0x4
static constexpr int32_t  RTO_MIN{static_cast<int32_t>(0x64)};

/// @brief Field RTO_NDL offset 0xffffffff size 0x4
static constexpr int32_t  RTO_NDL{static_cast<int32_t>(0x1e)};

/// @brief Field THRESH_INIT offset 0xffffffff size 0x4
static constexpr int32_t  THRESH_INIT{static_cast<int32_t>(0x2)};

/// @brief Field THRESH_MIN offset 0xffffffff size 0x4
static constexpr int32_t  THRESH_MIN{static_cast<int32_t>(0x2)};

/// @brief Field WND_RCV offset 0xffffffff size 0x4
static constexpr int32_t  WND_RCV{static_cast<int32_t>(0x80)};

/// @brief Field WND_SND offset 0xffffffff size 0x4
static constexpr int32_t  WND_SND{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20880};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field conv, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___conv;

/// @brief Field mtu, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___mtu;

/// @brief Field mss, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ___mss;

/// @brief Field snd_una, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___snd_una;

/// @brief Field snd_nxt, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___snd_nxt;

/// @brief Field rcv_nxt, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___rcv_nxt;

/// @brief Field ssthresh, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___ssthresh;

/// @brief Field rx_rttval, offset: 0x30, size: 0x4, def value: None
 int32_t  ___rx_rttval;

/// @brief Field rx_srtt, offset: 0x34, size: 0x4, def value: None
 int32_t  ___rx_srtt;

/// @brief Field rx_rto, offset: 0x38, size: 0x4, def value: None
 int32_t  ___rx_rto;

/// @brief Field rx_minrto, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___rx_minrto;

/// @brief Field snd_wnd, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___snd_wnd;

/// @brief Field rcv_wnd, offset: 0x44, size: 0x4, def value: None
 uint32_t  ___rcv_wnd;

/// @brief Field rmt_wnd, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___rmt_wnd;

/// @brief Field cwnd, offset: 0x4c, size: 0x4, def value: None
 uint32_t  ___cwnd;

/// @brief Field probe, offset: 0x50, size: 0x4, def value: None
 uint32_t  ___probe;

/// @brief Field interval, offset: 0x54, size: 0x4, def value: None
 uint32_t  ___interval;

/// @brief Field ts_flush, offset: 0x58, size: 0x4, def value: None
 uint32_t  ___ts_flush;

/// @brief Field xmit, offset: 0x5c, size: 0x4, def value: None
 uint32_t  ___xmit;

/// @brief Field nodelay, offset: 0x60, size: 0x4, def value: None
 uint32_t  ___nodelay;

/// @brief Field updated, offset: 0x64, size: 0x1, def value: None
 bool  ___updated;

/// @brief Field ts_probe, offset: 0x68, size: 0x4, def value: None
 uint32_t  ___ts_probe;

/// @brief Field probe_wait, offset: 0x6c, size: 0x4, def value: None
 uint32_t  ___probe_wait;

/// @brief Field dead_link, offset: 0x70, size: 0x4, def value: None
 uint32_t  ___dead_link;

/// @brief Field incr, offset: 0x74, size: 0x4, def value: None
 uint32_t  ___incr;

/// @brief Field current, offset: 0x78, size: 0x4, def value: None
 uint32_t  ___current;

/// @brief Field fastresend, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___fastresend;

/// @brief Field fastlimit, offset: 0x80, size: 0x4, def value: None
 int32_t  ___fastlimit;

/// @brief Field nocwnd, offset: 0x84, size: 0x1, def value: None
 bool  ___nocwnd;

/// @brief Field snd_queue, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  ___snd_queue;

/// @brief Field rcv_queue, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  ___rcv_queue;

/// @brief Field snd_buf, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::kcp2k::Segment*>*  ___snd_buf;

/// @brief Field rcv_buf, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::kcp2k::Segment*>*  ___rcv_buf;

/// @brief Field acklist, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::kcp2k::AckItem>*  ___acklist;

/// @brief Field buffer, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field output, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  ___output;

/// @brief Field SegmentPool, offset: 0xc0, size: 0x8, def value: None
 ::kcp2k::Pool_1<::kcp2k::Segment*>*  ___SegmentPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::Kcp, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___conv) == 0x14, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___mtu) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___mss) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___snd_una) == 0x20, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___snd_nxt) == 0x24, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rcv_nxt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___ssthresh) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rx_rttval) == 0x30, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rx_srtt) == 0x34, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rx_rto) == 0x38, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rx_minrto) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___snd_wnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rcv_wnd) == 0x44, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rmt_wnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___cwnd) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___probe) == 0x50, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___interval) == 0x54, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___ts_flush) == 0x58, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___xmit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___nodelay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___updated) == 0x64, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___ts_probe) == 0x68, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___probe_wait) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___dead_link) == 0x70, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___incr) == 0x74, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___current) == 0x78, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___fastresend) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___fastlimit) == 0x80, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___nocwnd) == 0x84, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___snd_queue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rcv_queue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___snd_buf) == 0x98, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___rcv_buf) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___acklist) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___buffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___output) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Kcp, ___SegmentPool) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::kcp2k::Kcp) == 0xc8, "Size mismatch!");

} // namespace end def kcp2k
