#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineSync.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SplineSync)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineSync;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SplineSync*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineSync*, "", "SplineSync");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SplineSync
class CORDL_TYPE SplineSync : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field autoUpdate, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoUpdate, put=__cordl_internal_set_autoUpdate)) bool  autoUpdate;

/// @brief Field endTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_endTransform, put=__cordl_internal_set_endTransform)) ::UnityW<::UnityEngine::Transform>  endTransform;

/// @brief Field handleTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleTransform, put=__cordl_internal_set_handleTransform)) ::UnityW<::UnityEngine::Transform>  handleTransform;

/// @brief Field startTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTransform, put=__cordl_internal_set_startTransform)) ::UnityW<::UnityEngine::Transform>  startTransform;

/// @brief Field tension, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_tension, put=__cordl_internal_set_tension)) float_t  tension;

/// @brief Method LateUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SplineSync* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803f0960, size 0x300, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr bool const& __cordl_internal_get_autoUpdate() const;

constexpr bool& __cordl_internal_get_autoUpdate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handleTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startTransform() ;

constexpr float_t const& __cordl_internal_get_tension() const;

constexpr float_t& __cordl_internal_get_tension() ;

constexpr void __cordl_internal_set_autoUpdate(bool  value) ;

constexpr void __cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_handleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tension(float_t  value) ;

/// @brief Method .ctor, addr 0x1803f0c60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineSync(SplineSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineSync(SplineSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4969};

/// @brief Field startTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startTransform;

/// @brief Field handleTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handleTransform;

/// @brief Field endTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endTransform;

/// @brief Field tension, offset: 0x38, size: 0x4, def value: None
 float_t  ___tension;

/// @brief Field autoUpdate, offset: 0x3c, size: 0x1, def value: None
 bool  ___autoUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineSync, ___startTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSync, ___handleTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSync, ___endTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSync, ___tension) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineSync, ___autoUpdate) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineSync) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
