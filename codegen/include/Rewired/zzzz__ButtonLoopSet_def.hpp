#pragma once
// IWYU pragma private; include "Rewired/ButtonLoopSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__UpdateLoopDataSet_1_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonLoopSet)
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired {
class ButtonLoopSet_ButtonData;
}
namespace Rewired {
struct UpdateLoopType;
}
// Forward declare root types
namespace Rewired {
class ButtonLoopSet;
}
namespace Rewired {
class ButtonLoopSet_ButtonData;
}
// Write type traits
MARK_REF_T(::Rewired::ButtonLoopSet*);
MARK_REF_T(::Rewired::ButtonLoopSet_ButtonData*);
DEFINE_IL2CPP_CLASS(::Rewired::ButtonLoopSet*, "Rewired", "ButtonLoopSet");
DEFINE_IL2CPP_CLASS(::Rewired::ButtonLoopSet_ButtonData*, "Rewired", "ButtonLoopSet/ButtonData");
// Dependencies Rewired.UpdateLoopType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ButtonLoopSet/ButtonData
class CORDL_TYPE ButtonLoopSet_ButtonData : public ::System::Object {
public:
// Declarations
/// @brief Field FXMSmRcSdDrmrPmBDymxqsxoekrM, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FXMSmRcSdDrmrPmBDymxqsxoekrM, put=__cordl_internal_set_FXMSmRcSdDrmrPmBDymxqsxoekrM)) ::ArrayW<bool>  FXMSmRcSdDrmrPmBDymxqsxoekrM;

/// @brief Field XihaZNQkpUGgyulFnUOEZNmJACTA, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_XihaZNQkpUGgyulFnUOEZNmJACTA, put=__cordl_internal_set_XihaZNQkpUGgyulFnUOEZNmJACTA)) int32_t  XihaZNQkpUGgyulFnUOEZNmJACTA;

/// @brief Field aRbmNmmMYXiCpzYzvdbuvfZbSdAS, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_aRbmNmmMYXiCpzYzvdbuvfZbSdAS, put=__cordl_internal_set_aRbmNmmMYXiCpzYzvdbuvfZbSdAS)) ::ArrayW<bool>  aRbmNmmMYXiCpzYzvdbuvfZbSdAS;

