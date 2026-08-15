#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckContext)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class Prop;
}
namespace Mirror {
class NetworkIdentity;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckContext, "", "PeckContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckContext
struct CORDL_TYPE PeckContext {
public:
// Declarations
 __declspec(property(get=get_state, put=set_state)) int32_t  state;

/// @brief Method GetPlayerCharacter, addr 0x180447090, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GetPlayerCharacter() ;

/// @brief Method GetProp, addr 0x1804470e0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Prop> GetProp() ;

/// @brief Method .ctor, addr 0x180447130, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::PlayerCharacter*  playerCharacter, ::GlobalNamespace::Prop*  prop) ;

/// @brief Method .ctor, addr 0x1804471e0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  state) ;

/// @brief Method get_state, addr 0x180329dc0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_state() ;

/// @brief Method set_state, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_state(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PeckContext() ;

// Ctor Parameters [CppParam { name: "playerIdentity", ty: "::UnityW<::Mirror::NetworkIdentity>", modifiers: "", def_value: None }, CppParam { name: "propIdentity", ty: "::UnityW<::Mirror::NetworkIdentity>", modifiers: "", def_value: None }, CppParam { name: "compressedState", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "actionNumber", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckContext(::UnityW<::Mirror::NetworkIdentity>  playerIdentity, ::UnityW<::Mirror::NetworkIdentity>  propIdentity, int8_t  compressedState, int32_t  actionNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field playerIdentity, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  playerIdentity;

/// @brief Field propIdentity, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkIdentity>  propIdentity;

/// @brief Field compressedState, offset: 0x10, size: 0x1, def value: None
 int8_t  compressedState;

/// @brief Field actionNumber, offset: 0x14, size: 0x4, def value: None
 int32_t  actionNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckContext, playerIdentity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckContext, propIdentity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckContext, compressedState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckContext, actionNumber) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckContext) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
