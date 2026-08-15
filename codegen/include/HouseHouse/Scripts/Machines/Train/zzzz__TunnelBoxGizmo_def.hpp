#pragma once
// IWYU pragma private; include "HouseHouse/Scripts/Machines/Train/TunnelBoxGizmo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TunnelBoxGizmo)
// Forward declare root types
namespace HouseHouse::Scripts::Machines::Train {
class TunnelBoxGizmo;
}
// Write type traits
MARK_REF_T(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo*, "HouseHouse.Scripts.Machines.Train", "TunnelBoxGizmo");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace HouseHouse::Scripts::Machines::Train {
// Is value type: false
// CS Name: HouseHouse.Scripts.Machines.Train.TunnelBoxGizmo
class CORDL_TYPE TunnelBoxGizmo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bottomLeft, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_bottomLeft, put=__cordl_internal_set_bottomLeft)) ::UnityEngine::Vector3  bottomLeft;

/// @brief Field bottomRight, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_bottomRight, put=__cordl_internal_set_bottomRight)) ::UnityEngine::Vector3  bottomRight;

/// @brief Field topLeft, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_topLeft, put=__cordl_internal_set_topLeft)) ::UnityEngine::Vector3  topLeft;

/// @brief Field topRight, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_topRight, put=__cordl_internal_set_topRight)) ::UnityEngine::Vector3  topRight;

static inline ::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1803d10d0, size 0x2b0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bottomLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bottomLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bottomRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bottomRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_topLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_topLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_topRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_topRight() ;

constexpr void __cordl_internal_set_bottomLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bottomRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_topLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_topRight(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TunnelBoxGizmo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TunnelBoxGizmo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TunnelBoxGizmo(TunnelBoxGizmo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TunnelBoxGizmo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TunnelBoxGizmo(TunnelBoxGizmo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5780};

/// @brief Field topLeft, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___topLeft;

/// @brief Field topRight, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___topRight;

/// @brief Field bottomLeft, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bottomLeft;

/// @brief Field bottomRight, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bottomRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo, ___topLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo, ___topRight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo, ___bottomLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo, ___bottomRight) == 0x44, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Scripts::Machines::Train::TunnelBoxGizmo) == 0x50, "Size mismatch!");

} // namespace end def HouseHouse::Scripts::Machines::Train
