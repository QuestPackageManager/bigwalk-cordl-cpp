#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/FrameTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FrameTimer)
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class FrameTimer;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::FrameTimer*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::FrameTimer*, "Rewired.Utils.Classes.Utility", "FrameTimer");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.FrameTimer
class CORDL_TYPE FrameTimer : public ::System::Object {
public:
// Declarations
/// @brief Field length, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) double_t  length;

/// @brief Field overrunBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrunBuffer, put=__cordl_internal_set_overrunBuffer)) double_t  overrunBuffer;

/// @brief Field running, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) bool  running;

/// @brief Field timeRemaining, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeRemaining, put=__cordl_internal_set_timeRemaining)) double_t  timeRemaining;

/// @brief Method EqXGGwJkMBvQNmfamjTsFTDtQnjAA, addr 0x18192c250, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Utility::FrameTimer* EqXGGwJkMBvQNmfamjTsFTDtQnjAA() ;

/// @brief Method JZrsDMmIhszQwKjTVfiYKZevLxVs, addr 0x18192c2a0, size 0x60, virtual false, abstract: false, final false
inline bool JZrsDMmIhszQwKjTVfiYKZevLxVs(double_t  _cordl_fixed_empty_name_whitespace, double_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::Utils::Classes::Utility::FrameTimer* New_ctor() ;

static inline ::Rewired::Utils::Classes::Utility::FrameTimer* New_ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

constexpr double_t const& __cordl_internal_get_length() const;

constexpr double_t& __cordl_internal_get_length() ;

constexpr double_t const& __cordl_internal_get_overrunBuffer() const;

constexpr double_t& __cordl_internal_get_overrunBuffer() ;

constexpr bool const& __cordl_internal_get_running() const;

constexpr bool& __cordl_internal_get_running() ;

constexpr double_t const& __cordl_internal_get_timeRemaining() const;

constexpr double_t& __cordl_internal_get_timeRemaining() ;

constexpr void __cordl_internal_set_length(double_t  value) ;

constexpr void __cordl_internal_set_overrunBuffer(double_t  value) ;

constexpr void __cordl_internal_set_running(bool  value) ;

constexpr void __cordl_internal_set_timeRemaining(double_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aLijeTXjFvEpEdsSeOcOdsLDAfpT, addr 0x18192c300, size 0x10, virtual false, abstract: false, final false
inline void aLijeTXjFvEpEdsSeOcOdsLDAfpT() ;

/// @brief Method bPLtQgXAPdvvhhYRYfZTAnehlBqu, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void bPLtQgXAPdvvhhYRYfZTAnehlBqu(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qPKYiDderIXAFjBQebqCYLYAPQhi, addr 0x18192c310, size 0x10, virtual false, abstract: false, final false
inline void qPKYiDderIXAFjBQebqCYLYAPQhi() ;

/// @brief Method xvpHYqLkXfmAdNnIebCBniuGmHMf, addr 0x18192c320, size 0x10, virtual false, abstract: false, final false
inline void xvpHYqLkXfmAdNnIebCBniuGmHMf(double_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrameTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrameTimer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameTimer(FrameTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameTimer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameTimer(FrameTimer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2971};

/// @brief Field running, offset: 0x10, size: 0x1, def value: None
 bool  ___running;

/// @brief Field timeRemaining, offset: 0x18, size: 0x8, def value: None
 double_t  ___timeRemaining;

/// @brief Field length, offset: 0x20, size: 0x8, def value: None
 double_t  ___length;

/// @brief Field overrunBuffer, offset: 0x28, size: 0x8, def value: None
 double_t  ___overrunBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::FrameTimer, ___running) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::FrameTimer, ___timeRemaining) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::FrameTimer, ___length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::FrameTimer, ___overrunBuffer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::FrameTimer) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
