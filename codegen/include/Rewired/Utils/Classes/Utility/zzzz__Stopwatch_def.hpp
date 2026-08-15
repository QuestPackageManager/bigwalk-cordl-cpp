#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/Stopwatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Utils/Classes/Utility/zzzz__StopwatchBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Stopwatch)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
class Stopwatch;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::Utility::Stopwatch*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::Stopwatch*, "Rewired.Utils.Classes.Utility", "Stopwatch");
// Dependencies Rewired.Utils.Classes.Utility.StopwatchBase
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.Stopwatch
class CORDL_TYPE Stopwatch : public ::Rewired::Utils::Classes::Utility::StopwatchBase {
public:
// Declarations
/// @brief Field EeOtlrXLsFHWlxHrqmedNDZSlwPu, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EeOtlrXLsFHWlxHrqmedNDZSlwPu, put=__cordl_internal_set_EeOtlrXLsFHWlxHrqmedNDZSlwPu)) int64_t  EeOtlrXLsFHWlxHrqmedNDZSlwPu;

/// @brief Field Global, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Global, put=setStaticF_Global)) ::Rewired::Utils::Classes::Utility::Stopwatch*  Global;

/// @brief Field IfAcwGyDWNGnxGdNriFTcJXvtgVDA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IfAcwGyDWNGnxGdNriFTcJXvtgVDA, put=setStaticF_IfAcwGyDWNGnxGdNriFTcJXvtgVDA)) int64_t  IfAcwGyDWNGnxGdNriFTcJXvtgVDA;

 __declspec(property(get=get_elapsedMilliseconds)) int64_t  elapsedMilliseconds;

 __declspec(property(get=get_elapsedMillisecondsRaw)) int64_t  elapsedMillisecondsRaw;

 __declspec(property(get=get_elapsedSeconds)) double_t  elapsedSeconds;

 __declspec(property(get=get_elapsedSecondsRaw)) double_t  elapsedSecondsRaw;

 __declspec(property(get=get_elapsedTicks)) int64_t  elapsedTicks;

 __declspec(property(get=get_elapsedTicksRaw)) int64_t  elapsedTicksRaw;

 __declspec(property(get=get_isRunning)) bool  isRunning;

 __declspec(property(get=get_offsetSeconds, put=set_offsetSeconds)) double_t  offsetSeconds;

 __declspec(property(get=get_offsetTicks, put=set_offsetTicks)) int64_t  offsetTicks;

/// @brief Field sTRnBeeKEkeDHrjBchUCfbMLezEN, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sTRnBeeKEkeDHrjBchUCfbMLezEN, put=__cordl_internal_set_sTRnBeeKEkeDHrjBchUCfbMLezEN)) ::System::Diagnostics::Stopwatch*  sTRnBeeKEkeDHrjBchUCfbMLezEN;

/// @brief Method ConvertTo100NSTicks, addr 0x18193b400, size 0x60, virtual false, abstract: false, final false
static inline int64_t ConvertTo100NSTicks(int64_t  ticks) ;

static inline ::Rewired::Utils::Classes::Utility::Stopwatch* New_ctor() ;

/// @brief Method Reset, addr 0x18193b460, size 0x70, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0x18193b530, size 0x60, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartNew, addr 0x18193b4d0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::Stopwatch* StartNew() ;

/// @brief Method Stop, addr 0x18193b590, size 0x70, virtual true, abstract: false, final false
inline void Stop() ;

constexpr int64_t const& __cordl_internal_get_EeOtlrXLsFHWlxHrqmedNDZSlwPu() const;

constexpr int64_t& __cordl_internal_get_EeOtlrXLsFHWlxHrqmedNDZSlwPu() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_sTRnBeeKEkeDHrjBchUCfbMLezEN() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_sTRnBeeKEkeDHrjBchUCfbMLezEN() ;

constexpr void __cordl_internal_set_EeOtlrXLsFHWlxHrqmedNDZSlwPu(int64_t  value) ;

constexpr void __cordl_internal_set_sTRnBeeKEkeDHrjBchUCfbMLezEN(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x18193b6a0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::Utils::Classes::Utility::Stopwatch* getStaticF_Global() ;

static inline int64_t getStaticF_IfAcwGyDWNGnxGdNriFTcJXvtgVDA() ;

/// @brief Method get_elapsedMilliseconds, addr 0x18193b6f0, size 0xa0, virtual true, abstract: false, final false
inline int64_t get_elapsedMilliseconds() ;

/// @brief Method get_elapsedMillisecondsRaw, addr 0x18193b6d0, size 0x20, virtual true, abstract: false, final false
inline int64_t get_elapsedMillisecondsRaw() ;

/// @brief Method get_elapsedSeconds, addr 0x18193b800, size 0x90, virtual true, abstract: false, final false
inline double_t get_elapsedSeconds() ;

/// @brief Method get_elapsedSecondsRaw, addr 0x18193b790, size 0x70, virtual true, abstract: false, final false
inline double_t get_elapsedSecondsRaw() ;

/// @brief Method get_elapsedTicks, addr 0x18193b8b0, size 0x30, virtual true, abstract: false, final false
inline int64_t get_elapsedTicks() ;

/// @brief Method get_elapsedTicksRaw, addr 0x18193b890, size 0x20, virtual true, abstract: false, final false
inline int64_t get_elapsedTicksRaw() ;

/// @brief Method get_frequency, addr 0x18193b8e0, size 0x40, virtual false, abstract: false, final false
static inline int64_t get_frequency() ;

/// @brief Method get_isRunning, addr 0x18193b920, size 0x20, virtual true, abstract: false, final false
inline bool get_isRunning() ;

/// @brief Method get_offsetSeconds, addr 0x18193b940, size 0x50, virtual true, abstract: false, final false
inline double_t get_offsetSeconds() ;

/// @brief Method get_offsetTicks, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final false
inline int64_t get_offsetTicks() ;

static inline void setStaticF_Global(::Rewired::Utils::Classes::Utility::Stopwatch*  value) ;

static inline void setStaticF_IfAcwGyDWNGnxGdNriFTcJXvtgVDA(int64_t  value) ;

/// @brief Method set_offsetSeconds, addr 0x18193b990, size 0x60, virtual true, abstract: false, final false
inline void set_offsetSeconds(double_t  value) ;

/// @brief Method set_offsetTicks, addr 0x1803bda70, size 0x10, virtual true, abstract: false, final false
inline void set_offsetTicks(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stopwatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stopwatch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stopwatch(Stopwatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stopwatch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stopwatch(Stopwatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2991};

/// @brief Field nQzxvXxSUCUieHVPgcLykaQznsWL offset 0xffffffff size 0x8
static constexpr int64_t  nQzxvXxSUCUieHVPgcLykaQznsWL{static_cast<int64_t>(0x989680)};

/// @brief Field sTRnBeeKEkeDHrjBchUCfbMLezEN, offset: 0x10, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___sTRnBeeKEkeDHrjBchUCfbMLezEN;

/// @brief Field EeOtlrXLsFHWlxHrqmedNDZSlwPu, offset: 0x18, size: 0x8, def value: None
 int64_t  ___EeOtlrXLsFHWlxHrqmedNDZSlwPu;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::Stopwatch, ___sTRnBeeKEkeDHrjBchUCfbMLezEN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Utility::Stopwatch, ___EeOtlrXLsFHWlxHrqmedNDZSlwPu) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::Stopwatch) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
