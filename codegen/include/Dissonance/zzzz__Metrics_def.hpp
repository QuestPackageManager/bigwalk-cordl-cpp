#pragma once
// IWYU pragma private; include "Dissonance/Metrics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Metrics)
namespace Dissonance {
class Log;
}
namespace Dissonance {
struct Metrics_MetricEvent;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Dissonance {
class Metrics;
}
namespace Dissonance {
struct Metrics_MetricEvent;
}
// Write type traits
MARK_REF_T(::Dissonance::Metrics*);
MARK_VAL_T(::Dissonance::Metrics_MetricEvent);
DEFINE_IL2CPP_CLASS(::Dissonance::Metrics*, "Dissonance", "Metrics");
DEFINE_IL2CPP_CLASS(::Dissonance::Metrics_MetricEvent, "Dissonance", "Metrics/MetricEvent");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.Metrics/MetricEvent
struct CORDL_TYPE Metrics_MetricEvent {
public:
// Declarations
/// @brief Method .ctor, addr 0x1805cc390, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Metrics_MetricEvent() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: None }]
constexpr Metrics_MetricEvent(::StringW  Name, double_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 double_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Metrics_MetricEvent, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Metrics_MetricEvent, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Metrics_MetricEvent) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.Metrics
class CORDL_TYPE Metrics : public ::System::Object {
public:
// Declarations
using MetricEvent = ::Dissonance::Metrics_MetricEvent;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _main, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__main, put=setStaticF__main)) ::System::Threading::Thread*  _main;

/// @brief Method InternalSampleMetric, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void InternalSampleMetric(::StringW  name, double_t  value) ;

/// @brief Method MetricName, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::StringW MetricName(::StringW  category) ;

/// @brief Method MetricName, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::StringW MetricName(::StringW  category, ::StringW  id) ;

/// @brief Method Sample, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void Sample(::StringW  name, float_t  value) ;

/// @brief Method WriteMultithreadedMetrics, addr 0x1805cc450, size 0x70, virtual false, abstract: false, final false
static inline void WriteMultithreadedMetrics() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline ::System::Threading::Thread* getStaticF__main() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

static inline void setStaticF__main(::System::Threading::Thread*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Metrics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Metrics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Metrics(Metrics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Metrics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Metrics(Metrics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Metrics) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
