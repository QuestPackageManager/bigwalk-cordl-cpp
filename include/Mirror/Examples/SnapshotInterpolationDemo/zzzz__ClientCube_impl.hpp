#pragma once
// IWYU pragma private; include "Mirror/Examples/SnapshotInterpolationDemo/ClientCube.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__ClientCube_def.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__ServerCube_def.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__Snapshot3D_def.hpp"
#include "Mirror/zzzz__SnapshotInterpolationSettings_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube.get_bufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::get_bufferTime)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181559f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"get_bufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815591c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube.OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D)>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::OnMessage)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181559970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"OnMessage", {}, {::i2c::type_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::Update)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181559b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::OnGUI)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x1815592f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::OnValidate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181559af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181559e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube>& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube> const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_server(::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___server = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_render()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___render;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_render() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___render;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_render(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___render = value;
}
constexpr bool& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_interpolate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolate;
}
constexpr bool const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_interpolate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolate;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_interpolate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolate = value;
}
constexpr ::Mirror::SnapshotInterpolationSettings*& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_snapshotSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshotSettings;
}
constexpr ::Mirror::SnapshotInterpolationSettings* const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_snapshotSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshotSettings;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_snapshotSettings(::Mirror::SnapshotInterpolationSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapshotSettings = value;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>*& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_snapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshots;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>* const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_snapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshots;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_snapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapshots = value;
}
constexpr double_t& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_localTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTimeline;
}
constexpr double_t const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_localTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTimeline;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_localTimeline(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localTimeline = value;
}
constexpr double_t& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_localTimescale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTimescale;
}
constexpr double_t const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_localTimescale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTimescale;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_localTimescale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localTimescale = value;
}
constexpr ::Mirror::ExponentialMovingAverage& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_driftEma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driftEma;
}
constexpr ::Mirror::ExponentialMovingAverage const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_driftEma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driftEma;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_driftEma(::Mirror::ExponentialMovingAverage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___driftEma = value;
}
constexpr ::Mirror::ExponentialMovingAverage& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_deliveryTimeEma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deliveryTimeEma;
}
constexpr ::Mirror::ExponentialMovingAverage const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_deliveryTimeEma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deliveryTimeEma;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_deliveryTimeEma(::Mirror::ExponentialMovingAverage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deliveryTimeEma = value;
}
constexpr ::UnityEngine::Color& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_catchupColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupColor;
}
constexpr ::UnityEngine::Color const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_catchupColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchupColor;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_catchupColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchupColor = value;
}
constexpr ::UnityEngine::Color& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_slowdownColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownColor;
}
constexpr ::UnityEngine::Color const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_slowdownColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownColor;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_slowdownColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowdownColor = value;
}
constexpr ::UnityEngine::Color& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr ::UnityEngine::Color const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColor = value;
}
constexpr bool& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_lowFpsMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowFpsMode;
}
constexpr bool const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_lowFpsMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowFpsMode;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_lowFpsMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowFpsMode = value;
}
constexpr double_t& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_accumulatedDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumulatedDeltaTime;
}
constexpr double_t const& Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_get_accumulatedDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumulatedDeltaTime;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::__cordl_internal_set_accumulatedDeltaTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accumulatedDeltaTime = value;
}
inline double_t Mirror::Examples::SnapshotInterpolationDemo::ClientCube::get_bufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"get_bufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::OnMessage(::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D  snap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"OnMessage", {}, {::i2c::type_of<::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snap);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ClientCube::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube* Mirror::Examples::SnapshotInterpolationDemo::ClientCube::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::SnapshotInterpolationDemo::ClientCube::ClientCube()   {
}
