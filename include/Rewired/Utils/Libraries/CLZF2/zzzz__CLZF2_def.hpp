#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/CLZF2/CLZF2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CLZF2)
namespace Rewired::Utils::Libraries::CLZF2 {
struct CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS;
}
// Forward declare root types
namespace Rewired::Utils::Libraries::CLZF2 {
struct CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS;
}
namespace Rewired::Utils::Libraries::CLZF2 {
class CLZF2;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS);
MARK_REF_T(::Rewired::Utils::Libraries::CLZF2::CLZF2*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS, "Rewired.Utils.Libraries.CLZF2", "CLZF2/QliWGBriIOyDzPHLIHhmldWjVxqS");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Libraries::CLZF2::CLZF2*, "Rewired.Utils.Libraries.CLZF2", "CLZF2");
// Dependencies 
namespace Rewired::Utils::Libraries::CLZF2 {
// Is value type: true
// CS Name: Rewired.Utils.Libraries.CLZF2.CLZF2/QliWGBriIOyDzPHLIHhmldWjVxqS
struct CORDL_TYPE CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS_Unwrapped
enum struct __CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_OutputBufferTooSmall = static_cast<int32_t>(0x1),
__E_Einval = static_cast<int32_t>(0x2),
__E_ZeroSize = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS_Unwrapped () const noexcept {
return static_cast<__CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS(int32_t  value__) noexcept;

/// @brief Field Einval value: I32(2)
static ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS const Einval;

/// @brief Field OutputBufferTooSmall value: I32(1)
static ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS const OutputBufferTooSmall;

/// @brief Field Success value: I32(0)
static ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS const Success;

/// @brief Field ZeroSize value: I32(3)
static ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS const ZeroSize;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Libraries::CLZF2
// Dependencies System.Object
namespace Rewired::Utils::Libraries::CLZF2 {
// Is value type: false
// CS Name: Rewired.Utils.Libraries.CLZF2.CLZF2
class CORDL_TYPE CLZF2 : public ::System::Object {
public:
// Declarations
using QliWGBriIOyDzPHLIHhmldWjVxqS = ::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS;

/// @brief Field KCsZcqwRGVvSEDRBoaiJQkODlccR, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KCsZcqwRGVvSEDRBoaiJQkODlccR, put=__cordl_internal_set_KCsZcqwRGVvSEDRBoaiJQkODlccR)) ::ArrayW<int64_t>  KCsZcqwRGVvSEDRBoaiJQkODlccR;

/// @brief Method Compress, addr 0x18192af70, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Compress(::ArrayW<uint8_t>  inputBytes) ;

/// @brief Method Decompress, addr 0x18192b050, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Decompress(::ArrayW<uint8_t>  inputBytes) ;

/// @brief Method DpPbUlKqPMsyPYXHJwCFHzHqVAzb, addr 0x18192b150, size 0x190, virtual false, abstract: false, final false
inline int32_t DpPbUlKqPMsyPYXHJwCFHzHqVAzb(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace_param_1, ::by_ref<::Rewired::Utils::Libraries::CLZF2::CLZF2_QliWGBriIOyDzPHLIHhmldWjVxqS>  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::Utils::Libraries::CLZF2::CLZF2* New_ctor() ;

/// @brief Method SuLvAkBgwuCqzHFFrjHaIswCSYGH, addr 0x18192b2e0, size 0x3f0, virtual false, abstract: false, final false
inline int32_t SuLvAkBgwuCqzHFFrjHaIswCSYGH(::ArrayW<uint8_t>  _cordl_fixed_empty_name_whitespace, ::by_ref<::ArrayW<uint8_t>>  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_KCsZcqwRGVvSEDRBoaiJQkODlccR() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_KCsZcqwRGVvSEDRBoaiJQkODlccR() ;

constexpr void __cordl_internal_set_KCsZcqwRGVvSEDRBoaiJQkODlccR(::ArrayW<int64_t>  value) ;

/// @brief Method .ctor, addr 0x18192b6d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CLZF2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CLZF2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CLZF2(CLZF2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CLZF2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CLZF2(CLZF2 const& ) = delete;

/// @brief Field FSYXeVFGCPVggGBCnnAFUtyVluWI offset 0xffffffff size 0x4
static constexpr uint32_t  FSYXeVFGCPVggGBCnnAFUtyVluWI{static_cast<uint32_t>(0x4000u)};

/// @brief Field ULnWHFPIFEHkWrCLZimCVwsqRwET offset 0xffffffff size 0x4
static constexpr uint32_t  ULnWHFPIFEHkWrCLZimCVwsqRwET{static_cast<uint32_t>(0x108u)};

/// @brief Field WBiQmBmOJaEjnVaWMFEMebqxpDFyA offset 0xffffffff size 0x4
static constexpr uint32_t  WBiQmBmOJaEjnVaWMFEMebqxpDFyA{static_cast<uint32_t>(0x2000u)};

/// @brief Field ZcrIHqTpGhHMKiywcDCmzSEiztyq offset 0xffffffff size 0x4
static constexpr uint32_t  ZcrIHqTpGhHMKiywcDCmzSEiztyq{static_cast<uint32_t>(0x20u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2952};

/// @brief Field yIVkSrtLNqttLLdfuXwSPLMKipob offset 0xffffffff size 0x4
static constexpr uint32_t  yIVkSrtLNqttLLdfuXwSPLMKipob{static_cast<uint32_t>(0xeu)};

/// @brief Field KCsZcqwRGVvSEDRBoaiJQkODlccR, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___KCsZcqwRGVvSEDRBoaiJQkODlccR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Libraries::CLZF2::CLZF2, ___KCsZcqwRGVvSEDRBoaiJQkODlccR) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Libraries::CLZF2::CLZF2) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Utils::Libraries::CLZF2
