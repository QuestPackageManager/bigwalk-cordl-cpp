#pragma once
// IWYU pragma private; include "GlobalNamespace/BlurSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BlurSettings)
// Forward declare root types
namespace GlobalNamespace {
class BlurSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BlurSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlurSettings*, "", "BlurSettings");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlurSettings
class CORDL_TYPE BlurSettings : public ::System::Object {
public:
// Declarations
/// @brief Field horizontalBlur, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalBlur, put=__cordl_internal_set_horizontalBlur)) float_t  horizontalBlur;

/// @brief Field verticalBlur, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalBlur, put=__cordl_internal_set_verticalBlur)) float_t  verticalBlur;

static inline ::GlobalNamespace::BlurSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_horizontalBlur() const;

constexpr float_t& __cordl_internal_get_horizontalBlur() ;

constexpr float_t const& __cordl_internal_get_verticalBlur() const;

constexpr float_t& __cordl_internal_get_verticalBlur() ;

constexpr void __cordl_internal_set_horizontalBlur(float_t  value) ;

constexpr void __cordl_internal_set_verticalBlur(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BlurSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BlurSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlurSettings(BlurSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlurSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlurSettings(BlurSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4766};

/// @brief Field horizontalBlur, offset: 0x10, size: 0x4, def value: None
 float_t  ___horizontalBlur;

/// @brief Field verticalBlur, offset: 0x14, size: 0x4, def value: None
 float_t  ___verticalBlur;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlurSettings, ___horizontalBlur) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlurSettings, ___verticalBlur) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlurSettings) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
