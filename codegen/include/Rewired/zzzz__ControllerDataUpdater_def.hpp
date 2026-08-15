#pragma once
// IWYU pragma private; include "Rewired/ControllerDataUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__UnknownControllerHat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerDataUpdater)
namespace Rewired {
struct InputSource;
}
namespace Rewired {
class UnknownControllerHat_HatButtons;
}
namespace Rewired {
class UnknownControllerHat;
}
// Forward declare root types
namespace Rewired {
class ControllerDataUpdater;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerDataUpdater*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerDataUpdater*, "Rewired", "ControllerDataUpdater");
// Dependencies Rewired.InputSource, Rewired.UnknownControllerHat, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerDataUpdater
class CORDL_TYPE ControllerDataUpdater : public ::System::Object {
public:
// Declarations
/// @brief Field XuMeXfVIHvEcIWovAeYEczZBvpNd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_XuMeXfVIHvEcIWovAeYEczZBvpNd, put=__cordl_internal_set_XuMeXfVIHvEcIWovAeYEczZBvpNd)) ::ArrayW<::Rewired::UnknownControllerHat*>  XuMeXfVIHvEcIWovAeYEczZBvpNd;

/// @brief Field axisCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisCount, put=__cordl_internal_set_axisCount)) int32_t  axisCount;

/// @brief Field axisHasBeenPressedOSXLinux, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisHasBeenPressedOSXLinux, put=__cordl_internal_set_axisHasBeenPressedOSXLinux)) ::ArrayW<bool>  axisHasBeenPressedOSXLinux;

/// @brief Field axisValues, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisValues, put=__cordl_internal_set_axisValues)) ::ArrayW<float_t>  axisValues;

/// @brief Field buttonCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonCount, put=__cordl_internal_set_buttonCount)) int32_t  buttonCount;

/// @brief Field buttonPressureValues, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonPressureValues, put=__cordl_internal_set_buttonPressureValues)) ::ArrayW<float_t>  buttonPressureValues;

/// @brief Field buttonValues, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonValues, put=__cordl_internal_set_buttonValues)) ::ArrayW<bool>  buttonValues;

/// @brief Field hasReceivedInput, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasReceivedInput, put=__cordl_internal_set_hasReceivedInput)) bool  hasReceivedInput;

/// @brief Field source, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Rewired::InputSource  source;

/// @brief Method ClearData, addr 0x18195c6e0, size 0x90, virtual false, abstract: false, final false
inline void ClearData() ;

/// @brief Method GetUnknownHatButtons, addr 0x18195c770, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::UnknownControllerHat_HatButtons* GetUnknownHatButtons(int32_t  buttonIndex) ;

/// @brief Method IsUnknownHatCardinal, addr 0x18195c810, size 0x90, virtual false, abstract: false, final false
inline bool IsUnknownHatCardinal(int32_t  buttonIndex) ;

static inline ::Rewired::ControllerDataUpdater* New_ctor(::Rewired::InputSource  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::UnknownControllerHat*>  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr ::ArrayW<::Rewired::UnknownControllerHat*> const& __cordl_internal_get_XuMeXfVIHvEcIWovAeYEczZBvpNd() const;

constexpr ::ArrayW<::Rewired::UnknownControllerHat*>& __cordl_internal_get_XuMeXfVIHvEcIWovAeYEczZBvpNd() ;

constexpr int32_t const& __cordl_internal_get_axisCount() const;

constexpr int32_t& __cordl_internal_get_axisCount() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_axisHasBeenPressedOSXLinux() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_axisHasBeenPressedOSXLinux() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_axisValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_axisValues() ;

constexpr int32_t const& __cordl_internal_get_buttonCount() const;

constexpr int32_t& __cordl_internal_get_buttonCount() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_buttonPressureValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_buttonPressureValues() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_buttonValues() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_buttonValues() ;

constexpr bool const& __cordl_internal_get_hasReceivedInput() const;

constexpr bool& __cordl_internal_get_hasReceivedInput() ;

constexpr ::Rewired::InputSource const& __cordl_internal_get_source() const;

constexpr ::Rewired::InputSource& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_XuMeXfVIHvEcIWovAeYEczZBvpNd(::ArrayW<::Rewired::UnknownControllerHat*>  value) ;

constexpr void __cordl_internal_set_axisCount(int32_t  value) ;

constexpr void __cordl_internal_set_axisHasBeenPressedOSXLinux(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_axisValues(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_buttonCount(int32_t  value) ;

constexpr void __cordl_internal_set_buttonPressureValues(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_buttonValues(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_hasReceivedInput(bool  value) ;

constexpr void __cordl_internal_set_source(::Rewired::InputSource  value) ;

/// @brief Method .ctor, addr 0x18195c8a0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::InputSource  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::UnknownControllerHat*>  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerDataUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerDataUpdater(ControllerDataUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerDataUpdater(ControllerDataUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1973};

/// @brief Field source, offset: 0x10, size: 0x4, def value: None
 ::Rewired::InputSource  ___source;

/// @brief Field axisCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___axisCount;

/// @brief Field buttonCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___buttonCount;

/// @brief Field axisValues, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___axisValues;

/// @brief Field buttonValues, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<bool>  ___buttonValues;

/// @brief Field buttonPressureValues, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___buttonPressureValues;

/// @brief Field axisHasBeenPressedOSXLinux, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<bool>  ___axisHasBeenPressedOSXLinux;

/// @brief Field XuMeXfVIHvEcIWovAeYEczZBvpNd, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Rewired::UnknownControllerHat*>  ___XuMeXfVIHvEcIWovAeYEczZBvpNd;

/// @brief Field hasReceivedInput, offset: 0x48, size: 0x1, def value: None
 bool  ___hasReceivedInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerDataUpdater, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___axisCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___buttonCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___axisValues) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___buttonValues) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___buttonPressureValues) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___axisHasBeenPressedOSXLinux) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___XuMeXfVIHvEcIWovAeYEczZBvpNd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerDataUpdater, ___hasReceivedInput) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerDataUpdater) == 0x50, "Size mismatch!");

} // namespace end def Rewired
