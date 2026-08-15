#pragma once
// IWYU pragma private; include "Enviro/EnviroManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Enviro/zzzz__EnviroManagerBase_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroManager)
namespace Enviro {
class EnviroCameras;
}
namespace Enviro {
class EnviroEffectRemovalZone;
}
namespace Enviro {
struct EnviroEnvironment_Seasons;
}
namespace Enviro {
class EnviroEvents;
}
namespace Enviro {
class EnviroManager_DayPassed;
}
namespace Enviro {
class EnviroManager_HourPassed;
}
namespace Enviro {
class EnviroManager_SeasonChanged;
}
namespace Enviro {
class EnviroManager_WeatherChanged;
}
namespace Enviro {
class EnviroManager_YearPassed;
}
namespace Enviro {
struct EnviroManager_ZoneParams;
}
namespace Enviro {
class EnviroManager_ZoneWeatherChanged;
}
namespace Enviro {
class EnviroManager__FirstFrame_d__99;
}
namespace Enviro {
class EnviroManager_isDayEvent;
}
namespace Enviro {
class EnviroManager_isNightEvent;
}
namespace Enviro {
class EnviroWeatherType;
}
namespace Enviro {
class EnviroZone;
}
namespace Enviro {
class GeneralObjects;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Enviro {
class EnviroManager;
}
namespace Enviro {
class EnviroManager_DayPassed;
}
namespace Enviro {
class EnviroManager_HourPassed;
}
namespace Enviro {
class EnviroManager_SeasonChanged;
}
namespace Enviro {
class EnviroManager_WeatherChanged;
}
namespace Enviro {
class EnviroManager_YearPassed;
}
namespace Enviro {
class EnviroManager_ZoneWeatherChanged;
}
namespace Enviro {
class EnviroManager__FirstFrame_d__99;
}
namespace Enviro {
class EnviroManager_isDayEvent;
}
namespace Enviro {
class EnviroManager_isNightEvent;
}
namespace Enviro {
struct EnviroManager_ZoneParams;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroManager*);
MARK_REF_T(::Enviro::EnviroManager_DayPassed*);
MARK_REF_T(::Enviro::EnviroManager_HourPassed*);
MARK_REF_T(::Enviro::EnviroManager_SeasonChanged*);
MARK_REF_T(::Enviro::EnviroManager_WeatherChanged*);
MARK_REF_T(::Enviro::EnviroManager_YearPassed*);
MARK_REF_T(::Enviro::EnviroManager_ZoneWeatherChanged*);
MARK_REF_T(::Enviro::EnviroManager__FirstFrame_d__99*);
MARK_REF_T(::Enviro::EnviroManager_isDayEvent*);
MARK_REF_T(::Enviro::EnviroManager_isNightEvent*);
MARK_VAL_T(::Enviro::EnviroManager_ZoneParams);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager*, "Enviro", "EnviroManager");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_DayPassed*, "Enviro", "EnviroManager/DayPassed");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_HourPassed*, "Enviro", "EnviroManager/HourPassed");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_SeasonChanged*, "Enviro", "EnviroManager/SeasonChanged");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_WeatherChanged*, "Enviro", "EnviroManager/WeatherChanged");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_YearPassed*, "Enviro", "EnviroManager/YearPassed");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_ZoneWeatherChanged*, "Enviro", "EnviroManager/ZoneWeatherChanged");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager__FirstFrame_d__99*, "Enviro", "EnviroManager/<FirstFrame>d__99");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_isDayEvent*, "Enviro", "EnviroManager/isDayEvent");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_isNightEvent*, "Enviro", "EnviroManager/isNightEvent");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManager_ZoneParams, "Enviro", "EnviroManager/ZoneParams");
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Vector3
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroManager/ZoneParams
struct CORDL_TYPE EnviroManager_ZoneParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_ZoneParams() ;

// Ctor Parameters [CppParam { name: "type", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "stretch", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "density", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "feather", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "pad0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pad1", ty: "float_t", modifiers: "", def_value: None }]
constexpr EnviroManager_ZoneParams(float_t  type, ::UnityEngine::Vector3  pos, float_t  radius, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  axis, float_t  stretch, float_t  density, float_t  feather, ::UnityEngine::Matrix4x4  transform, float_t  pad0, float_t  pad1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 float_t  type;

/// @brief Field pos, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  pos;

/// @brief Field radius, offset: 0x10, size: 0x4, def value: None
 float_t  radius;

/// @brief Field size, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  size;

/// @brief Field axis, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  axis;

/// @brief Field stretch, offset: 0x2c, size: 0x4, def value: None
 float_t  stretch;

/// @brief Field density, offset: 0x30, size: 0x4, def value: None
 float_t  density;

/// @brief Field feather, offset: 0x34, size: 0x4, def value: None
 float_t  feather;

/// @brief Field transform, offset: 0x38, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  transform;

/// @brief Field pad0, offset: 0x78, size: 0x4, def value: None
 float_t  pad0;

/// @brief Field pad1, offset: 0x7c, size: 0x4, def value: None
 float_t  pad1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, pos) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, radius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, size) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, stretch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, density) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, feather) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, transform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, pad0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager_ZoneParams, pad1) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroManager_ZoneParams) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/HourPassed
