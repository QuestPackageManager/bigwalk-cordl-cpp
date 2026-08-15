#pragma once
// IWYU pragma private; include "GlobalNamespace/WESjNeEPMlPOcEAZDPLvhFEsWDniA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CikLRnpHSkodcyZzAORzWmFvLAQJ_def.hpp"
CORDL_MODULE_EXPORT(WESjNeEPMlPOcEAZDPLvhFEsWDniA)
namespace Rewired::Interfaces {
class IUnifiedMouseSource;
}
namespace Rewired::Platforms::Custom {
class CustomPlatformUnifiedMouseSource;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class WESjNeEPMlPOcEAZDPLvhFEsWDniA;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WESjNeEPMlPOcEAZDPLvhFEsWDniA*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WESjNeEPMlPOcEAZDPLvhFEsWDniA*, "", "WESjNeEPMlPOcEAZDPLvhFEsWDniA");
// Dependencies CikLRnpHSkodcyZzAORzWmFvLAQJ
namespace GlobalNamespace {
// Is value type: false
// CS Name: WESjNeEPMlPOcEAZDPLvhFEsWDniA
class CORDL_TYPE WESjNeEPMlPOcEAZDPLvhFEsWDniA : public ::GlobalNamespace::CikLRnpHSkodcyZzAORzWmFvLAQJ {
public:
// Declarations
 __declspec(property(get=Rewired_Interfaces_IUnifiedMouseSource_get_mousePosition)) ::UnityEngine::Vector2  Rewired_Interfaces_IUnifiedMouseSource_mousePosition;

/// @brief Convert operator to "::Rewired::Interfaces::IUnifiedMouseSource"
constexpr operator  ::Rewired::Interfaces::IUnifiedMouseSource*() noexcept;

static inline ::GlobalNamespace::WESjNeEPMlPOcEAZDPLvhFEsWDniA* New_ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Rewired.Interfaces.IUnifiedMouseSource.get_mousePosition, addr 0x181883cf0, size 0xa0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_Interfaces_IUnifiedMouseSource_get_mousePosition() ;

/// @brief Method .ctor, addr 0x181883d90, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Platforms::Custom::CustomPlatformUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::Rewired::Interfaces::IUnifiedMouseSource"
constexpr ::Rewired::Interfaces::IUnifiedMouseSource* i___Rewired__Interfaces__IUnifiedMouseSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WESjNeEPMlPOcEAZDPLvhFEsWDniA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WESjNeEPMlPOcEAZDPLvhFEsWDniA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WESjNeEPMlPOcEAZDPLvhFEsWDniA(WESjNeEPMlPOcEAZDPLvhFEsWDniA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WESjNeEPMlPOcEAZDPLvhFEsWDniA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WESjNeEPMlPOcEAZDPLvhFEsWDniA(WESjNeEPMlPOcEAZDPLvhFEsWDniA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WESjNeEPMlPOcEAZDPLvhFEsWDniA) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
