#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/StopwatchBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StopwatchBase)
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class StopwatchBase;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::StopwatchBase*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::StopwatchBase*, "Rewired.Utils.Classes.Utility", "StopwatchBase");
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.StopwatchBase
class CORDL_TYPE StopwatchBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_elapsedMilliseconds)) int64_t  elapsedMilliseconds;

 __declspec(property(get=get_elapsedMillisecondsRaw)) int64_t  elapsedMillisecondsRaw;

 __declspec(property(get=get_elapsedSeconds)) double_t  elapsedSeconds;

 __declspec(property(get=get_elapsedSecondsRaw)) double_t  elapsedSecondsRaw;

 __declspec(property(get=get_elapsedTicks)) int64_t  elapsedTicks;

 __declspec(property(get=get_elapsedTicksRaw)) int64_t  elapsedTicksRaw;

 __declspec(property(get=get_isRunning)) bool  isRunning;

 __declspec(property(get=get_offsetSeconds, put=set_offsetSeconds)) double_t  offsetSeconds;

 __declspec(property(get=get_offsetTicks, put=set_offsetTicks)) int64_t  offsetTicks;

static inline ::Rewired::Utils::Classes::Utility::StopwatchBase* New_ctor() ;

/// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_elapsedMilliseconds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int64_t get_elapsedMilliseconds() ;

/// @brief Method get_elapsedMillisecondsRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int64_t get_elapsedMillisecondsRaw() ;

/// @brief Method get_elapsedSeconds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline double_t get_elapsedSeconds() ;

/// @brief Method get_elapsedSecondsRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline double_t get_elapsedSecondsRaw() ;

/// @brief Method get_elapsedTicks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int64_t get_elapsedTicks() ;

/// @brief Method get_elapsedTicksRaw, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int64_t get_elapsedTicksRaw() ;

/// @brief Method get_isRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isRunning() ;

/// @brief Method get_offsetSeconds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline double_t get_offsetSeconds() ;

/// @brief Method get_offsetTicks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int64_t get_offsetTicks() ;

/// @brief Method set_offsetSeconds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_offsetSeconds(double_t  value) ;

/// @brief Method set_offsetTicks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_offsetTicks(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StopwatchBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StopwatchBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StopwatchBase(StopwatchBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StopwatchBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StopwatchBase(StopwatchBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2990};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Classes::Utility::StopwatchBase) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