class CORDL_TYPE EnviroManager_HourPassed : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Enviro::EnviroManager_HourPassed* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_HourPassed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_HourPassed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_HourPassed(EnviroManager_HourPassed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_HourPassed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_HourPassed(EnviroManager_HourPassed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_HourPassed) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/DayPassed
class CORDL_TYPE EnviroManager_DayPassed : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Enviro::EnviroManager_DayPassed* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_DayPassed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_DayPassed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_DayPassed(EnviroManager_DayPassed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_DayPassed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_DayPassed(EnviroManager_DayPassed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_DayPassed) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/YearPassed
class CORDL_TYPE EnviroManager_YearPassed : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Enviro::EnviroManager_YearPassed* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_YearPassed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_YearPassed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_YearPassed(EnviroManager_YearPassed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_YearPassed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_YearPassed(EnviroManager_YearPassed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18412};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_YearPassed) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/WeatherChanged
class CORDL_TYPE EnviroManager_WeatherChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Enviro::EnviroWeatherType*  weatherType, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::Enviro::EnviroWeatherType*  weatherType) ;

static inline ::Enviro::EnviroManager_WeatherChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805829b0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_WeatherChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_WeatherChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_WeatherChanged(EnviroManager_WeatherChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_WeatherChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_WeatherChanged(EnviroManager_WeatherChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18413};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_WeatherChanged) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/ZoneWeatherChanged
class CORDL_TYPE EnviroManager_ZoneWeatherChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582750, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Enviro::EnviroWeatherType*  weatherType, ::Enviro::EnviroZone*  zone, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::Enviro::EnviroWeatherType*  weatherType, ::Enviro::EnviroZone*  zone) ;

static inline ::Enviro::EnviroManager_ZoneWeatherChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18060c120, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_ZoneWeatherChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_ZoneWeatherChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_ZoneWeatherChanged(EnviroManager_ZoneWeatherChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_ZoneWeatherChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_ZoneWeatherChanged(EnviroManager_ZoneWeatherChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_ZoneWeatherChanged) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/SeasonChanged
class CORDL_TYPE EnviroManager_SeasonChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18060b940, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Enviro::EnviroEnvironment_Seasons  season, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::Enviro::EnviroEnvironment_Seasons  season) ;

