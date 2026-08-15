#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkManagerSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NetworkManagerSelector)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkManagerSelector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkManagerSelector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkManagerSelector*, "", "NetworkManagerSelector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkManagerSelector
class CORDL_TYPE NetworkManagerSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field networkManagerConsole, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkManagerConsole, put=__cordl_internal_set_networkManagerConsole)) ::UnityW<::UnityEngine::GameObject>  networkManagerConsole;

/// @brief Field networkManagerPC, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkManagerPC, put=__cordl_internal_set_networkManagerPC)) ::UnityW<::UnityEngine::GameObject>  networkManagerPC;

/// @brief Method Awake, addr 0x18037eef0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::NetworkManagerSelector* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_networkManagerConsole() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_networkManagerConsole() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_networkManagerPC() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_networkManagerPC() ;

constexpr void __cordl_internal_set_networkManagerConsole(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_networkManagerPC(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkManagerSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkManagerSelector(NetworkManagerSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkManagerSelector(NetworkManagerSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5545};

/// @brief Field networkManagerPC, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___networkManagerPC;

/// @brief Field networkManagerConsole, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___networkManagerConsole;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkManagerSelector, ___networkManagerPC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkManagerSelector, ___networkManagerConsole) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkManagerSelector) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
