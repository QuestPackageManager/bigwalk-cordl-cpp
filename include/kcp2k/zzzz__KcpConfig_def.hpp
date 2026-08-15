#pragma once
// IWYU pragma private; include "kcp2k/KcpConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KcpConfig)
// Forward declare root types
namespace kcp2k {
class KcpConfig;
}
// Write type traits
MARK_REF_T(::kcp2k::KcpConfig*);
DEFINE_IL2CPP_CLASS(::kcp2k::KcpConfig*, "kcp2k", "KcpConfig");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.KcpConfig
class CORDL_TYPE KcpConfig : public ::System::Object {
public:
// Declarations
/// @brief Field CongestionWindow, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_CongestionWindow, put=__cordl_internal_set_CongestionWindow)) bool  CongestionWindow;

/// @brief Field DualMode, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_DualMode, put=__cordl_internal_set_DualMode)) bool  DualMode;

/// @brief Field FastResend, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_FastResend, put=__cordl_internal_set_FastResend)) int32_t  FastResend;

/// @brief Field Interval, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Interval, put=__cordl_internal_set_Interval)) uint32_t  Interval;

/// @brief Field MaxRetransmits, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRetransmits, put=__cordl_internal_set_MaxRetransmits)) uint32_t  MaxRetransmits;

/// @brief Field Mtu, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Mtu, put=__cordl_internal_set_Mtu)) int32_t  Mtu;

/// @brief Field NoDelay, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_NoDelay, put=__cordl_internal_set_NoDelay)) bool  NoDelay;

/// @brief Field ReceiveWindowSize, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReceiveWindowSize, put=__cordl_internal_set_ReceiveWindowSize)) uint32_t  ReceiveWindowSize;

/// @brief Field RecvBufferSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_RecvBufferSize, put=__cordl_internal_set_RecvBufferSize)) int32_t  RecvBufferSize;

/// @brief Field SendBufferSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendBufferSize, put=__cordl_internal_set_SendBufferSize)) int32_t  SendBufferSize;

/// @brief Field SendWindowSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_SendWindowSize, put=__cordl_internal_set_SendWindowSize)) uint32_t  SendWindowSize;

/// @brief Field Timeout, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Timeout, put=__cordl_internal_set_Timeout)) int32_t  Timeout;

static inline ::kcp2k::KcpConfig* New_ctor(bool  DualMode, int32_t  RecvBufferSize, int32_t  SendBufferSize, int32_t  Mtu, bool  NoDelay, uint32_t  Interval, int32_t  FastResend, bool  CongestionWindow, uint32_t  SendWindowSize, uint32_t  ReceiveWindowSize, int32_t  Timeout, uint32_t  MaxRetransmits) ;

constexpr bool const& __cordl_internal_get_CongestionWindow() const;

constexpr bool& __cordl_internal_get_CongestionWindow() ;

constexpr bool const& __cordl_internal_get_DualMode() const;

constexpr bool& __cordl_internal_get_DualMode() ;

constexpr int32_t const& __cordl_internal_get_FastResend() const;

constexpr int32_t& __cordl_internal_get_FastResend() ;

constexpr uint32_t const& __cordl_internal_get_Interval() const;

constexpr uint32_t& __cordl_internal_get_Interval() ;

constexpr uint32_t const& __cordl_internal_get_MaxRetransmits() const;

constexpr uint32_t& __cordl_internal_get_MaxRetransmits() ;

constexpr int32_t const& __cordl_internal_get_Mtu() const;

constexpr int32_t& __cordl_internal_get_Mtu() ;

constexpr bool const& __cordl_internal_get_NoDelay() const;

constexpr bool& __cordl_internal_get_NoDelay() ;

constexpr uint32_t const& __cordl_internal_get_ReceiveWindowSize() const;

constexpr uint32_t& __cordl_internal_get_ReceiveWindowSize() ;

constexpr int32_t const& __cordl_internal_get_RecvBufferSize() const;

constexpr int32_t& __cordl_internal_get_RecvBufferSize() ;

constexpr int32_t const& __cordl_internal_get_SendBufferSize() const;

constexpr int32_t& __cordl_internal_get_SendBufferSize() ;

constexpr uint32_t const& __cordl_internal_get_SendWindowSize() const;

constexpr uint32_t& __cordl_internal_get_SendWindowSize() ;

constexpr int32_t const& __cordl_internal_get_Timeout() const;

constexpr int32_t& __cordl_internal_get_Timeout() ;

constexpr void __cordl_internal_set_CongestionWindow(bool  value) ;

constexpr void __cordl_internal_set_DualMode(bool  value) ;

constexpr void __cordl_internal_set_FastResend(int32_t  value) ;

constexpr void __cordl_internal_set_Interval(uint32_t  value) ;

constexpr void __cordl_internal_set_MaxRetransmits(uint32_t  value) ;

constexpr void __cordl_internal_set_Mtu(int32_t  value) ;

constexpr void __cordl_internal_set_NoDelay(bool  value) ;

constexpr void __cordl_internal_set_ReceiveWindowSize(uint32_t  value) ;

constexpr void __cordl_internal_set_RecvBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_SendBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_SendWindowSize(uint32_t  value) ;

constexpr void __cordl_internal_set_Timeout(int32_t  value) ;

/// @brief Method .ctor, addr 0x18144de50, size 0x50, virtual false, abstract: false, final false
inline void _ctor(bool  DualMode, int32_t  RecvBufferSize, int32_t  SendBufferSize, int32_t  Mtu, bool  NoDelay, uint32_t  Interval, int32_t  FastResend, bool  CongestionWindow, uint32_t  SendWindowSize, uint32_t  ReceiveWindowSize, int32_t  Timeout, uint32_t  MaxRetransmits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KcpConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KcpConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KcpConfig(KcpConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KcpConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KcpConfig(KcpConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20870};

/// @brief Field DualMode, offset: 0x10, size: 0x1, def value: None
 bool  ___DualMode;

/// @brief Field RecvBufferSize, offset: 0x14, size: 0x4, def value: None
 int32_t  ___RecvBufferSize;

/// @brief Field SendBufferSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___SendBufferSize;

/// @brief Field Mtu, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Mtu;

/// @brief Field NoDelay, offset: 0x20, size: 0x1, def value: None
 bool  ___NoDelay;

/// @brief Field Interval, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___Interval;

/// @brief Field FastResend, offset: 0x28, size: 0x4, def value: None
 int32_t  ___FastResend;

/// @brief Field CongestionWindow, offset: 0x2c, size: 0x1, def value: None
 bool  ___CongestionWindow;

/// @brief Field SendWindowSize, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___SendWindowSize;

/// @brief Field ReceiveWindowSize, offset: 0x34, size: 0x4, def value: None
 uint32_t  ___ReceiveWindowSize;

/// @brief Field Timeout, offset: 0x38, size: 0x4, def value: None
 int32_t  ___Timeout;

/// @brief Field MaxRetransmits, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ___MaxRetransmits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::KcpConfig, ___DualMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___RecvBufferSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___SendBufferSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___Mtu) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___NoDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___Interval) == 0x24, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___FastResend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___CongestionWindow) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___SendWindowSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___ReceiveWindowSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___Timeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::kcp2k::KcpConfig, ___MaxRetransmits) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::kcp2k::KcpConfig) == 0x40, "Size mismatch!");

} // namespace end def kcp2k