static inline ::Enviro::EnviroManager_SeasonChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_SeasonChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_SeasonChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_SeasonChanged(EnviroManager_SeasonChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_SeasonChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_SeasonChanged(EnviroManager_SeasonChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_SeasonChanged) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/isNightEvent
class CORDL_TYPE EnviroManager_isNightEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Enviro::EnviroManager_isNightEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_isNightEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_isNightEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_isNightEvent(EnviroManager_isNightEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_isNightEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_isNightEvent(EnviroManager_isNightEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18416};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_isNightEvent) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.MulticastDelegate
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/isDayEvent
class CORDL_TYPE EnviroManager_isDayEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Enviro::EnviroManager_isDayEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager_isDayEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_isDayEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager_isDayEvent(EnviroManager_isDayEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager_isDayEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager_isDayEvent(EnviroManager_isDayEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18417};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroManager_isDayEvent) == 0x80, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager/<FirstFrame>d__99
class CORDL_TYPE EnviroManager__FirstFrame_d__99 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18060b9a0, size 0x80, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroManager__FirstFrame_d__99* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Enviro::EnviroManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroManager>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager__FirstFrame_d__99() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager__FirstFrame_d__99", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager__FirstFrame_d__99(EnviroManager__FirstFrame_d__99 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager__FirstFrame_d__99", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager__FirstFrame_d__99(EnviroManager__FirstFrame_d__99 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18418};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroManager__FirstFrame_d__99, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager__FirstFrame_d__99, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager__FirstFrame_d__99, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroManager__FirstFrame_d__99) == 0x28, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroManager::ZoneParams, Enviro.EnviroManagerBase
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManager
class CORDL_TYPE EnviroManager : public ::Enviro::EnviroManagerBase {
public:
// Declarations
using DayPassed = ::Enviro::EnviroManager_DayPassed;

using HourPassed = ::Enviro::EnviroManager_HourPassed;

using SeasonChanged = ::Enviro::EnviroManager_SeasonChanged;

using WeatherChanged = ::Enviro::EnviroManager_WeatherChanged;

using YearPassed = ::Enviro::EnviroManager_YearPassed;

using ZoneParams = ::Enviro::EnviroManager_ZoneParams;

using ZoneWeatherChanged = ::Enviro::EnviroManager_ZoneWeatherChanged;

using _FirstFrame_d__99 = ::Enviro::EnviroManager__FirstFrame_d__99;

using isDayEvent = ::Enviro::EnviroManager_isDayEvent;

using isNightEvent = ::Enviro::EnviroManager_isNightEvent;

/// @brief Field Camera, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Camera, put=__cordl_internal_set_Camera)) ::UnityW<::UnityEngine::Camera>  Camera;

/// @brief Field CameraTag, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraTag, put=__cordl_internal_set_CameraTag)) ::StringW  CameraTag;

/// @brief Field Cameras, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Cameras, put=__cordl_internal_set_Cameras)) ::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>*  Cameras;

/// @brief Field Events, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_Events, put=__cordl_internal_set_Events)) ::Enviro::EnviroEvents*  Events;

/// @brief Field Objects, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Objects, put=__cordl_internal_set_Objects)) ::Enviro::GeneralObjects*  Objects;

/// @brief Field OnDayPassed, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDayPassed, put=__cordl_internal_set_OnDayPassed)) ::Enviro::EnviroManager_DayPassed*  OnDayPassed;

/// @brief Field OnDayTime, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDayTime, put=__cordl_internal_set_OnDayTime)) ::Enviro::EnviroManager_isDayEvent*  OnDayTime;

/// @brief Field OnHourPassed, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHourPassed, put=__cordl_internal_set_OnHourPassed)) ::Enviro::EnviroManager_HourPassed*  OnHourPassed;

/// @brief Field OnNightTime, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNightTime, put=__cordl_internal_set_OnNightTime)) ::Enviro::EnviroManager_isNightEvent*  OnNightTime;

/// @brief Field OnSeasonChanged, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSeasonChanged, put=__cordl_internal_set_OnSeasonChanged)) ::Enviro::EnviroManager_SeasonChanged*  OnSeasonChanged;

/// @brief Field OnWeatherChanged, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWeatherChanged, put=__cordl_internal_set_OnWeatherChanged)) ::Enviro::EnviroManager_WeatherChanged*  OnWeatherChanged;

/// @brief Field OnYearPassed, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnYearPassed, put=__cordl_internal_set_OnYearPassed)) ::Enviro::EnviroManager_YearPassed*  OnYearPassed;

/// @brief Field OnZoneWeatherChanged, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnZoneWeatherChanged, put=__cordl_internal_set_OnZoneWeatherChanged)) ::Enviro::EnviroManager_ZoneWeatherChanged*  OnZoneWeatherChanged;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Enviro::EnviroManager>  _instance;

/// @brief Field clearCBPoint, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_clearCBPoint, put=__cordl_internal_set_clearCBPoint)) ::UnityEngine::ComputeBuffer*  clearCBPoint;

/// @brief Field clearCBSpot, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_clearCBSpot, put=__cordl_internal_set_clearCBSpot)) ::UnityEngine::ComputeBuffer*  clearCBSpot;

/// @brief Field clearZoneCB, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_clearZoneCB, put=__cordl_internal_set_clearZoneCB)) ::UnityEngine::ComputeBuffer*  clearZoneCB;

/// @brief Field currentZone, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentZone, put=__cordl_internal_set_currentZone)) ::UnityW<::Enviro::EnviroZone>  currentZone;

/// @brief Field dayNightSwitch, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_dayNightSwitch, put=__cordl_internal_set_dayNightSwitch)) float_t  dayNightSwitch;

/// @brief Field defaultZone, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultZone, put=__cordl_internal_set_defaultZone)) ::UnityW<::Enviro::EnviroZone>  defaultZone;

/// @brief Field dontDestroyOnLoad, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontDestroyOnLoad, put=__cordl_internal_set_dontDestroyOnLoad)) bool  dontDestroyOnLoad;

/// @brief Field isNight, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNight, put=__cordl_internal_set_isNight)) bool  isNight;

/// @brief Field lunarTime, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lunarTime, put=__cordl_internal_set_lunarTime)) float_t  lunarTime;

/// @brief Field moonRotationX, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_moonRotationX, put=__cordl_internal_set_moonRotationX)) float_t  moonRotationX;

/// @brief Field moonRotationY, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_moonRotationY, put=__cordl_internal_set_moonRotationY)) float_t  moonRotationY;

/// @brief Field notFirstFrame, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_notFirstFrame, put=__cordl_internal_set_notFirstFrame)) bool  notFirstFrame;

/// @brief Field optionalFollowTransform, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_optionalFollowTransform, put=__cordl_internal_set_optionalFollowTransform)) ::UnityW<::UnityEngine::Transform>  optionalFollowTransform;

/// @brief Field removalZoneParams, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_removalZoneParams, put=__cordl_internal_set_removalZoneParams)) ::ArrayW<::Enviro::EnviroManager_ZoneParams>  removalZoneParams;

/// @brief Field removalZones, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_removalZones, put=__cordl_internal_set_removalZones)) ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>*  removalZones;

/// @brief Field removeZoneParamsCB, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_removeZoneParamsCB, put=__cordl_internal_set_removeZoneParamsCB)) ::UnityEngine::ComputeBuffer*  removeZoneParamsCB;

/// @brief Field showEvents, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEvents, put=__cordl_internal_set_showEvents)) bool  showEvents;

/// @brief Field showModules, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_showModules, put=__cordl_internal_set_showModules)) bool  showModules;

/// @brief Field showNonTimeControls, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get_showNonTimeControls, put=__cordl_internal_set_showNonTimeControls)) bool  showNonTimeControls;

/// @brief Field showSetup, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSetup, put=__cordl_internal_set_showSetup)) bool  showSetup;

/// @brief Field showThirdParty, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get_showThirdParty, put=__cordl_internal_set_showThirdParty)) bool  showThirdParty;

/// @brief Field solarTime, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_solarTime, put=__cordl_internal_set_solarTime)) float_t  solarTime;

/// @brief Field sunRotationX, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunRotationX, put=__cordl_internal_set_sunRotationX)) float_t  sunRotationX;

/// @brief Field sunRotationY, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunRotationY, put=__cordl_internal_set_sunRotationY)) float_t  sunRotationY;

/// @brief Field updateSkyAndLighting, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateSkyAndLighting, put=__cordl_internal_set_updateSkyAndLighting)) bool  updateSkyAndLighting;

/// @brief Field updateSkyAndLightingHDRP, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateSkyAndLightingHDRP, put=__cordl_internal_set_updateSkyAndLightingHDRP)) bool  updateSkyAndLightingHDRP;

/// @brief Field zones, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>*  zones;

/// @brief Method AddAdditionalCamera, addr 0x180602870, size 0x190, virtual false, abstract: false, final false
inline void AddAdditionalCamera(::UnityEngine::Camera*  cam, bool  reset) ;

/// @brief Method AddCameraComponents, addr 0x180602a00, size 0x1c0, virtual false, abstract: false, final false
inline void AddCameraComponents() ;

/// @brief Method AddRemovalZone, addr 0x180602bc0, size 0x70, virtual false, abstract: false, final false
inline bool AddRemovalZone(::Enviro::EnviroEffectRemovalZone*  zone) ;

/// @brief Method ChangeCamera, addr 0x180322790, size 0x20, virtual false, abstract: false, final false
inline void ChangeCamera(::UnityEngine::Camera*  cam) ;

/// @brief Method CheckCameraSetup, addr 0x180602c30, size 0xf0, virtual false, abstract: false, final false
inline void CheckCameraSetup() ;

/// @brief Method CreateGeneralObjects, addr 0x180602d20, size 0x390, virtual false, abstract: false, final false
inline void CreateGeneralObjects() ;

/// @brief Method CreateHDRPVolume, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CreateHDRPVolume() ;

/// @brief Method CreateZoneBuffers, addr 0x1806030b0, size 0xe0, virtual false, abstract: false, final false
inline void CreateZoneBuffers() ;

/// @brief Method DayPassedInvoke, addr 0x180603190, size 0x30, virtual false, abstract: false, final false
inline void DayPassedInvoke() ;

/// @brief Method DayTimeInvoke, addr 0x1806031c0, size 0x30, virtual false, abstract: false, final false
inline void DayTimeInvoke() ;

/// @brief Method EventInit, addr 0x1806031f0, size 0x7a0, virtual false, abstract: false, final false
inline void EventInit() ;

/// @brief Method FirstFrame, addr 0x180603990, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FirstFrame() ;

/// @brief Method HourPassedInvoke, addr 0x1806039e0, size 0x30, virtual false, abstract: false, final false
inline void HourPassedInvoke() ;

/// @brief Method LateUpdate, addr 0x180603a10, size 0xc0, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method Load, addr 0x180603ad0, size 0x170, virtual false, abstract: false, final false
inline void Load() ;

static inline ::Enviro::EnviroManager* New_ctor() ;

/// @brief Method NightTimeInvoke, addr 0x180603c40, size 0x30, virtual false, abstract: false, final false
inline void NightTimeInvoke() ;

/// @brief Method NotifyDayPassed, addr 0x180603c70, size 0x30, virtual true, abstract: false, final false
inline void NotifyDayPassed() ;

/// @brief Method NotifyHourPassed, addr 0x180603ca0, size 0x30, virtual true, abstract: false, final false
inline void NotifyHourPassed() ;

/// @brief Method NotifyIsDay, addr 0x180603cd0, size 0x30, virtual true, abstract: false, final false
inline void NotifyIsDay() ;

/// @brief Method NotifyIsNight, addr 0x180603d00, size 0x30, virtual true, abstract: false, final false
inline void NotifyIsNight() ;

/// @brief Method NotifySeasonChanged, addr 0x180603d30, size 0x30, virtual true, abstract: false, final false
inline void NotifySeasonChanged(::Enviro::EnviroEnvironment_Seasons  season) ;

/// @brief Method NotifyWeatherChanged, addr 0x180603d60, size 0x30, virtual true, abstract: false, final false
inline void NotifyWeatherChanged(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method NotifyYearPassed, addr 0x180603d90, size 0x30, virtual true, abstract: false, final false
inline void NotifyYearPassed() ;

/// @brief Method NotifyZoneWeatherChanged, addr 0x180603dc0, size 0x30, virtual true, abstract: false, final false
inline void NotifyZoneWeatherChanged(::Enviro::EnviroWeatherType*  type, ::Enviro::EnviroZone*  zone) ;

/// @brief Method OnDisable, addr 0x180603df0, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180603ec0, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReleaseZoneBuffers, addr 0x180603f70, size 0x80, virtual false, abstract: false, final false
inline void ReleaseZoneBuffers() ;

/// @brief Method RemoveRemovaleZone, addr 0x180603ff0, size 0x60, virtual false, abstract: false, final false
inline void RemoveRemovaleZone(::Enviro::EnviroEffectRemovalZone*  zone) ;

/// @brief Method Save, addr 0x180604050, size 0x180, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method SeasonsChangedInvoke, addr 0x1806041d0, size 0x30, virtual false, abstract: false, final false
inline void SeasonsChangedInvoke() ;

/// @brief Method SetSRPKeywords, addr 0x180604200, size 0x30, virtual false, abstract: false, final false
inline void SetSRPKeywords() ;

/// @brief Method SetupZoneBuffers, addr 0x180604230, size 0x470, virtual false, abstract: false, final false
inline void SetupZoneBuffers() ;

/// @brief Method Start, addr 0x1806046a0, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180604d20, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateManager, addr 0x1806047c0, size 0x260, virtual false, abstract: false, final false
inline void UpdateManager() ;

/// @brief Method UpdateNonTime, addr 0x180604a20, size 0x300, virtual false, abstract: false, final false
inline void UpdateNonTime() ;

/// @brief Method WeatherChangedInvoke, addr 0x180604760, size 0x30, virtual false, abstract: false, final false
inline void WeatherChangedInvoke() ;

/// @brief Method YearPassedInvoke, addr 0x180604730, size 0x30, virtual false, abstract: false, final false
inline void YearPassedInvoke() ;

/// @brief Method ZoneChangedInvoke, addr 0x180604790, size 0x30, virtual false, abstract: false, final false
inline void ZoneChangedInvoke() ;

/// @brief Method <EventInit>b__105_0, addr 0x1806039e0, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_0() ;

/// @brief Method <EventInit>b__105_1, addr 0x180603190, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_1() ;

/// @brief Method <EventInit>b__105_2, addr 0x180604730, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_2() ;

/// @brief Method <EventInit>b__105_3, addr 0x180603c40, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_3() ;

/// @brief Method <EventInit>b__105_4, addr 0x1806031c0, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_4() ;

/// @brief Method <EventInit>b__105_5, addr 0x180604760, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_5(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method <EventInit>b__105_6, addr 0x180604790, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_6(::Enviro::EnviroWeatherType*  type, ::Enviro::EnviroZone*  zone) ;

/// @brief Method <EventInit>b__105_7, addr 0x1806041d0, size 0x30, virtual false, abstract: false, final false
inline void _EventInit_b__105_7(::Enviro::EnviroEnvironment_Seasons  season) ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_Camera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_Camera() ;

constexpr ::StringW const& __cordl_internal_get_CameraTag() const;

constexpr ::StringW& __cordl_internal_get_CameraTag() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>* const& __cordl_internal_get_Cameras() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>*& __cordl_internal_get_Cameras() ;

constexpr ::Enviro::EnviroEvents* const& __cordl_internal_get_Events() const;

constexpr ::Enviro::EnviroEvents*& __cordl_internal_get_Events() ;

constexpr ::Enviro::GeneralObjects* const& __cordl_internal_get_Objects() const;

constexpr ::Enviro::GeneralObjects*& __cordl_internal_get_Objects() ;

constexpr ::Enviro::EnviroManager_DayPassed* const& __cordl_internal_get_OnDayPassed() const;

constexpr ::Enviro::EnviroManager_DayPassed*& __cordl_internal_get_OnDayPassed() ;

constexpr ::Enviro::EnviroManager_isDayEvent* const& __cordl_internal_get_OnDayTime() const;

constexpr ::Enviro::EnviroManager_isDayEvent*& __cordl_internal_get_OnDayTime() ;

constexpr ::Enviro::EnviroManager_HourPassed* const& __cordl_internal_get_OnHourPassed() const;

constexpr ::Enviro::EnviroManager_HourPassed*& __cordl_internal_get_OnHourPassed() ;

constexpr ::Enviro::EnviroManager_isNightEvent* const& __cordl_internal_get_OnNightTime() const;

constexpr ::Enviro::EnviroManager_isNightEvent*& __cordl_internal_get_OnNightTime() ;

constexpr ::Enviro::EnviroManager_SeasonChanged* const& __cordl_internal_get_OnSeasonChanged() const;

constexpr ::Enviro::EnviroManager_SeasonChanged*& __cordl_internal_get_OnSeasonChanged() ;

constexpr ::Enviro::EnviroManager_WeatherChanged* const& __cordl_internal_get_OnWeatherChanged() const;

constexpr ::Enviro::EnviroManager_WeatherChanged*& __cordl_internal_get_OnWeatherChanged() ;

constexpr ::Enviro::EnviroManager_YearPassed* const& __cordl_internal_get_OnYearPassed() const;

constexpr ::Enviro::EnviroManager_YearPassed*& __cordl_internal_get_OnYearPassed() ;

constexpr ::Enviro::EnviroManager_ZoneWeatherChanged* const& __cordl_internal_get_OnZoneWeatherChanged() const;

constexpr ::Enviro::EnviroManager_ZoneWeatherChanged*& __cordl_internal_get_OnZoneWeatherChanged() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_clearCBPoint() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_clearCBPoint() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_clearCBSpot() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_clearCBSpot() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_clearZoneCB() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_clearZoneCB() ;

constexpr ::UnityW<::Enviro::EnviroZone> const& __cordl_internal_get_currentZone() const;

constexpr ::UnityW<::Enviro::EnviroZone>& __cordl_internal_get_currentZone() ;

constexpr float_t const& __cordl_internal_get_dayNightSwitch() const;

constexpr float_t& __cordl_internal_get_dayNightSwitch() ;

constexpr ::UnityW<::Enviro::EnviroZone> const& __cordl_internal_get_defaultZone() const;

constexpr ::UnityW<::Enviro::EnviroZone>& __cordl_internal_get_defaultZone() ;

constexpr bool const& __cordl_internal_get_dontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get_dontDestroyOnLoad() ;

constexpr bool const& __cordl_internal_get_isNight() const;

constexpr bool& __cordl_internal_get_isNight() ;

constexpr float_t const& __cordl_internal_get_lunarTime() const;

constexpr float_t& __cordl_internal_get_lunarTime() ;

constexpr float_t const& __cordl_internal_get_moonRotationX() const;

constexpr float_t& __cordl_internal_get_moonRotationX() ;

constexpr float_t const& __cordl_internal_get_moonRotationY() const;

constexpr float_t& __cordl_internal_get_moonRotationY() ;

constexpr bool const& __cordl_internal_get_notFirstFrame() const;

constexpr bool& __cordl_internal_get_notFirstFrame() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_optionalFollowTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_optionalFollowTransform() ;

constexpr ::ArrayW<::Enviro::EnviroManager_ZoneParams> const& __cordl_internal_get_removalZoneParams() const;

constexpr ::ArrayW<::Enviro::EnviroManager_ZoneParams>& __cordl_internal_get_removalZoneParams() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>* const& __cordl_internal_get_removalZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>*& __cordl_internal_get_removalZones() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_removeZoneParamsCB() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_removeZoneParamsCB() ;

constexpr bool const& __cordl_internal_get_showEvents() const;

constexpr bool& __cordl_internal_get_showEvents() ;

constexpr bool const& __cordl_internal_get_showModules() const;

constexpr bool& __cordl_internal_get_showModules() ;

constexpr bool const& __cordl_internal_get_showNonTimeControls() const;

constexpr bool& __cordl_internal_get_showNonTimeControls() ;

constexpr bool const& __cordl_internal_get_showSetup() const;

constexpr bool& __cordl_internal_get_showSetup() ;

constexpr bool const& __cordl_internal_get_showThirdParty() const;

constexpr bool& __cordl_internal_get_showThirdParty() ;

constexpr float_t const& __cordl_internal_get_solarTime() const;

constexpr float_t& __cordl_internal_get_solarTime() ;

constexpr float_t const& __cordl_internal_get_sunRotationX() const;

constexpr float_t& __cordl_internal_get_sunRotationX() ;

constexpr float_t const& __cordl_internal_get_sunRotationY() const;

constexpr float_t& __cordl_internal_get_sunRotationY() ;

constexpr bool const& __cordl_internal_get_updateSkyAndLighting() const;

constexpr bool& __cordl_internal_get_updateSkyAndLighting() ;

constexpr bool const& __cordl_internal_get_updateSkyAndLightingHDRP() const;

constexpr bool& __cordl_internal_get_updateSkyAndLightingHDRP() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>* const& __cordl_internal_get_zones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>*& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_Camera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_CameraTag(::StringW  value) ;

constexpr void __cordl_internal_set_Cameras(::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>*  value) ;

constexpr void __cordl_internal_set_Events(::Enviro::EnviroEvents*  value) ;

constexpr void __cordl_internal_set_Objects(::Enviro::GeneralObjects*  value) ;

constexpr void __cordl_internal_set_OnDayPassed(::Enviro::EnviroManager_DayPassed*  value) ;

constexpr void __cordl_internal_set_OnDayTime(::Enviro::EnviroManager_isDayEvent*  value) ;

constexpr void __cordl_internal_set_OnHourPassed(::Enviro::EnviroManager_HourPassed*  value) ;

constexpr void __cordl_internal_set_OnNightTime(::Enviro::EnviroManager_isNightEvent*  value) ;

constexpr void __cordl_internal_set_OnSeasonChanged(::Enviro::EnviroManager_SeasonChanged*  value) ;

constexpr void __cordl_internal_set_OnWeatherChanged(::Enviro::EnviroManager_WeatherChanged*  value) ;

constexpr void __cordl_internal_set_OnYearPassed(::Enviro::EnviroManager_YearPassed*  value) ;

constexpr void __cordl_internal_set_OnZoneWeatherChanged(::Enviro::EnviroManager_ZoneWeatherChanged*  value) ;

constexpr void __cordl_internal_set_clearCBPoint(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_clearCBSpot(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_clearZoneCB(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_currentZone(::UnityW<::Enviro::EnviroZone>  value) ;

constexpr void __cordl_internal_set_dayNightSwitch(float_t  value) ;

constexpr void __cordl_internal_set_defaultZone(::UnityW<::Enviro::EnviroZone>  value) ;

constexpr void __cordl_internal_set_dontDestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set_isNight(bool  value) ;

constexpr void __cordl_internal_set_lunarTime(float_t  value) ;

constexpr void __cordl_internal_set_moonRotationX(float_t  value) ;

constexpr void __cordl_internal_set_moonRotationY(float_t  value) ;

constexpr void __cordl_internal_set_notFirstFrame(bool  value) ;

constexpr void __cordl_internal_set_optionalFollowTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_removalZoneParams(::ArrayW<::Enviro::EnviroManager_ZoneParams>  value) ;

constexpr void __cordl_internal_set_removalZones(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>*  value) ;

constexpr void __cordl_internal_set_removeZoneParamsCB(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_showEvents(bool  value) ;

constexpr void __cordl_internal_set_showModules(bool  value) ;

constexpr void __cordl_internal_set_showNonTimeControls(bool  value) ;

constexpr void __cordl_internal_set_showSetup(bool  value) ;

constexpr void __cordl_internal_set_showThirdParty(bool  value) ;

constexpr void __cordl_internal_set_solarTime(float_t  value) ;

constexpr void __cordl_internal_set_sunRotationX(float_t  value) ;

constexpr void __cordl_internal_set_sunRotationY(float_t  value) ;

constexpr void __cordl_internal_set_updateSkyAndLighting(bool  value) ;

constexpr void __cordl_internal_set_updateSkyAndLightingHDRP(bool  value) ;

constexpr void __cordl_internal_set_zones(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>*  value) ;

/// @brief Method .ctor, addr 0x180604d90, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnDayPassed, addr 0x180604eb0, size 0x90, virtual false, abstract: false, final false
inline void add_OnDayPassed(::Enviro::EnviroManager_DayPassed*  value) ;

/// @brief Method add_OnDayTime, addr 0x180604f40, size 0x90, virtual false, abstract: false, final false
inline void add_OnDayTime(::Enviro::EnviroManager_isDayEvent*  value) ;

/// @brief Method add_OnHourPassed, addr 0x180604fd0, size 0x90, virtual false, abstract: false, final false
inline void add_OnHourPassed(::Enviro::EnviroManager_HourPassed*  value) ;

/// @brief Method add_OnNightTime, addr 0x180605060, size 0x90, virtual false, abstract: false, final false
inline void add_OnNightTime(::Enviro::EnviroManager_isNightEvent*  value) ;

/// @brief Method add_OnSeasonChanged, addr 0x1806050f0, size 0x90, virtual false, abstract: false, final false
inline void add_OnSeasonChanged(::Enviro::EnviroManager_SeasonChanged*  value) ;

/// @brief Method add_OnWeatherChanged, addr 0x180605180, size 0x90, virtual false, abstract: false, final false
inline void add_OnWeatherChanged(::Enviro::EnviroManager_WeatherChanged*  value) ;

/// @brief Method add_OnYearPassed, addr 0x180605210, size 0x90, virtual false, abstract: false, final false
inline void add_OnYearPassed(::Enviro::EnviroManager_YearPassed*  value) ;

/// @brief Method add_OnZoneWeatherChanged, addr 0x1806052a0, size 0x90, virtual false, abstract: false, final false
inline void add_OnZoneWeatherChanged(::Enviro::EnviroManager_ZoneWeatherChanged*  value) ;

static inline ::UnityW<::Enviro::EnviroManager> getStaticF__instance() ;

/// @brief Method get_instance, addr 0x180605330, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::Enviro::EnviroManager> get_instance() ;

/// @brief Method remove_OnDayPassed, addr 0x1806053a0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnDayPassed(::Enviro::EnviroManager_DayPassed*  value) ;

/// @brief Method remove_OnDayTime, addr 0x180605430, size 0x90, virtual false, abstract: false, final false
inline void remove_OnDayTime(::Enviro::EnviroManager_isDayEvent*  value) ;

/// @brief Method remove_OnHourPassed, addr 0x1806054c0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnHourPassed(::Enviro::EnviroManager_HourPassed*  value) ;

/// @brief Method remove_OnNightTime, addr 0x180605550, size 0x90, virtual false, abstract: false, final false
inline void remove_OnNightTime(::Enviro::EnviroManager_isNightEvent*  value) ;

/// @brief Method remove_OnSeasonChanged, addr 0x1806055e0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnSeasonChanged(::Enviro::EnviroManager_SeasonChanged*  value) ;

/// @brief Method remove_OnWeatherChanged, addr 0x180605670, size 0x90, virtual false, abstract: false, final false
inline void remove_OnWeatherChanged(::Enviro::EnviroManager_WeatherChanged*  value) ;

/// @brief Method remove_OnYearPassed, addr 0x180605700, size 0x90, virtual false, abstract: false, final false
inline void remove_OnYearPassed(::Enviro::EnviroManager_YearPassed*  value) ;

/// @brief Method remove_OnZoneWeatherChanged, addr 0x180605790, size 0x90, virtual false, abstract: false, final false
inline void remove_OnZoneWeatherChanged(::Enviro::EnviroManager_ZoneWeatherChanged*  value) ;

static inline void setStaticF__instance(::UnityW<::Enviro::EnviroManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManager(EnviroManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManager(EnviroManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18419};

/// @brief Field Objects, offset: 0xa0, size: 0x8, def value: None
 ::Enviro::GeneralObjects*  ___Objects;

/// @brief Field dontDestroyOnLoad, offset: 0xa8, size: 0x1, def value: None
 bool  ___dontDestroyOnLoad;

/// @brief Field Camera, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___Camera;

/// @brief Field CameraTag, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___CameraTag;

/// @brief Field Cameras, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroCameras*>*  ___Cameras;

/// @brief Field optionalFollowTransform, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___optionalFollowTransform;

/// @brief Field showSetup, offset: 0xd0, size: 0x1, def value: None
 bool  ___showSetup;

/// @brief Field showModules, offset: 0xd1, size: 0x1, def value: None
 bool  ___showModules;

/// @brief Field showEvents, offset: 0xd2, size: 0x1, def value: None
 bool  ___showEvents;

/// @brief Field showThirdParty, offset: 0xd3, size: 0x1, def value: None
 bool  ___showThirdParty;

/// @brief Field dayNightSwitch, offset: 0xd4, size: 0x4, def value: None
 float_t  ___dayNightSwitch;

/// @brief Field isNight, offset: 0xd8, size: 0x1, def value: None
 bool  ___isNight;

/// @brief Field solarTime, offset: 0xdc, size: 0x4, def value: None
 float_t  ___solarTime;

/// @brief Field lunarTime, offset: 0xe0, size: 0x4, def value: None
 float_t  ___lunarTime;

/// @brief Field notFirstFrame, offset: 0xe4, size: 0x1, def value: None
 bool  ___notFirstFrame;

/// @brief Field removalZones, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroEffectRemovalZone>>*  ___removalZones;

/// @brief Field clearZoneCB, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___clearZoneCB;

/// @brief Field removeZoneParamsCB, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___removeZoneParamsCB;

/// @brief Field clearCBPoint, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___clearCBPoint;

/// @brief Field clearCBSpot, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___clearCBSpot;

/// @brief Field removalZoneParams, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::Enviro::EnviroManager_ZoneParams>  ___removalZoneParams;

/// @brief Field sunRotationX, offset: 0x118, size: 0x4, def value: None
 float_t  ___sunRotationX;

/// @brief Field sunRotationY, offset: 0x11c, size: 0x4, def value: None
 float_t  ___sunRotationY;

/// @brief Field moonRotationX, offset: 0x120, size: 0x4, def value: None
 float_t  ___moonRotationX;

/// @brief Field moonRotationY, offset: 0x124, size: 0x4, def value: None
 float_t  ___moonRotationY;

/// @brief Field showNonTimeControls, offset: 0x128, size: 0x1, def value: None
 bool  ___showNonTimeControls;

/// @brief Field Events, offset: 0x130, size: 0x8, def value: None
 ::Enviro::EnviroEvents*  ___Events;

/// @brief Field OnHourPassed, offset: 0x138, size: 0x8, def value: None
 ::Enviro::EnviroManager_HourPassed*  ___OnHourPassed;

/// @brief Field OnDayPassed, offset: 0x140, size: 0x8, def value: None
 ::Enviro::EnviroManager_DayPassed*  ___OnDayPassed;

/// @brief Field OnYearPassed, offset: 0x148, size: 0x8, def value: None
 ::Enviro::EnviroManager_YearPassed*  ___OnYearPassed;

/// @brief Field OnWeatherChanged, offset: 0x150, size: 0x8, def value: None
 ::Enviro::EnviroManager_WeatherChanged*  ___OnWeatherChanged;

/// @brief Field OnZoneWeatherChanged, offset: 0x158, size: 0x8, def value: None
 ::Enviro::EnviroManager_ZoneWeatherChanged*  ___OnZoneWeatherChanged;

/// @brief Field OnSeasonChanged, offset: 0x160, size: 0x8, def value: None
 ::Enviro::EnviroManager_SeasonChanged*  ___OnSeasonChanged;

/// @brief Field OnNightTime, offset: 0x168, size: 0x8, def value: None
 ::Enviro::EnviroManager_isNightEvent*  ___OnNightTime;

/// @brief Field OnDayTime, offset: 0x170, size: 0x8, def value: None
 ::Enviro::EnviroManager_isDayEvent*  ___OnDayTime;

/// @brief Field currentZone, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroZone>  ___currentZone;

/// @brief Field defaultZone, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroZone>  ___defaultZone;

/// @brief Field zones, offset: 0x188, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroZone>>*  ___zones;

/// @brief Field updateSkyAndLighting, offset: 0x190, size: 0x1, def value: None
 bool  ___updateSkyAndLighting;

/// @brief Field updateSkyAndLightingHDRP, offset: 0x191, size: 0x1, def value: None
 bool  ___updateSkyAndLightingHDRP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroManager, ___Objects) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___dontDestroyOnLoad) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___Camera) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___CameraTag) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___Cameras) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___optionalFollowTransform) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___showSetup) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___showModules) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___showEvents) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___showThirdParty) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___dayNightSwitch) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___isNight) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___solarTime) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___lunarTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___notFirstFrame) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___removalZones) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___clearZoneCB) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___removeZoneParamsCB) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___clearCBPoint) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___clearCBSpot) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___removalZoneParams) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___sunRotationX) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___sunRotationY) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___moonRotationX) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___moonRotationY) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___showNonTimeControls) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___Events) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnHourPassed) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnDayPassed) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnYearPassed) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnWeatherChanged) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnZoneWeatherChanged) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnSeasonChanged) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnNightTime) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___OnDayTime) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___currentZone) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___defaultZone) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___zones) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___updateSkyAndLighting) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManager, ___updateSkyAndLightingHDRP) == 0x191, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroManager) == 0x198, "Size mismatch!");

} // namespace end def Enviro
