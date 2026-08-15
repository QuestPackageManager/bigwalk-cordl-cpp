#pragma once
// IWYU pragma private; include "Steamworks/OverlayBrowserProtocolNavigation_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OverlayBrowserProtocolNavigation_t)
// Forward declare root types
namespace Steamworks {
struct OverlayBrowserProtocolNavigation_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::OverlayBrowserProtocolNavigation_t);
DEFINE_IL2CPP_CLASS(::Steamworks::OverlayBrowserProtocolNavigation_t, "Steamworks", "OverlayBrowserProtocolNavigation_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.OverlayBrowserProtocolNavigation_t
#pragma pack(push, 8)
struct CORDL_TYPE OverlayBrowserProtocolNavigation_t {
public:
// Declarations
 __declspec(property(get=get_rgchURI, put=set_rgchURI)) ::StringW  rgchURI;

/// @brief Method get_rgchURI, addr 0x18054f850, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_rgchURI() ;

/// @brief Method set_rgchURI, addr 0x18057e4c0, size 0x1c0, virtual false, abstract: false, final false
inline void set_rgchURI(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OverlayBrowserProtocolNavigation_t() ;

// Ctor Parameters [CppParam { name: "rgchURI_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr OverlayBrowserProtocolNavigation_t(::ArrayW<uint8_t>  rgchURI_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x15d)};

/// @brief Field rgchURI_, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  rgchURI_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::OverlayBrowserProtocolNavigation_t, rgchURI_) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::OverlayBrowserProtocolNavigation_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
