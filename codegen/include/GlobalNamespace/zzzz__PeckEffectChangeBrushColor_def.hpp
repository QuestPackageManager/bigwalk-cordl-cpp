#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectChangeBrushColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectChangeBrushColor)
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectChangeBrushColor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectChangeBrushColor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectChangeBrushColor*, "", "PeckEffectChangeBrushColor");
// Dependencies PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectChangeBrushColor
class CORDL_TYPE PeckEffectChangeBrushColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colorID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorID, put=__cordl_internal_set_colorID)) int32_t  colorID;

/// @brief Field logVerbose, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field systemReference, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180448b90, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectChangeBrushColor* New_ctor() ;

/// @brief Method Peck, addr 0x180448c30, size 0x120, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

constexpr int32_t const& __cordl_internal_get_colorID() const;

constexpr int32_t& __cordl_internal_get_colorID() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_colorID(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectChangeBrushColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeBrushColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectChangeBrushColor(PeckEffectChangeBrushColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectChangeBrushColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectChangeBrushColor(PeckEffectChangeBrushColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5373};

/// @brief Field colorID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___colorID;

/// @brief Field systemReference, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field logVerbose, offset: 0x50, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectChangeBrushColor, ___colorID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeBrushColor, ___systemReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectChangeBrushColor, ___logVerbose) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectChangeBrushColor) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
