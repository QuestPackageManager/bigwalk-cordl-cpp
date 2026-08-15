#pragma once
// IWYU pragma private; include "Mirror/NetworkManagerHUD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkManagerHUD)
namespace Mirror {
class NetworkManager;
}
// Forward declare root types
namespace Mirror {
class NetworkManagerHUD;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkManagerHUD*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkManagerHUD*, "Mirror", "NetworkManagerHUD");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkManagerHUD
class CORDL_TYPE NetworkManagerHUD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field manager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::Mirror::NetworkManager>  manager;

/// @brief Field offsetX, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetX, put=__cordl_internal_set_offsetX)) int32_t  offsetX;

/// @brief Field offsetY, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetY, put=__cordl_internal_set_offsetY)) int32_t  offsetY;

/// @brief Method Awake, addr 0x1815458e0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::NetworkManagerHUD* New_ctor() ;

/// @brief Method OnGUI, addr 0x181545910, size 0x2a0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method StartButtons, addr 0x181545bb0, size 0x6b0, virtual false, abstract: false, final false
inline void StartButtons() ;

/// @brief Method StatusLabels, addr 0x181546260, size 0x150, virtual false, abstract: false, final false
inline void StatusLabels() ;

/// @brief Method StopButtons, addr 0x1815463b0, size 0x1f0, virtual false, abstract: false, final false
inline void StopButtons() ;

constexpr ::UnityW<::Mirror::NetworkManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::Mirror::NetworkManager>& __cordl_internal_get_manager() ;

constexpr int32_t const& __cordl_internal_get_offsetX() const;

constexpr int32_t& __cordl_internal_get_offsetX() ;

constexpr int32_t const& __cordl_internal_get_offsetY() const;

constexpr int32_t& __cordl_internal_get_offsetY() ;

constexpr void __cordl_internal_set_manager(::UnityW<::Mirror::NetworkManager>  value) ;

constexpr void __cordl_internal_set_offsetX(int32_t  value) ;

constexpr void __cordl_internal_set_offsetY(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkManagerHUD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerHUD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkManagerHUD(NetworkManagerHUD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkManagerHUD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkManagerHUD(NetworkManagerHUD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18327};

/// @brief Field manager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkManager>  ___manager;

/// @brief Field offsetX, offset: 0x28, size: 0x4, def value: None
 int32_t  ___offsetX;

/// @brief Field offsetY, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___offsetY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkManagerHUD, ___manager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManagerHUD, ___offsetX) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkManagerHUD, ___offsetY) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkManagerHUD) == 0x30, "Size mismatch!");

} // namespace end def Mirror
