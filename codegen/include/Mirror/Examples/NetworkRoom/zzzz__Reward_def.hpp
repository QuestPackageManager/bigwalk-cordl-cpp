#pragma once
// IWYU pragma private; include "Mirror/Examples/NetworkRoom/Reward.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Reward)
namespace Mirror::Examples::NetworkRoom {
class RandomColor;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::NetworkRoom {
class Reward;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::NetworkRoom::Reward*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::NetworkRoom::Reward*, "Mirror.Examples.NetworkRoom", "Reward");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::NetworkRoom {
// Is value type: false
// CS Name: Mirror.Examples.NetworkRoom.Reward
class CORDL_TYPE Reward : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field available, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_available, put=__cordl_internal_set_available)) bool  available;

/// @brief Field randomColor, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomColor, put=__cordl_internal_set_randomColor)) ::UnityW<::Mirror::Examples::NetworkRoom::RandomColor>  randomColor;

/// @brief Method ClaimPrize, addr 0x181562b80, size 0x140, virtual false, abstract: false, final false
inline void ClaimPrize(::UnityEngine::GameObject*  player) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::NetworkRoom::Reward* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x181562fd0, size 0x1b0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnValidate, addr 0x181563180, size 0x50, virtual true, abstract: false, final false
inline void OnValidate() ;

constexpr bool const& __cordl_internal_get_available() const;

constexpr bool& __cordl_internal_get_available() ;

constexpr ::UnityW<::Mirror::Examples::NetworkRoom::RandomColor> const& __cordl_internal_get_randomColor() const;

constexpr ::UnityW<::Mirror::Examples::NetworkRoom::RandomColor>& __cordl_internal_get_randomColor() ;

constexpr void __cordl_internal_set_available(bool  value) ;

constexpr void __cordl_internal_set_randomColor(::UnityW<::Mirror::Examples::NetworkRoom::RandomColor>  value) ;

/// @brief Method .ctor, addr 0x181525bb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reward() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reward", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Reward(Reward && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reward", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reward(Reward const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19287};

/// @brief Field available, offset: 0x68, size: 0x1, def value: None
 bool  ___available;

/// @brief Field randomColor, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::NetworkRoom::RandomColor>  ___randomColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::NetworkRoom::Reward, ___available) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::NetworkRoom::Reward, ___randomColor) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::NetworkRoom::Reward) == 0x78, "Size mismatch!");

} // namespace end def Mirror::Examples::NetworkRoom
