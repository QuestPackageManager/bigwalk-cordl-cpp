#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IUserDataStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUserDataStore)
namespace Rewired {
struct ControllerType;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IUserDataStore;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IUserDataStore*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IUserDataStore*, "Rewired.Interfaces", "IUserDataStore");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IUserDataStore
class CORDL_TYPE IUserDataStore {
public:
// Declarations
/// @brief Method Load, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Load() ;

/// @brief Method LoadControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method LoadInputBehavior, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method LoadPlayerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LoadPlayerData(int32_t  playerId) ;

/// @brief Method Save, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method SaveControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveControllerData(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveControllerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveControllerData(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method SaveInputBehavior, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method SavePlayerData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SavePlayerData(int32_t  playerId) ;

// Ctor Parameters [CppParam { name: "", ty: "IUserDataStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUserDataStore(IUserDataStore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
