#pragma once
// IWYU pragma private; include "Mirror/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace Mirror {
class LocalConnectionToClient;
}
namespace Mirror {
class LocalConnectionToServer;
}
namespace Mirror {
class NetworkIdentity;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Mirror {
class Utils;
}
// Write type traits
MARK_REF_T(::Mirror::Utils*);
DEFINE_IL2CPP_CLASS(::Mirror::Utils*, "Mirror", "Utils");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Method CreateLocalConnections, addr 0x181598900, size 0xb0, virtual false, abstract: false, final false
static inline void CreateLocalConnections(::by_ref<::Mirror::LocalConnectionToClient*>  connectionToClient, ::by_ref<::Mirror::LocalConnectionToServer*>  connectionToServer) ;

/// @brief Method GetSpawnedInServerOrClient, addr 0x1815989b0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::NetworkIdentity> GetSpawnedInServerOrClient(uint32_t  netId) ;

/// @brief Method GetTrueRandomUInt, addr 0x181598a90, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t GetTrueRandomUInt() ;

/// @brief Method IsPointInScreen, addr 0x181598b80, size 0x80, virtual false, abstract: false, final false
static inline bool IsPointInScreen(::UnityEngine::Vector2  point) ;

/// @brief Method IsPrefab, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool IsPrefab(::UnityEngine::GameObject*  obj) ;

/// @brief Method IsSceneActive, addr 0x181598c00, size 0x70, virtual false, abstract: false, final false
static inline bool IsSceneActive(::StringW  scene) ;

/// @brief Method IsSceneObject, addr 0x181598d00, size 0x70, virtual false, abstract: false, final false
static inline bool IsSceneObject(::Mirror::NetworkIdentity*  identity) ;

/// @brief Method IsSceneObjectWithPrefabParent, addr 0x181598c70, size 0x90, virtual false, abstract: false, final false
static inline bool IsSceneObjectWithPrefabParent(::UnityEngine::GameObject*  gameObject, ::by_ref<::UnityEngine::GameObject*>  prefab) ;

/// @brief Method KeepInScreen, addr 0x181598d70, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect KeepInScreen(::UnityEngine::Rect  rect) ;

/// @brief Method PrettyBytes, addr 0x181587bd0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW PrettyBytes(int64_t  bytes) ;

/// @brief Method PrettySeconds, addr 0x181598e10, size 0x330, virtual false, abstract: false, final false
static inline ::StringW PrettySeconds(double_t  seconds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Utils) == 0x10, "Size mismatch!");

} // namespace end def Mirror
