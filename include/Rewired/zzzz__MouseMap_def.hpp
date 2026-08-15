#pragma once
// IWYU pragma private; include "Rewired/MouseMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapWithAxes_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MouseMap)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class MouseMap;
}
// Write type traits
MARK_REF_T(::Rewired::MouseMap*);
DEFINE_IL2CPP_CLASS(::Rewired::MouseMap*, "Rewired", "MouseMap");
// Dependencies Rewired.ControllerMapWithAxes
namespace Rewired {
// Is value type: false
// CS Name: Rewired.MouseMap
class CORDL_TYPE MouseMap : public ::Rewired::ControllerMapWithAxes {
public:
// Declarations
/// @brief Method AjZowrcOYxiHXasdCIUHqCZjHjRQ, addr 0x1819a6d80, size 0x10, virtual false, abstract: false, final false
inline void AjZowrcOYxiHXasdCIUHqCZjHjRQ(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method CHxEhwHZUTXZBfnVZRprgbTuYyRAA, addr 0x1819a6ed0, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::MouseMap* CHxEhwHZUTXZBfnVZRprgbTuYyRAA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::MouseMap* New_ctor() ;

static inline ::Rewired::MouseMap* New_ctor(::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1819a6f40, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a6e00, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MouseMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MouseMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MouseMap(MouseMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MouseMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MouseMap(MouseMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2064};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::MouseMap) == 0x88, "Size mismatch!");

} // namespace end def Rewired
