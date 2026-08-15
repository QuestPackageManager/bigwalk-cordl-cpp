#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectPaintedBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckEffectPaintedBody)
namespace GlobalNamespace {
class PaintedBody;
}
namespace GlobalNamespace {
struct PeckContext;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectPaintedBody;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectPaintedBody*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectPaintedBody*, "", "PeckEffectPaintedBody");
// Dependencies PeckPlayerReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectPaintedBody
class CORDL_TYPE PeckEffectPaintedBody : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerReference, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_playerReference, put=__cordl_internal_set_playerReference)) ::GlobalNamespace::PeckPlayerReference  playerReference;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetBody, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetBody, put=__cordl_internal_set_targetBody)) ::UnityW<::GlobalNamespace::PaintedBody>  targetBody;

/// @brief Method Awake, addr 0x18044a710, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectPaintedBody* New_ctor() ;

/// @brief Method OnPeck, addr 0x18044a7b0, size 0x100, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::GlobalNamespace::PeckPlayerReference const& __cordl_internal_get_playerReference() const;

constexpr ::GlobalNamespace::PeckPlayerReference& __cordl_internal_get_playerReference() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::GlobalNamespace::PaintedBody> const& __cordl_internal_get_targetBody() const;

constexpr ::UnityW<::GlobalNamespace::PaintedBody>& __cordl_internal_get_targetBody() ;

constexpr void __cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetBody(::UnityW<::GlobalNamespace::PaintedBody>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectPaintedBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPaintedBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectPaintedBody(PeckEffectPaintedBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectPaintedBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectPaintedBody(PeckEffectPaintedBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5395};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field playerReference, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::PeckPlayerReference  ___playerReference;

/// @brief Field targetBody, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PaintedBody>  ___targetBody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectPaintedBody, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPaintedBody, ___playerReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectPaintedBody, ___targetBody) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectPaintedBody) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
