#pragma once
// IWYU pragma private; include "Mirror/Examples/SnapshotInterpolationDemo/ClientCube.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClientCube)
namespace Mirror::Examples::SnapshotInterpolationDemo {
class ServerCube;
}
namespace Mirror::Examples::SnapshotInterpolationDemo {
struct Snapshot3D;
}
namespace Mirror {
class SnapshotInterpolationSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Mirror::Examples::SnapshotInterpolationDemo {
class ClientCube;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*, "Mirror.Examples.SnapshotInterpolationDemo", "ClientCube");
// Dependencies Mirror.ExponentialMovingAverage, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Mirror::Examples::SnapshotInterpolationDemo {
// Is value type: false
// CS Name: Mirror.Examples.SnapshotInterpolationDemo.ClientCube
class CORDL_TYPE ClientCube : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field accumulatedDeltaTime, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_accumulatedDeltaTime, put=__cordl_internal_set_accumulatedDeltaTime)) double_t  accumulatedDeltaTime;

 __declspec(property(get=get_bufferTime)) double_t  bufferTime;

/// @brief Field catchupColor, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_catchupColor, put=__cordl_internal_set_catchupColor)) ::UnityEngine::Color  catchupColor;

/// @brief Field defaultColor, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultColor, put=__cordl_internal_set_defaultColor)) ::UnityEngine::Color  defaultColor;

/// @brief Field deliveryTimeEma, offset 0x80, size 0x28 
 __declspec(property(get=__cordl_internal_get_deliveryTimeEma, put=__cordl_internal_set_deliveryTimeEma)) ::Mirror::ExponentialMovingAverage  deliveryTimeEma;

/// @brief Field driftEma, offset 0x58, size 0x28 
 __declspec(property(get=__cordl_internal_get_driftEma, put=__cordl_internal_set_driftEma)) ::Mirror::ExponentialMovingAverage  driftEma;

/// @brief Field interpolate, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_interpolate, put=__cordl_internal_set_interpolate)) bool  interpolate;

/// @brief Field localTimeline, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_localTimeline, put=__cordl_internal_set_localTimeline)) double_t  localTimeline;

/// @brief Field localTimescale, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_localTimescale, put=__cordl_internal_set_localTimescale)) double_t  localTimescale;

/// @brief Field lowFpsMode, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_lowFpsMode, put=__cordl_internal_set_lowFpsMode)) bool  lowFpsMode;

/// @brief Field render, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_render, put=__cordl_internal_set_render)) ::UnityW<::UnityEngine::Renderer>  render;

/// @brief Field server, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_server, put=__cordl_internal_set_server)) ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube>  server;

/// @brief Field slowdownColor, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_slowdownColor, put=__cordl_internal_set_slowdownColor)) ::UnityEngine::Color  slowdownColor;

/// @brief Field snapshotSettings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapshotSettings, put=__cordl_internal_set_snapshotSettings)) ::Mirror::SnapshotInterpolationSettings*  snapshotSettings;

/// @brief Field snapshots, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapshots, put=__cordl_internal_set_snapshots)) ::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>*  snapshots;

/// @brief Method Awake, addr 0x1815591c0, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube* New_ctor() ;

/// @brief Method OnGUI, addr 0x1815592f0, size 0x680, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnMessage, addr 0x181559970, size 0x180, virtual false, abstract: false, final false
inline void OnMessage(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D  snap) ;

/// @brief Method OnValidate, addr 0x181559af0, size 0x40, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Update, addr 0x181559b30, size 0x320, virtual false, abstract: false, final false
inline void Update() ;

constexpr double_t const& __cordl_internal_get_accumulatedDeltaTime() const;

constexpr double_t& __cordl_internal_get_accumulatedDeltaTime() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_catchupColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_catchupColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultColor() ;

constexpr ::Mirror::ExponentialMovingAverage const& __cordl_internal_get_deliveryTimeEma() const;

constexpr ::Mirror::ExponentialMovingAverage& __cordl_internal_get_deliveryTimeEma() ;

constexpr ::Mirror::ExponentialMovingAverage const& __cordl_internal_get_driftEma() const;

constexpr ::Mirror::ExponentialMovingAverage& __cordl_internal_get_driftEma() ;

