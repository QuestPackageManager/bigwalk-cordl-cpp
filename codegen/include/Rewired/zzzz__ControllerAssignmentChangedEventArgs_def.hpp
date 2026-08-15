#pragma once
// IWYU pragma private; include "Rewired/ControllerAssignmentChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerAssignmentChangedEventArgs)
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class Player;
}
// Forward declare root types
namespace Rewired {
class ControllerAssignmentChangedEventArgs;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerAssignmentChangedEventArgs*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerAssignmentChangedEventArgs*, "Rewired", "ControllerAssignmentChangedEventArgs");
// Dependencies Rewired.ControllerType, System.EventArgs
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerAssignmentChangedEventArgs
class CORDL_TYPE ControllerAssignmentChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field HsiNFElhtuWUDtcMjqxsDDkPnWep, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_HsiNFElhtuWUDtcMjqxsDDkPnWep, put=__cordl_internal_set_HsiNFElhtuWUDtcMjqxsDDkPnWep)) int32_t  HsiNFElhtuWUDtcMjqxsDDkPnWep;

/// @brief Field RXJOmFuOElQWBDOoulJzjRcZtAJS, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RXJOmFuOElQWBDOoulJzjRcZtAJS, put=__cordl_internal_set_RXJOmFuOElQWBDOoulJzjRcZtAJS)) ::Rewired::ControllerType  RXJOmFuOElQWBDOoulJzjRcZtAJS;

 __declspec(property(get=get_controller)) ::Rewired::Controller*  controller;

/// @brief Field oigvtqHFIHgGQEnQkcnXCmqywsPD, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_oigvtqHFIHgGQEnQkcnXCmqywsPD, put=__cordl_internal_set_oigvtqHFIHgGQEnQkcnXCmqywsPD)) bool  oigvtqHFIHgGQEnQkcnXCmqywsPD;

 __declspec(property(get=get_player)) ::Rewired::Player*  player;

/// @brief Field sUDGPEhutdqUbpYgzjnSNeosKcPs, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_sUDGPEhutdqUbpYgzjnSNeosKcPs, put=__cordl_internal_set_sUDGPEhutdqUbpYgzjnSNeosKcPs)) int32_t  sUDGPEhutdqUbpYgzjnSNeosKcPs;

 __declspec(property(get=get_state)) bool  state;

static inline ::Rewired::ControllerAssignmentChangedEventArgs* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr int32_t const& __cordl_internal_get_HsiNFElhtuWUDtcMjqxsDDkPnWep() const;

constexpr int32_t& __cordl_internal_get_HsiNFElhtuWUDtcMjqxsDDkPnWep() ;

constexpr ::Rewired::ControllerType const& __cordl_internal_get_RXJOmFuOElQWBDOoulJzjRcZtAJS() const;

constexpr ::Rewired::ControllerType& __cordl_internal_get_RXJOmFuOElQWBDOoulJzjRcZtAJS() ;

constexpr bool const& __cordl_internal_get_oigvtqHFIHgGQEnQkcnXCmqywsPD() const;

constexpr bool& __cordl_internal_get_oigvtqHFIHgGQEnQkcnXCmqywsPD() ;

constexpr int32_t const& __cordl_internal_get_sUDGPEhutdqUbpYgzjnSNeosKcPs() const;

constexpr int32_t& __cordl_internal_get_sUDGPEhutdqUbpYgzjnSNeosKcPs() ;

constexpr void __cordl_internal_set_HsiNFElhtuWUDtcMjqxsDDkPnWep(int32_t  value) ;

constexpr void __cordl_internal_set_RXJOmFuOElQWBDOoulJzjRcZtAJS(::Rewired::ControllerType  value) ;

constexpr void __cordl_internal_set_oigvtqHFIHgGQEnQkcnXCmqywsPD(bool  value) ;

constexpr void __cordl_internal_set_sUDGPEhutdqUbpYgzjnSNeosKcPs(int32_t  value) ;

/// @brief Method .ctor, addr 0x18183dd50, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method get_controller, addr 0x18183dd70, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Controller* get_controller() ;

/// @brief Method get_player, addr 0x18183ddf0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Player* get_player() ;

/// @brief Method get_state, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_state() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerAssignmentChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerAssignmentChangedEventArgs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerAssignmentChangedEventArgs(ControllerAssignmentChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerAssignmentChangedEventArgs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerAssignmentChangedEventArgs(ControllerAssignmentChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1750};

/// @brief Field oigvtqHFIHgGQEnQkcnXCmqywsPD, offset: 0x10, size: 0x1, def value: None
 bool  ___oigvtqHFIHgGQEnQkcnXCmqywsPD;

/// @brief Field HsiNFElhtuWUDtcMjqxsDDkPnWep, offset: 0x14, size: 0x4, def value: None
 int32_t  ___HsiNFElhtuWUDtcMjqxsDDkPnWep;

/// @brief Field sUDGPEhutdqUbpYgzjnSNeosKcPs, offset: 0x18, size: 0x4, def value: None
 int32_t  ___sUDGPEhutdqUbpYgzjnSNeosKcPs;

/// @brief Field RXJOmFuOElQWBDOoulJzjRcZtAJS, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::ControllerType  ___RXJOmFuOElQWBDOoulJzjRcZtAJS;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerAssignmentChangedEventArgs, ___oigvtqHFIHgGQEnQkcnXCmqywsPD) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerAssignmentChangedEventArgs, ___HsiNFElhtuWUDtcMjqxsDDkPnWep) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerAssignmentChangedEventArgs, ___sUDGPEhutdqUbpYgzjnSNeosKcPs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerAssignmentChangedEventArgs, ___RXJOmFuOElQWBDOoulJzjRcZtAJS) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerAssignmentChangedEventArgs) == 0x20, "Size mismatch!");

} // namespace end def Rewired
