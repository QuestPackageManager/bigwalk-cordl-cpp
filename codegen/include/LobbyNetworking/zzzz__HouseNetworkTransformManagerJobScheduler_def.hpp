#pragma once
// IWYU pragma private; include "LobbyNetworking/HouseNetworkTransformManagerJobScheduler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HouseNetworkTransformManagerJobScheduler)
namespace LobbyNetworking {
class HouseNetworkTransformManager;
}
// Forward declare root types
namespace LobbyNetworking {
class HouseNetworkTransformManagerJobScheduler;
}
// Write type traits
MARK_REF_T(::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*);
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransformManagerJobScheduler*, "LobbyNetworking", "HouseNetworkTransformManagerJobScheduler");
// Dependencies UnityEngine.MonoBehaviour
namespace LobbyNetworking {
// Is value type: false
// CS Name: LobbyNetworking.HouseNetworkTransformManagerJobScheduler
class CORDL_TYPE HouseNetworkTransformManagerJobScheduler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _manager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__manager, put=__cordl_internal_set__manager)) ::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  _manager;

/// @brief Method Awake, addr 0x1803c7e40, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1803c7e70, size 0x70, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::LobbyNetworking::HouseNetworkTransformManagerJobScheduler* New_ctor() ;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransformManager> const& __cordl_internal_get__manager() const;

constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransformManager>& __cordl_internal_get__manager() ;

constexpr void __cordl_internal_set__manager(::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransformManagerJobScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkTransformManagerJobScheduler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkTransformManagerJobScheduler(HouseNetworkTransformManagerJobScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkTransformManagerJobScheduler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkTransformManagerJobScheduler(HouseNetworkTransformManagerJobScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5761};

/// @brief Field _manager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  ____manager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManagerJobScheduler, ____manager) == 0x20, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransformManagerJobScheduler) == 0x28, "Size mismatch!");

} // namespace end def LobbyNetworking
