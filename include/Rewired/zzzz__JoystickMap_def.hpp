#pragma once
// IWYU pragma private; include "Rewired/JoystickMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapWithAxes_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickMap)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class JoystickMap;
}
// Write type traits
MARK_REF_T(::Rewired::JoystickMap*);
DEFINE_IL2CPP_CLASS(::Rewired::JoystickMap*, "Rewired", "JoystickMap");
// Dependencies Rewired.ControllerMapWithAxes
namespace Rewired {
// Is value type: false
// CS Name: Rewired.JoystickMap
class CORDL_TYPE JoystickMap : public ::Rewired::ControllerMapWithAxes {
public:
// Declarations
/// @brief Method EZKlSveabJIjClcphmlPPjNriixAA, addr 0x1819a6d80, size 0x10, virtual false, abstract: false, final false
inline void EZKlSveabJIjClcphmlPPjNriixAA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

static inline ::Rewired::JoystickMap* New_ctor() ;

static inline ::Rewired::JoystickMap* New_ctor(::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YLUIPsXRKDMpnAeuVzDTSGrEIInS, addr 0x1819a6d90, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::JoystickMap* YLUIPsXRKDMpnAeuVzDTSGrEIInS(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x1819a6e10, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a6e00, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoystickMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoystickMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoystickMap(JoystickMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoystickMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoystickMap(JoystickMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2065};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::JoystickMap) == 0x88, "Size mismatch!");

} // namespace end def Rewired
