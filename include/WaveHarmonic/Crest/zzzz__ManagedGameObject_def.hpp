#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ManagedGameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ManagedGameObject)
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ManagedGameObject;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ManagedGameObject*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ManagedGameObject*, "WaveHarmonic.Crest", "ManagedGameObject");
// Dependencies UnityEngine.MonoBehaviour
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ManagedGameObject
class CORDL_TYPE ManagedGameObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Owner, put=set_Owner)) ::UnityW<::UnityEngine::Component>  Owner;

/// @brief Field <Owner>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Owner_k__BackingField, put=__cordl_internal_set__Owner_k__BackingField)) ::UnityW<::UnityEngine::Component>  _Owner_k__BackingField;

static inline ::WaveHarmonic::Crest::ManagedGameObject* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get__Owner_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get__Owner_k__BackingField() ;

constexpr void __cordl_internal_set__Owner_k__BackingField(::UnityW<::UnityEngine::Component>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Owner, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_Owner() ;

/// @brief Method set_Owner, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Owner(::UnityEngine::Component*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedGameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedGameObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedGameObject(ManagedGameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedGameObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedGameObject(ManagedGameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20125};

/// @brief Field <Owner>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ____Owner_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ManagedGameObject, ____Owner_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ManagedGameObject) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
