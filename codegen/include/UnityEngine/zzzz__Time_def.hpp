#pragma once
// IWYU pragma private; include "UnityEngine/Time.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Time)
namespace Unity::IntegerTime {
struct RationalTime;
}
// Forward declare root types
namespace UnityEngine {
class Time;
}
// Write type traits
MARK_REF_T(::UnityEngine::Time*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Time*, "UnityEngine", "Time");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Time
class CORDL_TYPE Time : public ::System::Object {
public:
// Declarations
/// @brief Method get_deltaTime, addr 0x1822881b0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_deltaTime() ;

/// @brief Method get_fixedDeltaTime, addr 0x1822881c0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_fixedDeltaTime() ;

/// @brief Method get_frameCount, addr 0x1822881d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_frameCount() ;

/// @brief Method get_inFixedTimeStep, addr 0x1822881e0, size 0x10, virtual false, abstract: false, final false
static inline bool get_inFixedTimeStep() ;

/// @brief Method get_realtimeSinceStartup, addr 0x182288200, size 0x10, virtual false, abstract: false, final false
static inline float_t get_realtimeSinceStartup() ;

/// @brief Method get_realtimeSinceStartupAsDouble, addr 0x1822881f0, size 0x10, virtual false, abstract: false, final false
static inline double_t get_realtimeSinceStartupAsDouble() ;

/// @brief Method get_renderedFrameCount, addr 0x182288210, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_renderedFrameCount() ;

/// @brief Method get_smoothDeltaTime, addr 0x182288220, size 0x10, virtual false, abstract: false, final false
static inline float_t get_smoothDeltaTime() ;

/// @brief Method get_time, addr 0x182288290, size 0x10, virtual false, abstract: false, final false
static inline float_t get_time() ;

/// @brief Method get_timeAsDouble, addr 0x182288230, size 0x10, virtual false, abstract: false, final false
static inline double_t get_timeAsDouble() ;

/// @brief Method get_timeAsRational, addr 0x182288250, size 0x20, virtual false, abstract: false, final false
static inline ::Unity::IntegerTime::RationalTime get_timeAsRational() ;

/// @brief Method get_timeAsRational_Injected, addr 0x182288240, size 0x10, virtual false, abstract: false, final false
static inline void get_timeAsRational_Injected(::by_ref<::Unity::IntegerTime::RationalTime>  ret) ;

/// @brief Method get_timeScale, addr 0x182288270, size 0x10, virtual false, abstract: false, final false
static inline float_t get_timeScale() ;

/// @brief Method get_timeSinceLevelLoad, addr 0x182288280, size 0x10, virtual false, abstract: false, final false
static inline float_t get_timeSinceLevelLoad() ;

/// @brief Method get_unscaledDeltaTime, addr 0x1822882a0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_unscaledDeltaTime() ;

/// @brief Method get_unscaledTime, addr 0x1822882c0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_unscaledTime() ;

/// @brief Method get_unscaledTimeAsDouble, addr 0x1822882b0, size 0x10, virtual false, abstract: false, final false
static inline double_t get_unscaledTimeAsDouble() ;

/// @brief Method set_fixedDeltaTime, addr 0x1822882d0, size 0x10, virtual false, abstract: false, final false
static inline void set_fixedDeltaTime(float_t  value) ;

/// @brief Method set_timeScale, addr 0x1822882e0, size 0x10, virtual false, abstract: false, final false
static inline void set_timeScale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Time() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Time(Time && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Time(Time const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Time) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
