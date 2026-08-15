#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformUnifiedMouseSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformUnifiedControllerSource_def.hpp"
CORDL_MODULE_EXPORT(CustomPlatformUnifiedMouseSource)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedMouseSource;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*, "Rewired.Platforms.Custom", "CustomPlatformUnifiedMouseSource");
// Dependencies Rewired.Platforms.Custom.CustomPlatformUnifiedControllerSource
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformUnifiedMouseSource
class CORDL_TYPE CustomPlatformUnifiedMouseSource : public ::Rewired::Platforms::Custom::CustomPlatformUnifiedControllerSource {
public:
// Declarations
 __declspec(property(get=get_mousePosition)) ::UnityEngine::Vector2  mousePosition;

static inline ::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource* New_ctor() ;

/// @brief Method .ctor, addr 0x18187fcb0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_mousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 get_mousePosition() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformUnifiedMouseSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedMouseSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformUnifiedMouseSource(CustomPlatformUnifiedMouseSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformUnifiedMouseSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformUnifiedMouseSource(CustomPlatformUnifiedMouseSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2301};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource) == 0x38, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
