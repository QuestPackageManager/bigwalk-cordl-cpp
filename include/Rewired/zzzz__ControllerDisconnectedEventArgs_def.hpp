#pragma once
// IWYU pragma private; include "Rewired/ControllerDisconnectedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerDisconnectedEventArgs)
// Forward declare root types
namespace Rewired {
class ControllerDisconnectedEventArgs;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerDisconnectedEventArgs*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerDisconnectedEventArgs*, "Rewired", "ControllerDisconnectedEventArgs");
// Dependencies System.EventArgs
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerDisconnectedEventArgs
class CORDL_TYPE ControllerDisconnectedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field rewiredId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_rewiredId, put=__cordl_internal_set_rewiredId)) int32_t  rewiredId;

static inline ::Rewired::ControllerDisconnectedEventArgs* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_rewiredId() const;

constexpr int32_t& __cordl_internal_get_rewiredId() ;

constexpr void __cordl_internal_set_rewiredId(int32_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerDisconnectedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerDisconnectedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerDisconnectedEventArgs(ControllerDisconnectedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerDisconnectedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerDisconnectedEventArgs(ControllerDisconnectedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1977};

/// @brief Field rewiredId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___rewiredId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerDisconnectedEventArgs, ___rewiredId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerDisconnectedEventArgs) == 0x18, "Size mismatch!");

} // namespace end def Rewired
