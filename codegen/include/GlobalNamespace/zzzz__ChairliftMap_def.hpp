#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairliftMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ChairliftMap)
namespace GlobalNamespace {
class ChairLiftWireMinder;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ChairliftMap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChairliftMap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChairliftMap*, "", "ChairliftMap");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChairliftMap
class CORDL_TYPE ChairliftMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field chairLiftWireMinderireMinder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_chairLiftWireMinderireMinder, put=__cordl_internal_set_chairLiftWireMinderireMinder)) ::UnityW<::GlobalNamespace::ChairLiftWireMinder>  chairLiftWireMinderireMinder;

/// @brief Field chairliftMapPolePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_chairliftMapPolePrefab, put=__cordl_internal_set_chairliftMapPolePrefab)) ::UnityW<::UnityEngine::GameObject>  chairliftMapPolePrefab;

/// @brief Field polesParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_polesParent, put=__cordl_internal_set_polesParent)) ::UnityW<::UnityEngine::Transform>  polesParent;

static inline ::GlobalNamespace::ChairliftMap* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::ChairLiftWireMinder> const& __cordl_internal_get_chairLiftWireMinderireMinder() const;

constexpr ::UnityW<::GlobalNamespace::ChairLiftWireMinder>& __cordl_internal_get_chairLiftWireMinderireMinder() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_chairliftMapPolePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_chairliftMapPolePrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_polesParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_polesParent() ;

constexpr void __cordl_internal_set_chairLiftWireMinderireMinder(::UnityW<::GlobalNamespace::ChairLiftWireMinder>  value) ;

constexpr void __cordl_internal_set_chairliftMapPolePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_polesParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChairliftMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChairliftMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChairliftMap(ChairliftMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChairliftMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChairliftMap(ChairliftMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5060};

/// @brief Field chairLiftWireMinderireMinder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ChairLiftWireMinder>  ___chairLiftWireMinderireMinder;

/// @brief Field chairliftMapPolePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___chairliftMapPolePrefab;

/// @brief Field polesParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___polesParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChairliftMap, ___chairLiftWireMinderireMinder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftMap, ___chairliftMapPolePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChairliftMap, ___polesParent) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChairliftMap) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
