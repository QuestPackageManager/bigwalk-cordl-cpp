#pragma once
// IWYU pragma private; include "Mirror/NetworkPingDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPingDisplay)
// Forward declare root types
namespace Mirror {
class NetworkPingDisplay;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkPingDisplay*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkPingDisplay*, "Mirror", "NetworkPingDisplay");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkPingDisplay
class CORDL_TYPE NetworkPingDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field color, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field height, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field padding, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_padding, put=__cordl_internal_set_padding)) int32_t  padding;

/// @brief Field width, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::Mirror::NetworkPingDisplay* New_ctor() ;

/// @brief Method OnGUI, addr 0x18151dea0, size 0x1c0, virtual false, abstract: false, final false
inline void OnGUI() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_padding() const;

constexpr int32_t& __cordl_internal_get_padding() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_padding(int32_t  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x18151e060, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPingDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPingDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPingDisplay(NetworkPingDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPingDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPingDisplay(NetworkPingDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19238};

/// @brief Field color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field padding, offset: 0x30, size: 0x4, def value: None
 int32_t  ___padding;

/// @brief Field width, offset: 0x34, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x38, size: 0x4, def value: None
 int32_t  ___height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkPingDisplay, ___color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkPingDisplay, ___padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkPingDisplay, ___width) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkPingDisplay, ___height) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkPingDisplay) == 0x40, "Size mismatch!");

} // namespace end def Mirror