constexpr bool const& __cordl_internal_get_interpolate() const;

constexpr bool& __cordl_internal_get_interpolate() ;

constexpr double_t const& __cordl_internal_get_localTimeline() const;

constexpr double_t& __cordl_internal_get_localTimeline() ;

constexpr double_t const& __cordl_internal_get_localTimescale() const;

constexpr double_t& __cordl_internal_get_localTimescale() ;

constexpr bool const& __cordl_internal_get_lowFpsMode() const;

constexpr bool& __cordl_internal_get_lowFpsMode() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_render() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_render() ;

constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube> const& __cordl_internal_get_server() const;

constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube>& __cordl_internal_get_server() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_slowdownColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_slowdownColor() ;

constexpr ::Mirror::SnapshotInterpolationSettings* const& __cordl_internal_get_snapshotSettings() const;

constexpr ::Mirror::SnapshotInterpolationSettings*& __cordl_internal_get_snapshotSettings() ;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>* const& __cordl_internal_get_snapshots() const;

constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>*& __cordl_internal_get_snapshots() ;

constexpr void __cordl_internal_set_accumulatedDeltaTime(double_t  value) ;

constexpr void __cordl_internal_set_catchupColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_deliveryTimeEma(::Mirror::ExponentialMovingAverage  value) ;

constexpr void __cordl_internal_set_driftEma(::Mirror::ExponentialMovingAverage  value) ;

constexpr void __cordl_internal_set_interpolate(bool  value) ;

constexpr void __cordl_internal_set_localTimeline(double_t  value) ;

constexpr void __cordl_internal_set_localTimescale(double_t  value) ;

constexpr void __cordl_internal_set_lowFpsMode(bool  value) ;

constexpr void __cordl_internal_set_render(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_server(::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube>  value) ;

constexpr void __cordl_internal_set_slowdownColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_snapshotSettings(::Mirror::SnapshotInterpolationSettings*  value) ;

constexpr void __cordl_internal_set_snapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>*  value) ;

/// @brief Method .ctor, addr 0x181559e50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bufferTime, addr 0x181559f00, size 0x2e0, virtual false, abstract: false, final false
inline double_t get_bufferTime() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientCube() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientCube", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientCube(ClientCube && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientCube", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientCube(ClientCube const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19277};

/// @brief Field server, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube>  ___server;

/// @brief Field render, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___render;

/// @brief Field interpolate, offset: 0x30, size: 0x1, def value: None
 bool  ___interpolate;

/// @brief Field snapshotSettings, offset: 0x38, size: 0x8, def value: None
 ::Mirror::SnapshotInterpolationSettings*  ___snapshotSettings;

/// @brief Field snapshots, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>*  ___snapshots;

/// @brief Field localTimeline, offset: 0x48, size: 0x8, def value: None
 double_t  ___localTimeline;

/// @brief Field localTimescale, offset: 0x50, size: 0x8, def value: None
 double_t  ___localTimescale;

/// @brief Field driftEma, offset: 0x58, size: 0x28, def value: None
 ::Mirror::ExponentialMovingAverage  ___driftEma;

/// @brief Field deliveryTimeEma, offset: 0x80, size: 0x28, def value: None
 ::Mirror::ExponentialMovingAverage  ___deliveryTimeEma;

/// @brief Field catchupColor, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ___catchupColor;

/// @brief Field slowdownColor, offset: 0xb8, size: 0x10, def value: None
 ::UnityEngine::Color  ___slowdownColor;

/// @brief Field defaultColor, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultColor;

/// @brief Field lowFpsMode, offset: 0xd8, size: 0x1, def value: None
 bool  ___lowFpsMode;

/// @brief Field accumulatedDeltaTime, offset: 0xe0, size: 0x8, def value: None
 double_t  ___accumulatedDeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___server) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___render) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___interpolate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___snapshotSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___snapshots) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___localTimeline) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___localTimescale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___driftEma) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___deliveryTimeEma) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___catchupColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___slowdownColor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___defaultColor) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___lowFpsMode) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube, ___accumulatedDeltaTime) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::SnapshotInterpolationDemo::ClientCube) == 0xe8, "Size mismatch!");

} // namespace end def Mirror::Examples::SnapshotInterpolationDemo
