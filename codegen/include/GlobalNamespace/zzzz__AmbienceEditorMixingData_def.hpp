#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceEditorMixingData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AmbienceEditorMixingData)
// Forward declare root types
namespace GlobalNamespace {
class AmbienceEditorMixingData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AmbienceEditorMixingData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceEditorMixingData*, "", "AmbienceEditorMixingData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AmbienceEditorMixingData
class CORDL_TYPE AmbienceEditorMixingData : public ::System::Object {
public:
// Declarations
/// @brief Field Intensity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Intensity, put=__cordl_internal_set_Intensity)) float_t  Intensity;

/// @brief Field Mute, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Mute, put=__cordl_internal_set_Mute)) bool  Mute;

/// @brief Field Solo, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_Solo, put=__cordl_internal_set_Solo)) bool  Solo;

static inline ::GlobalNamespace::AmbienceEditorMixingData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_Intensity() const;

constexpr float_t& __cordl_internal_get_Intensity() ;

constexpr bool const& __cordl_internal_get_Mute() const;

constexpr bool& __cordl_internal_get_Mute() ;

constexpr bool const& __cordl_internal_get_Solo() const;

constexpr bool& __cordl_internal_get_Solo() ;

constexpr void __cordl_internal_set_Intensity(float_t  value) ;

constexpr void __cordl_internal_set_Mute(bool  value) ;

constexpr void __cordl_internal_set_Solo(bool  value) ;

/// @brief Method .ctor, addr 0x180316900, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceEditorMixingData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbienceEditorMixingData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbienceEditorMixingData(AmbienceEditorMixingData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbienceEditorMixingData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbienceEditorMixingData(AmbienceEditorMixingData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4799};

/// @brief Field Mute, offset: 0x10, size: 0x1, def value: None
 bool  ___Mute;

/// @brief Field Solo, offset: 0x11, size: 0x1, def value: None
 bool  ___Solo;

/// @brief Field Intensity, offset: 0x14, size: 0x4, def value: None
 float_t  ___Intensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceEditorMixingData, ___Mute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEditorMixingData, ___Solo) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEditorMixingData, ___Intensity) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceEditorMixingData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
