#pragma once
// IWYU pragma private; include "kcp2k/Segment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Segment)
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace kcp2k {
class Segment;
}
// Write type traits
MARK_REF_T(::kcp2k::Segment*);
DEFINE_IL2CPP_CLASS(::kcp2k::Segment*, "kcp2k", "Segment");
// Dependencies System.Object
namespace kcp2k {
// Is value type: false
// CS Name: kcp2k.Segment
class CORDL_TYPE Segment : public ::System::Object {
public:
// Declarations
/// @brief Field cmd, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_cmd, put=__cordl_internal_set_cmd)) uint32_t  cmd;

/// @brief Field conv, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_conv, put=__cordl_internal_set_conv)) uint32_t  conv;

/// @brief Field data, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::IO::MemoryStream*  data;

/// @brief Field fastack, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastack, put=__cordl_internal_set_fastack)) uint32_t  fastack;

/// @brief Field frg, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_frg, put=__cordl_internal_set_frg)) uint32_t  frg;

/// @brief Field resendts, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_resendts, put=__cordl_internal_set_resendts)) uint32_t  resendts;

/// @brief Field rto, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rto, put=__cordl_internal_set_rto)) int32_t  rto;

/// @brief Field sn, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sn, put=__cordl_internal_set_sn)) uint32_t  sn;

/// @brief Field ts, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ts, put=__cordl_internal_set_ts)) uint32_t  ts;

/// @brief Field una, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_una, put=__cordl_internal_set_una)) uint32_t  una;

/// @brief Field wnd, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wnd, put=__cordl_internal_set_wnd)) uint32_t  wnd;

/// @brief Field xmit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_xmit, put=__cordl_internal_set_xmit)) uint32_t  xmit;

/// @brief Method Encode, addr 0x181452ee0, size 0x170, virtual false, abstract: false, final false
inline int32_t Encode(::ArrayW<uint8_t>  ptr, int32_t  offset) ;

static inline ::kcp2k::Segment* New_ctor() ;

/// @brief Method Reset, addr 0x181453050, size 0x50, virtual false, abstract: false, final false
inline void Reset() ;

constexpr uint32_t const& __cordl_internal_get_cmd() const;

constexpr uint32_t& __cordl_internal_get_cmd() ;

constexpr uint32_t const& __cordl_internal_get_conv() const;

constexpr uint32_t& __cordl_internal_get_conv() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_data() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_data() ;

constexpr uint32_t const& __cordl_internal_get_fastack() const;

constexpr uint32_t& __cordl_internal_get_fastack() ;

constexpr uint32_t const& __cordl_internal_get_frg() const;

constexpr uint32_t& __cordl_internal_get_frg() ;

constexpr uint32_t const& __cordl_internal_get_resendts() const;

constexpr uint32_t& __cordl_internal_get_resendts() ;

constexpr int32_t const& __cordl_internal_get_rto() const;

constexpr int32_t& __cordl_internal_get_rto() ;

constexpr uint32_t const& __cordl_internal_get_sn() const;

constexpr uint32_t& __cordl_internal_get_sn() ;

constexpr uint32_t const& __cordl_internal_get_ts() const;

constexpr uint32_t& __cordl_internal_get_ts() ;

constexpr uint32_t const& __cordl_internal_get_una() const;

constexpr uint32_t& __cordl_internal_get_una() ;

constexpr uint32_t const& __cordl_internal_get_wnd() const;

constexpr uint32_t& __cordl_internal_get_wnd() ;

constexpr uint32_t const& __cordl_internal_get_xmit() const;

constexpr uint32_t& __cordl_internal_get_xmit() ;

constexpr void __cordl_internal_set_cmd(uint32_t  value) ;

constexpr void __cordl_internal_set_conv(uint32_t  value) ;

constexpr void __cordl_internal_set_data(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_fastack(uint32_t  value) ;

constexpr void __cordl_internal_set_frg(uint32_t  value) ;

constexpr void __cordl_internal_set_resendts(uint32_t  value) ;

constexpr void __cordl_internal_set_rto(int32_t  value) ;

constexpr void __cordl_internal_set_sn(uint32_t  value) ;

constexpr void __cordl_internal_set_ts(uint32_t  value) ;

constexpr void __cordl_internal_set_una(uint32_t  value) ;

constexpr void __cordl_internal_set_wnd(uint32_t  value) ;

constexpr void __cordl_internal_set_xmit(uint32_t  value) ;

/// @brief Method .ctor, addr 0x1814530a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Segment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Segment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Segment(Segment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Segment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Segment(Segment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20882};

/// @brief Field conv, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___conv;

/// @brief Field cmd, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___cmd;

/// @brief Field frg, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___frg;

/// @brief Field wnd, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ___wnd;

/// @brief Field ts, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___ts;

/// @brief Field sn, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___sn;

/// @brief Field una, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___una;

/// @brief Field resendts, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___resendts;

/// @brief Field rto, offset: 0x30, size: 0x4, def value: None
 int32_t  ___rto;

/// @brief Field fastack, offset: 0x34, size: 0x4, def value: None
 uint32_t  ___fastack;

/// @brief Field xmit, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___xmit;

/// @brief Field data, offset: 0x40, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::Segment, ___conv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___cmd) == 0x14, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___frg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___wnd) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___ts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___sn) == 0x24, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___una) == 0x28, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___resendts) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___rto) == 0x30, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___fastack) == 0x34, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___xmit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::kcp2k::Segment, ___data) == 0x40, "Offset mismatch!");

static_assert(sizeof(::kcp2k::Segment) == 0x48, "Size mismatch!");

} // namespace end def kcp2k
