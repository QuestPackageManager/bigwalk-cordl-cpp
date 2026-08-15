#pragma once
// IWYU pragma private; include "HouseCulling/CullingRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HouseCulling/zzzz__CullingState_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(CullingRegion)
namespace HouseCulling {
class CullingLocation;
}
namespace HouseCulling {
struct CullingState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HouseCulling {
class CullingRegion;
}
// Write type traits
MARK_REF_T(::HouseCulling::CullingRegion*);
DEFINE_IL2CPP_CLASS(::HouseCulling::CullingRegion*, "HouseCulling", "CullingRegion");
// Dependencies HouseCulling.CullingState, UnityEngine.ScriptableObject
namespace HouseCulling {
// Is value type: false
// CS Name: HouseCulling.CullingRegion
class CORDL_TYPE CullingRegion : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _state, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::HouseCulling::CullingState  _state;

/// @brief Field connectedLocations, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedLocations, put=__cordl_internal_set_connectedLocations)) ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  connectedLocations;

 __declspec(property(get=get_state, put=set_state)) ::HouseCulling::CullingState  state;

static inline ::HouseCulling::CullingRegion* New_ctor() ;

constexpr ::HouseCulling::CullingState const& __cordl_internal_get__state() const;

constexpr ::HouseCulling::CullingState& __cordl_internal_get__state() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>* const& __cordl_internal_get_connectedLocations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*& __cordl_internal_get_connectedLocations() ;

constexpr void __cordl_internal_set__state(::HouseCulling::CullingState  value) ;

constexpr void __cordl_internal_set_connectedLocations(::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  value) ;

/// @brief Method .ctor, addr 0x1803bf1e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_state, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::HouseCulling::CullingState get_state() ;

/// @brief Method set_state, addr 0x1803bf1f0, size 0xa0, virtual false, abstract: false, final false
inline void set_state(::HouseCulling::CullingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingRegion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingRegion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingRegion(CullingRegion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingRegion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingRegion(CullingRegion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5785};

/// @brief Field connectedLocations, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  ___connectedLocations;

/// @brief Field _state, offset: 0x20, size: 0x4, def value: None
 ::HouseCulling::CullingState  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseCulling::CullingRegion, ___connectedLocations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HouseCulling::CullingRegion, ____state) == 0x20, "Offset mismatch!");

static_assert(sizeof(::HouseCulling::CullingRegion) == 0x28, "Size mismatch!");

} // namespace end def HouseCulling
