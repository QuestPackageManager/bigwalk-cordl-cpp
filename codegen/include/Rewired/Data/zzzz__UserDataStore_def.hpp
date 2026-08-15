#pragma once
// IWYU pragma private; include "Rewired/Data/UserDataStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataStore)
namespace Rewired::Interfaces {
class IControllerMapStore;
}
namespace Rewired::Interfaces {
class IUserDataStore;
}
namespace Rewired {
struct ControllerIdentifier;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
namespace Rewired {
struct ControllerType;
}
// Forward declare root types
namespace Rewired::Data {
class UserDataStore;
}
// Write type traits
MARK_REF_T(::Rewired::Data::UserDataStore*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::UserDataStore*, "Rewired.Data", "UserDataStore");
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.UserDataStore
class CORDL_TYPE UserDataStore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Rewired::Interfaces::IControllerMapStore"
constexpr operator  ::Rewired::Interfaces::IControllerMapStore*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IUserDataStore"
constexpr operator  ::Rewired::Interfaces::IUserDataStore*() noexcept;

/// @brief Method Initialize, addr 0x1818abc90, size 0xf0, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method Load, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Load() ;

/// @brief Method LoadControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerMap, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::Rewired::ControllerMap* LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method LoadInputBehavior, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method LoadPlayerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadPlayerData(int32_t  playerId) ;

static inline ::Rewired::Data::UserDataStore* New_ctor() ;

/// @brief Method OnControllerConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnControllerConnected(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnControllerDisconnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnControllerDisconnected(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnControllerPreDiscconnect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnControllerPreDiscconnect(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnControllerPreDisconnect, addr 0x1818abd80, size 0x20, virtual true, abstract: false, final false
inline void OnControllerPreDisconnect(::Rewired::ControllerStatusChangedEventArgs*  args) ;

/// @brief Method OnDestroy, addr 0x1818abda0, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnInitialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method Save, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method SaveControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerMap, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap) ;

/// @brief Method SaveInputBehavior, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method SavePlayerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SavePlayerData(int32_t  playerId) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rewired::Interfaces::IControllerMapStore"
constexpr ::Rewired::Interfaces::IControllerMapStore* i___Rewired__Interfaces__IControllerMapStore() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IUserDataStore"
constexpr ::Rewired::Interfaces::IUserDataStore* i___Rewired__Interfaces__IUserDataStore() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataStore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStore(UserDataStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStore(UserDataStore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::UserDataStore) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
