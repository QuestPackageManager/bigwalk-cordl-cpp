#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckBusConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PeckBusConnection)
namespace GlobalNamespace {
class PeckBus;
}
namespace GlobalNamespace {
class PeckSystemBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckBusConnection;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckBusConnection*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckBusConnection*, "", "PeckBusConnection");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckBusConnection
class CORDL_TYPE PeckBusConnection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field peckBus, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckBus, put=__cordl_internal_set_peckBus)) ::UnityW<::GlobalNamespace::PeckBus>  peckBus;

/// @brief Field peckSystemBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckSystemBlock, put=__cordl_internal_set_peckSystemBlock)) ::UnityW<::GlobalNamespace::PeckSystemBlock>  peckSystemBlock;

static inline ::GlobalNamespace::PeckBusConnection* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804465c0, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180446640, size 0x180, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckBus> const& __cordl_internal_get_peckBus() const;

constexpr ::UnityW<::GlobalNamespace::PeckBus>& __cordl_internal_get_peckBus() ;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock> const& __cordl_internal_get_peckSystemBlock() const;

constexpr ::UnityW<::GlobalNamespace::PeckSystemBlock>& __cordl_internal_get_peckSystemBlock() ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_peckBus(::UnityW<::GlobalNamespace::PeckBus>  value) ;

constexpr void __cordl_internal_set_peckSystemBlock(::UnityW<::GlobalNamespace::PeckSystemBlock>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckBusConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckBusConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckBusConnection(PeckBusConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckBusConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckBusConnection(PeckBusConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5422};

/// @brief Field peckSystemBlock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSystemBlock>  ___peckSystemBlock;

/// @brief Field peckBus, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckBus>  ___peckBus;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckBusConnection, ___peckSystemBlock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckBusConnection, ___peckBus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckBusConnection, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckBusConnection) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
