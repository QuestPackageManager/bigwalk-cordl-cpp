#pragma once
// IWYU pragma private; include "Mirror/NetworkStartPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NetworkStartPosition)
// Forward declare root types
namespace Mirror {
class NetworkStartPosition;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkStartPosition*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkStartPosition*, "Mirror", "NetworkStartPosition");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkStartPosition
class CORDL_TYPE NetworkStartPosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x181594910, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::NetworkStartPosition* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181594930, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkStartPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkStartPosition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkStartPosition(NetworkStartPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStartPosition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkStartPosition(NetworkStartPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18342};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::NetworkStartPosition) == 0x20, "Size mismatch!");

} // namespace end def Mirror
