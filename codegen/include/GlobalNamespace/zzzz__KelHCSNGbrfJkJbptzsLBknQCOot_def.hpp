#pragma once
// IWYU pragma private; include "GlobalNamespace/KelHCSNGbrfJkJbptzsLBknQCOot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KelHCSNGbrfJkJbptzsLBknQCOot)
namespace GlobalNamespace {
struct KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn;
}
// Forward declare root types
namespace GlobalNamespace {
struct KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn;
}
namespace GlobalNamespace {
class KelHCSNGbrfJkJbptzsLBknQCOot;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn);
MARK_REF_T(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn, "", "KelHCSNGbrfJkJbptzsLBknQCOot/SkUVynikgrVkCClVkRfzSKNfVdFn");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot*, "", "KelHCSNGbrfJkJbptzsLBknQCOot");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KelHCSNGbrfJkJbptzsLBknQCOot/SkUVynikgrVkCClVkRfzSKNfVdFn
struct CORDL_TYPE KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn_Unwrapped
enum struct __KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_WaitTimedOut = static_cast<int32_t>(0x1),
__E_WaitFail = static_cast<int32_t>(0x2),
__E_NoDataRead = static_cast<int32_t>(0x3),
__E_ReadError = static_cast<int32_t>(0x4),
__E_NotConnected = static_cast<int32_t>(0x5),
__E_WaitIOCompletion = static_cast<int32_t>(0x6),
__E_WaitAbandoned = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn_Unwrapped () const noexcept {
return static_cast<__KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn(int32_t  value__) noexcept;

/// @brief Field NoDataRead value: I32(3)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const NoDataRead;

/// @brief Field NotConnected value: I32(5)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const NotConnected;

/// @brief Field ReadError value: I32(4)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const ReadError;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const Success;

/// @brief Field WaitAbandoned value: I32(7)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const WaitAbandoned;

/// @brief Field WaitFail value: I32(2)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const WaitFail;

/// @brief Field WaitIOCompletion value: I32(6)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const WaitIOCompletion;

/// @brief Field WaitTimedOut value: I32(1)
static ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const WaitTimedOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies KelHCSNGbrfJkJbptzsLBknQCOot::SkUVynikgrVkCClVkRfzSKNfVdFn, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KelHCSNGbrfJkJbptzsLBknQCOot
class CORDL_TYPE KelHCSNGbrfJkJbptzsLBknQCOot : public ::System::Object {
public:
// Declarations
using SkUVynikgrVkCClVkRfzSKNfVdFn = ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn;

/// @brief Field HSxFtSGmFSHdbXdwjjyOpyowcqDD, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_HSxFtSGmFSHdbXdwjjyOpyowcqDD, put=__cordl_internal_set_HSxFtSGmFSHdbXdwjjyOpyowcqDD)) ::ArrayW<uint8_t>  HSxFtSGmFSHdbXdwjjyOpyowcqDD;

 __declspec(property(get=zWgFxxZWxoiiwSngfsNtWfurMncP, put=CkaTXBIabCEDxPCjvnLyOHSGDIuhA)) ::ArrayW<uint8_t>  OYgWsiIIjdsKTHWncnoQCNvXYesm;

/// @brief Field RObmvjavWHuYRVnWUqtjFUOSgzMk, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_RObmvjavWHuYRVnWUqtjFUOSgzMk, put=__cordl_internal_set_RObmvjavWHuYRVnWUqtjFUOSgzMk)) ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  RObmvjavWHuYRVnWUqtjFUOSgzMk;

 __declspec(property(get=DYNXwSHBlEiXAVFBmbtJhpxmrSXr, put=KgTxLehcEZYHRFkGygDmdfrszyGV)) ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  jAnZjJfeiLyLncPARKRLRJcMEloi;

/// @brief Method CkaTXBIabCEDxPCjvnLyOHSGDIuhA, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void CkaTXBIabCEDxPCjvnLyOHSGDIuhA(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method DYNXwSHBlEiXAVFBmbtJhpxmrSXr, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn DYNXwSHBlEiXAVFBmbtJhpxmrSXr() ;

/// @brief Method KgTxLehcEZYHRFkGygDmdfrszyGV, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void KgTxLehcEZYHRFkGygDmdfrszyGV(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  _cordl_fixed_empty_name_whitespace) ;

static inline ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot* New_ctor(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot* New_ctor(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  _cordl_fixed_empty_name_whitespace) ;

static inline ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZfpDIISuitElYuHkLHcsuRcDGvoEA, addr 0x180c3ff30, size 0x4250, virtual false, abstract: false, final false
inline void ZfpDIISuitElYuHkLHcsuRcDGvoEA(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_HSxFtSGmFSHdbXdwjjyOpyowcqDD() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_HSxFtSGmFSHdbXdwjjyOpyowcqDD() ;

constexpr ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn const& __cordl_internal_get_RObmvjavWHuYRVnWUqtjFUOSgzMk() const;

constexpr ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn& __cordl_internal_get_RObmvjavWHuYRVnWUqtjFUOSgzMk() ;

constexpr void __cordl_internal_set_HSxFtSGmFSHdbXdwjjyOpyowcqDD(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_RObmvjavWHuYRVnWUqtjFUOSgzMk(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  value) ;

/// @brief Method .ctor, addr 0x180c3ff30, size 0x4250, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181a6df80, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181a6dfc0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method zWgFxxZWxoiiwSngfsNtWfurMncP, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> zWgFxxZWxoiiwSngfsNtWfurMncP() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KelHCSNGbrfJkJbptzsLBknQCOot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KelHCSNGbrfJkJbptzsLBknQCOot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KelHCSNGbrfJkJbptzsLBknQCOot(KelHCSNGbrfJkJbptzsLBknQCOot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KelHCSNGbrfJkJbptzsLBknQCOot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KelHCSNGbrfJkJbptzsLBknQCOot(KelHCSNGbrfJkJbptzsLBknQCOot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6419};

/// @brief Field HSxFtSGmFSHdbXdwjjyOpyowcqDD, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___HSxFtSGmFSHdbXdwjjyOpyowcqDD;

/// @brief Field RObmvjavWHuYRVnWUqtjFUOSgzMk, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot_SkUVynikgrVkCClVkRfzSKNfVdFn  ___RObmvjavWHuYRVnWUqtjFUOSgzMk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot, ___HSxFtSGmFSHdbXdwjjyOpyowcqDD) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot, ___RObmvjavWHuYRVnWUqtjFUOSgzMk) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KelHCSNGbrfJkJbptzsLBknQCOot) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
