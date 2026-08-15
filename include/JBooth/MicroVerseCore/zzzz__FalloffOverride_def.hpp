#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/FalloffOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FalloffOverride)
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class FalloffOverride;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::FalloffOverride*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::FalloffOverride*, "JBooth.MicroVerseCore", "FalloffOverride");
// Dependencies UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.FalloffOverride
class CORDL_TYPE FalloffOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_filter, put=__cordl_internal_set_filter)) ::JBooth::MicroVerseCore::FalloffFilter*  filter;

static inline ::JBooth::MicroVerseCore::FalloffOverride* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& __cordl_internal_get_filter() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter*& __cordl_internal_get_filter() ;

constexpr void __cordl_internal_set_filter(::JBooth::MicroVerseCore::FalloffFilter*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FalloffOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FalloffOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FalloffOverride(FalloffOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FalloffOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FalloffOverride(FalloffOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18009};

/// @brief Field filter, offset: 0x20, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter*  ___filter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::FalloffOverride, ___filter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::FalloffOverride) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
