#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/BasicNetManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
CORDL_MODULE_EXPORT(BasicNetManager)
namespace Mirror {
class NetworkConnectionToClient;
}
// Forward declare root types
namespace Mirror::Examples::Basic {
class BasicNetManager;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Basic::BasicNetManager*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Basic::BasicNetManager*, "Mirror.Examples.Basic", "BasicNetManager");
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::Basic {
// Is value type: false
// CS Name: Mirror.Examples.Basic.BasicNetManager
class CORDL_TYPE BasicNetManager : public ::Mirror::NetworkManager {
public:
// Declarations
/// @brief Field <singleton>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__singleton_k__BackingField, put=setStaticF__singleton_k__BackingField)) ::UnityW<::Mirror::Examples::Basic::BasicNetManager>  _singleton_k__BackingField;

/// @brief Method Awake, addr 0x1815538b0, size 0x40, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::Examples::Basic::BasicNetManager* New_ctor() ;

/// @brief Method OnServerAddPlayer, addr 0x1815538f0, size 0x20, virtual true, abstract: false, final false
inline void OnServerAddPlayer(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method OnServerDisconnect, addr 0x181553910, size 0x20, virtual true, abstract: false, final false
inline void OnServerDisconnect(::Mirror::NetworkConnectionToClient*  conn) ;

/// @brief Method .ctor, addr 0x1804226f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Mirror::Examples::Basic::BasicNetManager> getStaticF__singleton_k__BackingField() ;

/// @brief Method get_singleton, addr 0x181553930, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::Mirror::Examples::Basic::BasicNetManager> get_singleton() ;

static inline void setStaticF__singleton_k__BackingField(::UnityW<::Mirror::Examples::Basic::BasicNetManager>  value) ;

/// @brief Method set_singleton, addr 0x181553950, size 0x30, virtual false, abstract: false, final false
static inline void set_singleton(::Mirror::Examples::Basic::BasicNetManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicNetManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicNetManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicNetManager(BasicNetManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicNetManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicNetManager(BasicNetManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Examples::Basic::BasicNetManager) == 0x88, "Size mismatch!");

} // namespace end def Mirror::Examples::Basic
