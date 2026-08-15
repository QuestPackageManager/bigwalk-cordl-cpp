#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Connector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Connector)
namespace JBooth::MicroVerseCore {
class RoadConfig;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class Connector;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::Connector*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Connector*, "JBooth.MicroVerseCore", "Connector");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Connector
class CORDL_TYPE Connector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field config, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_config, put=__cordl_internal_set_config)) ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  config;

static inline ::JBooth::MicroVerseCore::Connector* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& __cordl_internal_get_config() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& __cordl_internal_get_config() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value) ;

/// @brief Method .ctor, addr 0x1814063c0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Connector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Connector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Connector(Connector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Connector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Connector(Connector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17934};

/// @brief Field config, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::RoadConfig>  ___config;

/// @brief Field color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Connector, ___config) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Connector, ___color) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Connector) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
