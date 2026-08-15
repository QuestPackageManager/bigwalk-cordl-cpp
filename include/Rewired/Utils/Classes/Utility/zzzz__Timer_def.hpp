#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/Timer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Timer)
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class Timer;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::Timer*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::Timer*, "Rewired.Utils.Classes.Utility", "Timer");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.Timer
class CORDL_TYPE Timer : public ::System::Object {
public:
// Declarations
/// @brief Field length, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) double_t  length;

/// @brief Field running, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) bool  running;

/// @brief Field timer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) double_t  timer;

/// @brief Method FAKWhsQdSsicsXbrPUkswZPzoRqk, addr 0x18193d0f0, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Utility::Timer* FAKWhsQdSsicsXbrPUkswZPzoRqk() ;

/// @brief Method GiuywqYCwdknuaoCpqasImmQJQAt, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void GiuywqYCwdknuaoCpqasImmQJQAt(double_t  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::Utils::Classes::Utility::Timer* New_ctor() ;

static inline ::Rewired::Utils::Classes::Utility::Timer* New_ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method RxOTPkqMEeWjaXRoEGYsJlajhVhk, addr 0x18192c320, size 0x10, virtual false, abstract: false, final false
inline void RxOTPkqMEeWjaXRoEGYsJlajhVhk(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YLtoUmbULKlncySsfxZPfrhLVTeJ, addr 0x18192c300, size 0x10, virtual false, abstract: false, final false
inline void YLtoUmbULKlncySsfxZPfrhLVTeJ() ;

/// @brief Method ZjHprdboSHrZHAnCKQTxfbbpFzfG, addr 0x18193d140, size 0x30, virtual false, abstract: false, final false
inline bool ZjHprdboSHrZHAnCKQTxfbbpFzfG(double_t  _cordl_fixed_empty_name_whitespace) ;

constexpr double_t const& __cordl_internal_get_length() const;

constexpr double_t& __cordl_internal_get_length() ;

constexpr bool const& __cordl_internal_get_running() const;

constexpr bool& __cordl_internal_get_running() ;

constexpr double_t const& __cordl_internal_get_timer() const;

constexpr double_t& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set_length(double_t  value) ;

constexpr void __cordl_internal_set_running(bool  value) ;

constexpr void __cordl_internal_set_timer(double_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18051eb20, size 0x10, virtual false, abstract: false, final false
inline void _ctor(double_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method hdodZvpXxjPhFQtzeHPCjfNtvaqh, addr 0x18192c300, size 0x10, virtual false, abstract: false, final false
inline void hdodZvpXxjPhFQtzeHPCjfNtvaqh() ;

/// @brief Method luVCjlSoGncqQsfpDHZFGRBxoPCo, addr 0x181845cb0, size 0x10, virtual false, abstract: false, final false
inline void luVCjlSoGncqQsfpDHZFGRBxoPCo() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Timer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Timer(Timer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Timer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Timer(Timer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2970};

/// @brief Field running, offset: 0x10, size: 0x1, def value: None
 bool  ___running;

/// @brief Field timer, offset: 0x18, size: 0x8, def value: None
 double_t  ___timer;

/// @brief Field length, offset: 0x20, size: 0x8, def value: None
 double_t  ___length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::Timer, ___running) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::Timer, ___timer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::Timer, ___length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::Timer) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
