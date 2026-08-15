#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectCurseEyes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectCurseEyes)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectCurseEyes_CurseState;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectCurseEyes_CurseState;
}
namespace GlobalNamespace {
class PeckEffectCurseEyes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectCurseEyes_CurseState);
MARK_REF_T(::GlobalNamespace::PeckEffectCurseEyes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectCurseEyes_CurseState, "", "PeckEffectCurseEyes/CurseState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectCurseEyes*, "", "PeckEffectCurseEyes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectCurseEyes/CurseState
struct CORDL_TYPE PeckEffectCurseEyes_CurseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectCurseEyes_CurseState_Unwrapped
enum struct __PeckEffectCurseEyes_CurseState_Unwrapped : int32_t {
__E_NotCursed = static_cast<int32_t>(0x0),
__E_Cursed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectCurseEyes_CurseState_Unwrapped () const noexcept {
return static_cast<__PeckEffectCurseEyes_CurseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectCurseEyes_CurseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectCurseEyes_CurseState(int32_t  value__) noexcept;

/// @brief Field Cursed value: I32(1)
static ::GlobalNamespace::PeckEffectCurseEyes_CurseState const Cursed;

/// @brief Field NotCursed value: I32(0)
static ::GlobalNamespace::PeckEffectCurseEyes_CurseState const NotCursed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectCurseEyes_CurseState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectCurseEyes_CurseState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectCurseEyes::CurseState, PeckPlayerReference, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectCurseEyes
class CORDL_TYPE PeckEffectCurseEyes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CurseState = ::GlobalNamespace::PeckEffectCurseEyes_CurseState;

/// @brief Field cursedMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cursedMesh, put=__cordl_internal_set_cursedMesh)) ::UnityW<::UnityEngine::Mesh>  cursedMesh;

/// @brief Field normalMesh, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalMesh, put=__cordl_internal_set_normalMesh)) ::UnityW<::UnityEngine::Mesh>  normalMesh;

/// @brief Field playerReference, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_playerReference, put=__cordl_internal_set_playerReference)) ::GlobalNamespace::PeckPlayerReference  playerReference;

/// @brief Field settingsPerState, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsPerState, put=__cordl_internal_set_settingsPerState)) ::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState>  settingsPerState;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Method Awake, addr 0x180449430, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectCurseEyes* New_ctor() ;

/// @brief Method OnPeck, addr 0x1804494d0, size 0x120, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_cursedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_cursedMesh() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_normalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_normalMesh() ;

constexpr ::GlobalNamespace::PeckPlayerReference const& __cordl_internal_get_playerReference() const;

constexpr ::GlobalNamespace::PeckPlayerReference& __cordl_internal_get_playerReference() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState> const& __cordl_internal_get_settingsPerState() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState>& __cordl_internal_get_settingsPerState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr void __cordl_internal_set_cursedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_normalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_playerReference(::GlobalNamespace::PeckPlayerReference  value) ;

constexpr void __cordl_internal_set_settingsPerState(::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectCurseEyes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectCurseEyes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectCurseEyes(PeckEffectCurseEyes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectCurseEyes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectCurseEyes(PeckEffectCurseEyes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5381};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field normalMesh, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___normalMesh;

/// @brief Field cursedMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___cursedMesh;

/// @brief Field playerReference, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::PeckPlayerReference  ___playerReference;

/// @brief Field settingsPerState, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectCurseEyes_CurseState>  ___settingsPerState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectCurseEyes, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectCurseEyes, ___normalMesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectCurseEyes, ___cursedMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectCurseEyes, ___playerReference) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectCurseEyes, ___settingsPerState) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectCurseEyes) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
