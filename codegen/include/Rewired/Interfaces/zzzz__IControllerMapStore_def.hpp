#pragma once
// IWYU pragma private; include "Rewired/Interfaces/IControllerMapStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IControllerMapStore)
namespace Rewired {
struct ControllerIdentifier;
}
namespace Rewired {
class ControllerMap;
}
// Forward declare root types
namespace Rewired::Interfaces {
class IControllerMapStore;
}
// Write type traits
MARK_REF_T(::Rewired::Interfaces::IControllerMapStore*);
DEFINE_IL2CPP_CLASS(::Rewired::Interfaces::IControllerMapStore*, "Rewired.Interfaces", "IControllerMapStore");
// Dependencies 
namespace Rewired::Interfaces {
// Is value type: false
// CS Name: Rewired.Interfaces.IControllerMapStore
class CORDL_TYPE IControllerMapStore {
public:
// Declarations
/// @brief Method LoadControllerMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerMap* LoadControllerMap(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  categoryId, int32_t  layoutId) ;

/// @brief Method SaveControllerMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SaveControllerMap(int32_t  playerId, ::Rewired::ControllerMap*  controllerMap) ;

// Ctor Parameters [CppParam { name: "", ty: "IControllerMapStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IControllerMapStore(IControllerMapStore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2243};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Interfaces
