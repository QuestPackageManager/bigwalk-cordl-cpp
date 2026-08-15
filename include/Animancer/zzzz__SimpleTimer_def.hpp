#pragma once
// IWYU pragma private; include "Animancer/SimpleTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SimpleTimer)
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Animancer {
struct SimpleTimer;
}
// Write type traits
MARK_VAL_T(::Animancer::SimpleTimer);
DEFINE_IL2CPP_CLASS(::Animancer::SimpleTimer, "Animancer", "SimpleTimer");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.SimpleTimer
struct CORDL_TYPE SimpleTimer {
public:
// Declarations
 __declspec(property(get=get_IsStarted)) bool  IsStarted;

/// @brief Field Stopwatch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Stopwatch, put=setStaticF_Stopwatch)) ::System::Diagnostics::Stopwatch*  Stopwatch;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1803145c0, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Start, addr 0x1803146d0, size 0x90, virtual false, abstract: false, final false
static inline ::Animancer::SimpleTimer Start(::StringW  name) ;

/// @brief Method Start, addr 0x180314640, size 0x90, virtual false, abstract: false, final false
inline bool Start() ;

/// @brief Method Stop, addr 0x180314760, size 0xb0, virtual false, abstract: false, final false
inline bool Stop() ;

/// @brief Method ToString, addr 0x180314810, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1803148d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

static inline ::System::Diagnostics::Stopwatch* getStaticF_Stopwatch() ;

/// @brief Method get_CurrentTime, addr 0x180314900, size 0x60, virtual false, abstract: false, final false
static inline double_t get_CurrentTime() ;

/// @brief Method get_IsStarted, addr 0x180314960, size 0xc0, virtual false, abstract: false, final false
inline bool get_IsStarted() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_Stopwatch(::System::Diagnostics::Stopwatch*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimpleTimer() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "total", ty: "double_t", modifiers: "", def_value: None }]
constexpr SimpleTimer(::StringW  name, double_t  startTime, double_t  total) noexcept;

/// @brief Field Format offset 0xffffffff size 0x8
static constexpr ::ConstString  Format{u"0.000"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field startTime, offset: 0x8, size: 0x8, def value: None
 double_t  startTime;

/// @brief Field total, offset: 0x10, size: 0x8, def value: None
 double_t  total;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::SimpleTimer, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::SimpleTimer, startTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Animancer::SimpleTimer, total) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Animancer::SimpleTimer) == 0x18, "Size mismatch!");

} // namespace end def Animancer
