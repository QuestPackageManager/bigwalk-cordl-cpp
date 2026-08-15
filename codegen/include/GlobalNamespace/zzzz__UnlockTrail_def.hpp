#pragma once
// IWYU pragma private; include "GlobalNamespace/UnlockTrail.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UnlockTrail)
namespace GlobalNamespace {
class UnlockTrailStation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class UnlockTrail;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnlockTrail*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnlockTrail*, "", "UnlockTrail");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnlockTrail
class CORDL_TYPE UnlockTrail : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field finalTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalTarget, put=__cordl_internal_set_finalTarget)) ::UnityW<::UnityEngine::Transform>  finalTarget;

/// @brief Field stations, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stations, put=__cordl_internal_set_stations)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>*  stations;

static inline ::GlobalNamespace::UnlockTrail* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18041a740, size 0x200, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_finalTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_finalTarget() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>* const& __cordl_internal_get_stations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>*& __cordl_internal_get_stations() ;

constexpr void __cordl_internal_set_finalTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlockTrail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlockTrail", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlockTrail(UnlockTrail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlockTrail", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlockTrail(UnlockTrail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5149};

/// @brief Field stations, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::UnlockTrailStation>>*  ___stations;

/// @brief Field finalTarget, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___finalTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnlockTrail, ___stations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnlockTrail, ___finalTarget) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnlockTrail) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