 __declspec(property(get=get_effectiveValue)) ::ArrayW<bool>  effectiveValue;

/// @brief Field kpnJPAVPshKmiQxELfTlECdYEejr, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_kpnJPAVPshKmiQxELfTlECdYEejr, put=__cordl_internal_set_kpnJPAVPshKmiQxELfTlECdYEejr)) ::ArrayW<bool>  kpnJPAVPshKmiQxELfTlECdYEejr;

/// @brief Field updateLoop, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateLoop, put=__cordl_internal_set_updateLoop)) ::Rewired::UpdateLoopType  updateLoop;

/// @brief Field values, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::ArrayW<bool>  values;

/// @brief Field wasTrueThisFrame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_wasTrueThisFrame, put=__cordl_internal_set_wasTrueThisFrame)) ::ArrayW<bool>  wasTrueThisFrame;

/// @brief Method Clear, addr 0x181838360, size 0xf0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearWasTrueThisFrame, addr 0x1818382e0, size 0x80, virtual false, abstract: false, final false
inline void ClearWasTrueThisFrame() ;

/// @brief Method Import, addr 0x181838450, size 0x120, virtual false, abstract: false, final false
inline void Import(::Rewired::ButtonLoopSet_ButtonData*  source) ;

static inline ::Rewired::ButtonLoopSet_ButtonData* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method SetValue, addr 0x181838570, size 0xb0, virtual false, abstract: false, final false
inline void SetValue(int32_t  index, bool  value) ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_FXMSmRcSdDrmrPmBDymxqsxoekrM() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_FXMSmRcSdDrmrPmBDymxqsxoekrM() ;

constexpr int32_t const& __cordl_internal_get_XihaZNQkpUGgyulFnUOEZNmJACTA() const;

constexpr int32_t& __cordl_internal_get_XihaZNQkpUGgyulFnUOEZNmJACTA() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_aRbmNmmMYXiCpzYzvdbuvfZbSdAS() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_aRbmNmmMYXiCpzYzvdbuvfZbSdAS() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_kpnJPAVPshKmiQxELfTlECdYEejr() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_kpnJPAVPshKmiQxELfTlECdYEejr() ;

constexpr ::Rewired::UpdateLoopType const& __cordl_internal_get_updateLoop() const;

constexpr ::Rewired::UpdateLoopType& __cordl_internal_get_updateLoop() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_values() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_values() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_wasTrueThisFrame() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_wasTrueThisFrame() ;

constexpr void __cordl_internal_set_FXMSmRcSdDrmrPmBDymxqsxoekrM(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_XihaZNQkpUGgyulFnUOEZNmJACTA(int32_t  value) ;

constexpr void __cordl_internal_set_aRbmNmmMYXiCpzYzvdbuvfZbSdAS(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_kpnJPAVPshKmiQxELfTlECdYEejr(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_updateLoop(::Rewired::UpdateLoopType  value) ;

constexpr void __cordl_internal_set_values(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_wasTrueThisFrame(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x181838620, size 0x100, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_effectiveValue, addr 0x181838720, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<bool> get_effectiveValue() ;

/// @brief Method ifgdqPrqRMEIyIuIIakFaqRCARAmA, addr 0x181838750, size 0x100, virtual false, abstract: false, final false
inline void ifgdqPrqRMEIyIuIIakFaqRCARAmA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonLoopSet_ButtonData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonLoopSet_ButtonData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonLoopSet_ButtonData(ButtonLoopSet_ButtonData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonLoopSet_ButtonData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonLoopSet_ButtonData(ButtonLoopSet_ButtonData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1797};

/// @brief Field updateLoop, offset: 0x10, size: 0x4, def value: None
 ::Rewired::UpdateLoopType  ___updateLoop;

/// @brief Field values, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<bool>  ___values;

/// @brief Field wasTrueThisFrame, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___wasTrueThisFrame;

/// @brief Field FXMSmRcSdDrmrPmBDymxqsxoekrM, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<bool>  ___FXMSmRcSdDrmrPmBDymxqsxoekrM;

/// @brief Field XihaZNQkpUGgyulFnUOEZNmJACTA, offset: 0x30, size: 0x4, def value: None
 int32_t  ___XihaZNQkpUGgyulFnUOEZNmJACTA;

/// @brief Field kpnJPAVPshKmiQxELfTlECdYEejr, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<bool>  ___kpnJPAVPshKmiQxELfTlECdYEejr;

/// @brief Field aRbmNmmMYXiCpzYzvdbuvfZbSdAS, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<bool>  ___aRbmNmmMYXiCpzYzvdbuvfZbSdAS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___updateLoop) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___wasTrueThisFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___FXMSmRcSdDrmrPmBDymxqsxoekrM) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___XihaZNQkpUGgyulFnUOEZNmJACTA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___kpnJPAVPshKmiQxELfTlECdYEejr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ButtonLoopSet_ButtonData, ___aRbmNmmMYXiCpzYzvdbuvfZbSdAS) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::ButtonLoopSet_ButtonData) == 0x48, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.UpdateLoopDataSet`1<T>
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ButtonLoopSet
class CORDL_TYPE ButtonLoopSet : public ::Rewired::UpdateLoopDataSet_1<::Rewired::ButtonLoopSet_ButtonData*> {
public:
// Declarations
using ButtonData = ::Rewired::ButtonLoopSet_ButtonData;

/// @brief Field buttonCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonCount, put=__cordl_internal_set_buttonCount)) int32_t  buttonCount;

/// @brief Method Clear, addr 0x181838850, size 0x150, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Import, addr 0x1818389a0, size 0x1d0, virtual false, abstract: false, final false
inline void Import(::Rewired::ButtonLoopSet*  set) ;

static inline ::Rewired::ButtonLoopSet* New_ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method SetValue, addr 0x181838b70, size 0x100, virtual false, abstract: false, final false
inline void SetValue(int32_t  index, bool  value, double_t  timestamp) ;

constexpr int32_t const& __cordl_internal_get_buttonCount() const;

constexpr int32_t& __cordl_internal_get_buttonCount() ;

constexpr void __cordl_internal_set_buttonCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x181838c70, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Config::UpdateLoopSetting  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonLoopSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonLoopSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonLoopSet(ButtonLoopSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonLoopSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonLoopSet(ButtonLoopSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1798};

/// @brief Field buttonCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___buttonCount;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ButtonLoopSet, ___buttonCount) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Rewired::ButtonLoopSet) == 0x40, "Size mismatch!");

} // namespace end def Rewired
