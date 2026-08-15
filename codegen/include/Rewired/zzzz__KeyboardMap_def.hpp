#pragma once
// IWYU pragma private; include "Rewired/KeyboardMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMap_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardMap)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class KeyboardMap;
}
// Write type traits
MARK_REF_T(::Rewired::KeyboardMap*);
DEFINE_IL2CPP_CLASS(::Rewired::KeyboardMap*, "Rewired", "KeyboardMap");
// Dependencies Rewired.ControllerMap
namespace Rewired {
// Is value type: false
// CS Name: Rewired.KeyboardMap
class CORDL_TYPE KeyboardMap : public ::Rewired::ControllerMap {
public:
// Declarations
/// @brief Method AopcKJJdLxXoLZqEcEziFNPhPkehA, addr 0x1819a6e30, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::KeyboardMap* AopcKJJdLxXoLZqEcEziFNPhPkehA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::KeyboardMap* New_ctor() ;

static inline ::Rewired::KeyboardMap* New_ctor(::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819a6eb0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a6ea0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fozlDaXsKZdpgKroCGJJOqMmlQyJA, addr 0x1819a6d80, size 0x10, virtual false, abstract: false, final false
inline void fozlDaXsKZdpgKroCGJJOqMmlQyJA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyboardMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyboardMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardMap(KeyboardMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardMap(KeyboardMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2063};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::KeyboardMap) == 0x78, "Size mismatch!");

} // namespace end def Rewired
