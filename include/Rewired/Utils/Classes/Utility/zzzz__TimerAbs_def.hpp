#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/TimerAbs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimerAbs)
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class TimerAbs;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::TimerAbs*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::TimerAbs*, "Rewired.Utils.Classes.Utility", "TimerAbs");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.TimerAbs
class CORDL_TYPE TimerAbs : public ::System::Object {
public:
// Declarations
/// @brief Field length, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) double_t  length;

/// @brief Field pthCktFPuoaQDaVxFZCgYeaEFnffc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pthCktFPuoaQDaVxFZCgYeaEFnffc, put=__cordl_internal_set_pthCktFPuoaQDaVxFZCgYeaEFnffc)) double_t  pthCktFPuoaQDaVxFZCgYeaEFnffc;

/// @brief Field running, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) bool  running;

/// @brief Method Clear, addr 0x181845cb0, size 0x10, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x18193ce90, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Utility::TimerAbs* Clone() ;

static inline ::Rewired::Utils::Classes::Utility::TimerAbs* New_ctor() ;

static inline ::Rewired::Utils::Classes::Utility::TimerAbs* New_ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SetLength, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void SetLength(double_t  inLength) ;

/// @brief Method Start, addr 0x18193cf40, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Start, addr 0x18193cee0, size 0x60, virtual false, abstract: false, final false
inline void Start(double_t  inLength) ;

/// @brief Method Update, addr 0x18193cfa0, size 0x60, virtual false, abstract: false, final false
inline bool Update() ;

constexpr double_t const& __cordl_internal_get_length() const;

constexpr double_t& __cordl_internal_get_length() ;

constexpr double_t const& __cordl_internal_get_pthCktFPuoaQDaVxFZCgYeaEFnffc() const;

constexpr double_t& __cordl_internal_get_pthCktFPuoaQDaVxFZCgYeaEFnffc() ;

constexpr bool const& __cordl_internal_get_running() const;

constexpr bool& __cordl_internal_get_running() ;

constexpr void __cordl_internal_set_length(double_t  value) ;

constexpr void __cordl_internal_set_pthCktFPuoaQDaVxFZCgYeaEFnffc(double_t  value) ;

constexpr void __cordl_internal_set_running(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerAbs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerAbs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerAbs(TimerAbs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerAbs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerAbs(TimerAbs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2968};

/// @brief Field running, offset: 0x10, size: 0x1, def value: None
 bool  ___running;

/// @brief Field pthCktFPuoaQDaVxFZCgYeaEFnffc, offset: 0x18, size: 0x8, def value: None
 double_t  ___pthCktFPuoaQDaVxFZCgYeaEFnffc;

/// @brief Field length, offset: 0x20, size: 0x8, def value: None
 double_t  ___length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::TimerAbs, ___running) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::TimerAbs, ___pthCktFPuoaQDaVxFZCgYeaEFnffc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::TimerAbs, ___length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::TimerAbs) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
