#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalGlowData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEGlobalGlowData)
// Forward declare root types
namespace TheVisualEngine {
class TVEGlobalGlowData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGlobalGlowData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGlobalGlowData*, "TheVisualEngine", "TVEGlobalGlowData");
// Dependencies System.Object, UnityEngine.Color
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGlobalGlowData
class CORDL_TYPE TVEGlobalGlowData : public ::System::Object {
public:
// Declarations
/// @brief Field emissiveColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_emissiveColor, put=__cordl_internal_set_emissiveColor)) ::UnityEngine::Color  emissiveColor;

/// @brief Field emissiveIntensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_emissiveIntensity, put=__cordl_internal_set_emissiveIntensity)) float_t  emissiveIntensity;

/// @brief Field subsurfaceIntensity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_subsurfaceIntensity, put=__cordl_internal_set_subsurfaceIntensity)) float_t  subsurfaceIntensity;

static inline ::TheVisualEngine::TVEGlobalGlowData* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_emissiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_emissiveColor() ;

constexpr float_t const& __cordl_internal_get_emissiveIntensity() const;

constexpr float_t& __cordl_internal_get_emissiveIntensity() ;

constexpr float_t const& __cordl_internal_get_subsurfaceIntensity() const;

constexpr float_t& __cordl_internal_get_subsurfaceIntensity() ;

constexpr void __cordl_internal_set_emissiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_emissiveIntensity(float_t  value) ;

constexpr void __cordl_internal_set_subsurfaceIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x1804b96e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGlobalGlowData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalGlowData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGlobalGlowData(TVEGlobalGlowData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalGlowData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGlobalGlowData(TVEGlobalGlowData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19598};

/// @brief Field emissiveIntensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___emissiveIntensity;

/// @brief Field emissiveColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___emissiveColor;

/// @brief Field subsurfaceIntensity, offset: 0x24, size: 0x4, def value: None
 float_t  ___subsurfaceIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEGlobalGlowData, ___emissiveIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalGlowData, ___emissiveColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalGlowData, ___subsurfaceIntensity) == 0x24, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEGlobalGlowData) == 0x28, "Size mismatch!");

} // namespace end def TheVisualEngine
