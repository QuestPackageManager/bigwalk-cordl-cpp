#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthProbe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeRefreshMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Placement_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbe_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeRefreshMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbe_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Placement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__QualitySettingsOverride_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_DebugFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe_DebugFields::*)()>(&::WaveHarmonic::Crest::DepthProbe_DebugFields::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::DepthProbe_DebugFields::__cordl_internal_get__ShowHiddenObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowHiddenObjects;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe_DebugFields::__cordl_internal_get__ShowHiddenObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowHiddenObjects;
}
constexpr void WaveHarmonic::Crest::DepthProbe_DebugFields::__cordl_internal_set__ShowHiddenObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowHiddenObjects = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe_DebugFields::__cordl_internal_get__ShowSimulationDataInScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowSimulationDataInScene;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe_DebugFields::__cordl_internal_get__ShowSimulationDataInScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowSimulationDataInScene;
}
constexpr void WaveHarmonic::Crest::DepthProbe_DebugFields::__cordl_internal_set__ShowSimulationDataInScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowSimulationDataInScene = value;
}
inline void WaveHarmonic::Crest::DepthProbe_DebugFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_DebugFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DepthProbe_DebugFields* WaveHarmonic::Crest::DepthProbe_DebugFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthProbe_DebugFields*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthProbe_DebugFields::DepthProbe_DebugFields()   {
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_CamDepthBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CamDepthBuffer", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_CamDepthBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "s_CamDepthBuffer", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_CustomZBufferParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CustomZBufferParams", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_CustomZBufferParams()  {
return ::cordl_internals::getStaticField<int32_t, "s_CustomZBufferParams", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_HeightNearHeightFar(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HeightNearHeightFar", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_HeightNearHeightFar()  {
return ::cordl_internals::getStaticField<int32_t, "s_HeightNearHeightFar", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_HeightOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_HeightOffset", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_HeightOffset()  {
return ::cordl_internals::getStaticField<int32_t, "s_HeightOffset", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_CameraDepthBufferBackfaces(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CameraDepthBufferBackfaces", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_CameraDepthBufferBackfaces()  {
return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthBufferBackfaces", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_PreviousPlane(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PreviousPlane", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_PreviousPlane()  {
return ::cordl_internals::getStaticField<int32_t, "s_PreviousPlane", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_DepthProbe(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DepthProbe", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_DepthProbe()  {
return ::cordl_internals::getStaticField<int32_t, "s_DepthProbe", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_DepthProbeHeightOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DepthProbeHeightOffset", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_DepthProbeHeightOffset()  {
return ::cordl_internals::getStaticField<int32_t, "s_DepthProbeHeightOffset", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_DepthProbeResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DepthProbeResolution", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_DepthProbeResolution()  {
return ::cordl_internals::getStaticField<int32_t, "s_DepthProbeResolution", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_JumpSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_JumpSize", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_JumpSize()  {
return ::cordl_internals::getStaticField<int32_t, "s_JumpSize", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_WaterLevel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaterLevel", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_WaterLevel()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaterLevel", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_ProjectionToWorld(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_ProjectionToWorld", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_ProjectionToWorld()  {
return ::cordl_internals::getStaticField<int32_t, "s_ProjectionToWorld", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_VoronoiPingPong0(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_VoronoiPingPong0", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_VoronoiPingPong0()  {
return ::cordl_internals::getStaticField<int32_t, "s_VoronoiPingPong0", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::DepthProbe_ShaderIDs::setStaticF_s_VoronoiPingPong1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_VoronoiPingPong1", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::DepthProbe_ShaderIDs::getStaticF_s_VoronoiPingPong1()  {
return ::cordl_internals::getStaticField<int32_t, "s_VoronoiPingPong1", ::WaveHarmonic::Crest::DepthProbe_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthProbe_ShaderIDs::DepthProbe_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe_Input::*)()>(&::WaveHarmonic::Crest::DepthProbe_Input::get_Enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182559bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe_Input::*)()>(&::WaveHarmonic::Crest::DepthProbe_Input::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthProbe_Input::*)()>(&::WaveHarmonic::Crest::DepthProbe_Input::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthProbe_Input::*)()>(&::WaveHarmonic::Crest::DepthProbe_Input::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::DepthProbe_Input::*)()>(&::WaveHarmonic::Crest::DepthProbe_Input::get_Rect)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182559ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::DepthProbe_Input::*)()>(&::WaveHarmonic::Crest::DepthProbe_Input::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DepthProbe_Input::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::DepthProbe_Input::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe_Input::*)(::WaveHarmonic::Crest::DepthProbe*)>(&::WaveHarmonic::Crest::DepthProbe_Input::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthProbe*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe_Input.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe_Input::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::DepthProbe_Input::Draw)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x182559580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::DepthProbe>& WaveHarmonic::Crest::DepthProbe_Input::__cordl_internal_get__Probe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Probe;
}
constexpr ::UnityW<::WaveHarmonic::Crest::DepthProbe> const& WaveHarmonic::Crest::DepthProbe_Input::__cordl_internal_get__Probe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Probe;
}
constexpr void WaveHarmonic::Crest::DepthProbe_Input::__cordl_internal_set__Probe(::UnityW<::WaveHarmonic::Crest::DepthProbe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Probe = value;
}
inline bool WaveHarmonic::Crest::DepthProbe_Input::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthProbe_Input::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::DepthProbe_Input::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::DepthProbe_Input::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::DepthProbe_Input::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::DepthProbe_Input::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::DepthProbe_Input::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::DepthProbe_Input::_ctor(::WaveHarmonic::Crest::DepthProbe*  probe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthProbe*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, probe);
}
inline void WaveHarmonic::Crest::DepthProbe_Input::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe_Input*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slices);
}
inline ::WaveHarmonic::Crest::DepthProbe_Input* WaveHarmonic::Crest::DepthProbe_Input::New_ctor(::WaveHarmonic::Crest::DepthProbe*  probe)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthProbe_Input*>(probe));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::DepthProbe_Input::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::DepthProbe_Input::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthProbe_Input::DepthProbe_Input()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Rect)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182557750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Texture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Texture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_RealtimeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_RealtimeTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_RealtimeTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_TargetTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_TargetTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803223b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_TargetTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Managed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Managed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Managed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Managed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_Managed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Managed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_ManagedExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_ManagedExecution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c7c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_ManagedExecution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_ManagedExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_ManagedExecution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1820c8270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_ManagedExecution", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_ExternallyManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_ExternallyManaged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d97270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_ExternallyManaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_ExternallyManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_ExternallyManaged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_ExternallyManaged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_ExternallyManagedExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_ExternallyManagedExecution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182557520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_ExternallyManagedExecution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_ExternallyManagedExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_ExternallyManagedExecution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182557b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_ExternallyManagedExecution", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_OverridePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_OverridePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OverridePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_OverridePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_OverridePosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OverridePosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Position)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182557690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::DepthProbe::set_Position)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182557cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Rotation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x182557900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Scale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182557a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::Vector2)>(&::WaveHarmonic::Crest::DepthProbe::set_Scale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182557d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Scale", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_OnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* (*)()>(&::WaveHarmonic::Crest::DepthProbe::get_OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825575e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OnBeforeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_OnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*)>(&::WaveHarmonic::Crest::DepthProbe::set_OnBeforeRender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OnBeforeRender", {}, {::i2c::type_of<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_OnAfterRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* (*)()>(&::WaveHarmonic::Crest::DepthProbe::get_OnAfterRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825575a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OnAfterRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_OnAfterRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*)>(&::WaveHarmonic::Crest::DepthProbe::set_OnAfterRender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OnAfterRender", {}, {::i2c::type_of<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_OnBakeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* (*)()>(&::WaveHarmonic::Crest::DepthProbe::get_OnBakeRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825575c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OnBakeRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_OnBakeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*)>(&::WaveHarmonic::Crest::DepthProbe::set_OnBakeRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OnBakeRequest", {}, {::i2c::type_of<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::OnStart)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182555b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182555ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182557640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::DepthProbe::OnUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182555bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_OnLateUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_OnLateUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182557600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::DepthProbe::OnLateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182555b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.OnBeforeBuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::DepthProbe::OnBeforeBuildCommandBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182555a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"OnBeforeBuildCommandBuffer", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Outdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Outdated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182557680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Outdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.IsTextureOutdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::RenderTexture*, bool)>(&::WaveHarmonic::Crest::DepthProbe::IsTextureOutdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182555810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"IsTextureOutdated", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_FinalFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_FinalFormat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182557530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_FinalFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.MakeRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::RenderTexture*, bool)>(&::WaveHarmonic::Crest::DepthProbe::MakeRT)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1825558e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"MakeRT", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.InitObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::InitObjects)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x182554d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"InitObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.Populate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::Populate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182555c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"Populate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.ForcePopulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::ForcePopulate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1825548e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"ForcePopulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.RenderDepthIntoProbe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(int32_t, float_t)>(&::WaveHarmonic::Crest::DepthProbe::RenderDepthIntoProbe)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x182555c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"RenderDepthIntoProbe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.RenderSignedDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::RenderSignedDistanceField)> {
  constexpr static std::size_t size = 0xbd0;
  constexpr static std::size_t addrs = 0x182556460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"RenderSignedDistanceField", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.ApplyJumpFlood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, int32_t, int32_t, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::WaveHarmonic::Crest::DepthProbe::ApplyJumpFlood)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182554630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"ApplyJumpFlood", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::LayerMask, ::UnityEngine::LayerMask)>(&::WaveHarmonic::Crest::DepthProbe::SetDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.GetPlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Placement (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::GetPlacement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182554b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"GetPlacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.GetRefreshMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DepthProbeRefreshMode (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::GetRefreshMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182554b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"GetRefreshMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::Initialize)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x182555570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::Disable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1825547a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Transform*)>(&::WaveHarmonic::Crest::DepthProbe::UpdatePosition)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1825570a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.HashState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::by_ref<int32_t>)>(&::WaveHarmonic::Crest::DepthProbe::HashState)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x182554b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"HashState", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182550980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::OnMigrate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182555b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.SetUpCameraURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::SetUpCameraURP)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182557050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"SetUpCameraURP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_AdditionalJumpFloodRounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_AdditionalJumpFloodRounds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180bb89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_AdditionalJumpFloodRounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_AdditionalJumpFloodRounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(int32_t)>(&::WaveHarmonic::Crest::DepthProbe::set_AdditionalJumpFloodRounds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_AdditionalJumpFloodRounds", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_CaptureRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_CaptureRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_CaptureRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_CaptureRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::Vector2)>(&::WaveHarmonic::Crest::DepthProbe::set_CaptureRange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_CaptureRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_EnableBackFaceInclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_EnableBackFaceInclusion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_EnableBackFaceInclusion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_EnableBackFaceInclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_EnableBackFaceInclusion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_EnableBackFaceInclusion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_FillHolesCaptureHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_FillHolesCaptureHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_FillHolesCaptureHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_FillHolesCaptureHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(float_t)>(&::WaveHarmonic::Crest::DepthProbe::set_FillHolesCaptureHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_FillHolesCaptureHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_GenerateSignedDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_GenerateSignedDistanceField)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_GenerateSignedDistanceField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_GenerateSignedDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(bool)>(&::WaveHarmonic::Crest::DepthProbe::set_GenerateSignedDistanceField)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_GenerateSignedDistanceField", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Layers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Layers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Layers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::LayerMask)>(&::WaveHarmonic::Crest::DepthProbe::set_Layers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182557bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Layers", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Placement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Placement (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Placement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182554b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Placement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Placement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::Placement)>(&::WaveHarmonic::Crest::DepthProbe::set_Placement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Placement", {}, {::i2c::type_of<::WaveHarmonic::Crest::Placement>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_QualitySettingsOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::QualitySettingsOverride* (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_QualitySettingsOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_QualitySettingsOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_RefreshMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DepthProbeRefreshMode (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_RefreshMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182554b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_RefreshMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_RefreshMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::DepthProbeRefreshMode)>(&::WaveHarmonic::Crest::DepthProbe::set_RefreshMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_RefreshMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthProbeRefreshMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Resolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Resolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(int32_t)>(&::WaveHarmonic::Crest::DepthProbe::set_Resolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182557d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_SavedTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_SavedTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_SavedTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_SavedTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::UnityEngine::Texture2D*)>(&::WaveHarmonic::Crest::DepthProbe::set_SavedTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803117a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_SavedTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DepthProbeMode (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)(::WaveHarmonic::Crest::DepthProbeMode)>(&::WaveHarmonic::Crest::DepthProbe::set_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Type", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthProbeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthProbe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthProbe::*)()>(&::WaveHarmonic::Crest::DepthProbe::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182557460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::DepthProbeMode& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr ::WaveHarmonic::Crest::DepthProbeMode const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Type(::WaveHarmonic::Crest::DepthProbeMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type = value;
}
constexpr ::WaveHarmonic::Crest::Placement& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Placement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Placement;
}
constexpr ::WaveHarmonic::Crest::Placement const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Placement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Placement;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Placement(::WaveHarmonic::Crest::Placement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Placement = value;
}
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RefreshMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshMode;
}
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RefreshMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefreshMode;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__RefreshMode(::WaveHarmonic::Crest::DepthProbeRefreshMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RefreshMode = value;
}
constexpr ::UnityEngine::LayerMask& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Layers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers;
}
constexpr ::UnityEngine::LayerMask const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Layers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layers;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Layers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layers = value;
}
constexpr int32_t& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr int32_t const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution = value;
}
constexpr ::UnityEngine::Vector2& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__CaptureRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaptureRange;
}
constexpr ::UnityEngine::Vector2 const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__CaptureRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CaptureRange;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__CaptureRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CaptureRange = value;
}
constexpr float_t& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__FillHolesCaptureHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FillHolesCaptureHeight;
}
constexpr float_t const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__FillHolesCaptureHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FillHolesCaptureHeight;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__FillHolesCaptureHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FillHolesCaptureHeight = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__EnableBackFaceInclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableBackFaceInclusion;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__EnableBackFaceInclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableBackFaceInclusion;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__EnableBackFaceInclusion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableBackFaceInclusion = value;
}
constexpr ::WaveHarmonic::Crest::QualitySettingsOverride*& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__QualitySettingsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QualitySettingsOverride;
}
constexpr ::WaveHarmonic::Crest::QualitySettingsOverride* const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__QualitySettingsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QualitySettingsOverride;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__QualitySettingsOverride(::WaveHarmonic::Crest::QualitySettingsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QualitySettingsOverride = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__SavedTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SavedTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__SavedTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SavedTexture;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__SavedTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SavedTexture = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__GenerateSignedDistanceField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GenerateSignedDistanceField;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__GenerateSignedDistanceField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GenerateSignedDistanceField;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__GenerateSignedDistanceField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GenerateSignedDistanceField = value;
}
constexpr int32_t& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__AdditionalJumpFloodRounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalJumpFloodRounds;
}
constexpr int32_t const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__AdditionalJumpFloodRounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalJumpFloodRounds;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__AdditionalJumpFloodRounds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdditionalJumpFloodRounds = value;
}
constexpr ::WaveHarmonic::Crest::DepthProbe_DebugFields*& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr ::WaveHarmonic::Crest::DepthProbe_DebugFields* const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Debug;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Debug(::WaveHarmonic::Crest::DepthProbe_DebugFields*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Debug = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Camera;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Camera = value;
}
constexpr ::UnityEngine::Rect& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr ::UnityEngine::Rect const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rect;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rect = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RecalculateBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RecalculateBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__RecalculateBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecalculateBounds = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__CommandBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__CommandBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CommandBuffer;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__CommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CommandBuffer = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RealtimeTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RealtimeTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RealtimeTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RealtimeTexture;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__RealtimeTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RealtimeTexture = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__TargetTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__TargetTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetTexture;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__TargetTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetTexture = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Managed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Managed;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Managed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Managed;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Managed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Managed = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__ManagedExecution_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedExecution_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__ManagedExecution_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedExecution_k__BackingField;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__ManagedExecution_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ManagedExecution_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__ExternallyManaged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExternallyManaged;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__ExternallyManaged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExternallyManaged;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__ExternallyManaged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExternallyManaged = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__ExternallyManagedExecution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExternallyManagedExecution;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__ExternallyManagedExecution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExternallyManagedExecution;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__ExternallyManagedExecution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExternallyManagedExecution = value;
}
constexpr bool& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__OverridePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverridePosition;
}
constexpr bool const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__OverridePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverridePosition;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__OverridePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverridePosition = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position = value;
}
constexpr ::UnityEngine::Vector2& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale;
}
constexpr ::UnityEngine::Vector2 const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Scale;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Scale(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Scale = value;
}
constexpr ::WaveHarmonic::Crest::DepthProbe_Input*& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::WaveHarmonic::Crest::DepthProbe_Input* const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__Input(::WaveHarmonic::Crest::DepthProbe_Input*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__PreviousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousPosition;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__PreviousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousPosition;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__PreviousPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousPosition = value;
}
constexpr int32_t& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RenderedStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderedStateHash;
}
constexpr int32_t const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__RenderedStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderedStateHash;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__RenderedStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderedStateHash = value;
}
constexpr int32_t& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__CurrentStateHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentStateHash;
}
constexpr int32_t const& WaveHarmonic::Crest::DepthProbe::__cordl_internal_get__CurrentStateHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentStateHash;
}
constexpr void WaveHarmonic::Crest::DepthProbe::__cordl_internal_set__CurrentStateHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentStateHash = value;
}
inline void WaveHarmonic::Crest::DepthProbe::setStaticF_s_RenderingCamera(bool  value)  {
::cordl_internals::setStaticField<bool, "s_RenderingCamera", ::WaveHarmonic::Crest::DepthProbe*>(std::forward<bool>(value));
}
inline bool WaveHarmonic::Crest::DepthProbe::getStaticF_s_RenderingCamera()  {
return ::cordl_internals::getStaticField<bool, "s_RenderingCamera", ::WaveHarmonic::Crest::DepthProbe*>();
}
inline void WaveHarmonic::Crest::DepthProbe::setStaticF__OnBeforeRender_k__BackingField(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*, "<OnBeforeRender>k__BackingField", ::WaveHarmonic::Crest::DepthProbe*>(std::forward<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>(value));
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* WaveHarmonic::Crest::DepthProbe::getStaticF__OnBeforeRender_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*, "<OnBeforeRender>k__BackingField", ::WaveHarmonic::Crest::DepthProbe*>();
}
inline void WaveHarmonic::Crest::DepthProbe::setStaticF__OnAfterRender_k__BackingField(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*, "<OnAfterRender>k__BackingField", ::WaveHarmonic::Crest::DepthProbe*>(std::forward<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>(value));
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* WaveHarmonic::Crest::DepthProbe::getStaticF__OnAfterRender_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*, "<OnAfterRender>k__BackingField", ::WaveHarmonic::Crest::DepthProbe*>();
}
inline void WaveHarmonic::Crest::DepthProbe::setStaticF__OnBakeRequest_k__BackingField(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*, "<OnBakeRequest>k__BackingField", ::WaveHarmonic::Crest::DepthProbe*>(std::forward<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>(value));
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* WaveHarmonic::Crest::DepthProbe::getStaticF__OnBakeRequest_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*, "<OnBakeRequest>k__BackingField", ::WaveHarmonic::Crest::DepthProbe*>();
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::DepthProbe::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> WaveHarmonic::Crest::DepthProbe::get_Texture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Texture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::DepthProbe::get_RealtimeTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_RealtimeTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::DepthProbe::get_TargetTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_TargetTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_Managed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Managed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Managed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Managed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_ManagedExecution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_ManagedExecution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_ManagedExecution(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_ManagedExecution", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_ExternallyManaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_ExternallyManaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_ExternallyManaged(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_ExternallyManaged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_ExternallyManagedExecution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_ExternallyManagedExecution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_ExternallyManagedExecution(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_ExternallyManagedExecution", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_OverridePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OverridePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_OverridePosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OverridePosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::DepthProbe::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion WaveHarmonic::Crest::DepthProbe::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::DepthProbe::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Scale(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Scale", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* WaveHarmonic::Crest::DepthProbe::get_OnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OnBeforeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_OnBeforeRender(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OnBeforeRender", {}, {::i2c::type_of<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* WaveHarmonic::Crest::DepthProbe::get_OnAfterRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OnAfterRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_OnAfterRender(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OnAfterRender", {}, {::i2c::type_of<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>* WaveHarmonic::Crest::DepthProbe::get_OnBakeRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_OnBakeRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_OnBakeRequest(::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_OnBakeRequest", {}, {::i2c::type_of<::System::Action_1<::UnityW<::WaveHarmonic::Crest::DepthProbe>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void WaveHarmonic::Crest::DepthProbe::Bind(T  wrapper)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {"Bind", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline void WaveHarmonic::Crest::DepthProbe::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::DepthProbe::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::DepthProbe::get_OnLateUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::DepthProbe::OnBeforeBuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"OnBeforeBuildCommandBuffer", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, camera);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_Outdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Outdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthProbe::IsTextureOutdated(::UnityEngine::RenderTexture*  texture, bool  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"IsTextureOutdated", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, target);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::DepthProbe::get_FinalFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_FinalFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::MakeRT(::UnityEngine::RenderTexture*  texture, bool  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"MakeRT", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture, target);
}
inline bool WaveHarmonic::Crest::DepthProbe::InitObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"InitObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::Populate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"Populate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::ForcePopulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"ForcePopulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::RenderDepthIntoProbe(int32_t  kernel, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"RenderDepthIntoProbe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kernel, height);
}
inline void WaveHarmonic::Crest::DepthProbe::RenderSignedDistanceField(bool  inverted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"RenderSignedDistanceField", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inverted);
}
inline void WaveHarmonic::Crest::DepthProbe::ApplyJumpFlood(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::ComputeShader*  shader, int32_t  kernel, int32_t  jumpSize, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"ApplyJumpFlood", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, shader, kernel, jumpSize, source, target);
}
template<typename I>
inline void WaveHarmonic::Crest::DepthProbe::SetDirty(I  previous, I  current)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                    {"SetDirty", {::i2c::class_of<I>()}, {::i2c::type_of<I>(), ::i2c::type_of<I>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<I>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::DepthProbe::SetDirty(::UnityEngine::LayerMask  previous, ::UnityEngine::LayerMask  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::Placement WaveHarmonic::Crest::DepthProbe::GetPlacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"GetPlacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Placement>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DepthProbeRefreshMode WaveHarmonic::Crest::DepthProbe::GetRefreshMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"GetRefreshMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DepthProbeRefreshMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::UpdatePosition(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, target);
}
inline void WaveHarmonic::Crest::DepthProbe::HashState(::by_ref<int32_t>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"HashState", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline int32_t WaveHarmonic::Crest::DepthProbe::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::SetUpCameraURP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"SetUpCameraURP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::DepthProbe::get_AdditionalJumpFloodRounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_AdditionalJumpFloodRounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_AdditionalJumpFloodRounds(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_AdditionalJumpFloodRounds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::DepthProbe::get_CaptureRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_CaptureRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_CaptureRange(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_CaptureRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_EnableBackFaceInclusion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_EnableBackFaceInclusion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_EnableBackFaceInclusion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_EnableBackFaceInclusion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::DepthProbe::get_FillHolesCaptureHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_FillHolesCaptureHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_FillHolesCaptureHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_FillHolesCaptureHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthProbe::get_GenerateSignedDistanceField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_GenerateSignedDistanceField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_GenerateSignedDistanceField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_GenerateSignedDistanceField", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask WaveHarmonic::Crest::DepthProbe::get_Layers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Layers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Layers(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Layers", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::Placement WaveHarmonic::Crest::DepthProbe::get_Placement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Placement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Placement>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Placement(::WaveHarmonic::Crest::Placement  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Placement", {}, {::i2c::type_of<::WaveHarmonic::Crest::Placement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::QualitySettingsOverride* WaveHarmonic::Crest::DepthProbe::get_QualitySettingsOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_QualitySettingsOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::QualitySettingsOverride*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DepthProbeRefreshMode WaveHarmonic::Crest::DepthProbe::get_RefreshMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_RefreshMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DepthProbeRefreshMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_RefreshMode(::WaveHarmonic::Crest::DepthProbeRefreshMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_RefreshMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthProbeRefreshMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::DepthProbe::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Resolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Resolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> WaveHarmonic::Crest::DepthProbe::get_SavedTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_SavedTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_SavedTexture(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_SavedTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::DepthProbeMode WaveHarmonic::Crest::DepthProbe::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DepthProbeMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthProbe::set_Type(::WaveHarmonic::Crest::DepthProbeMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {"set_Type", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthProbeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::DepthProbe::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthProbe*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::DepthProbe* WaveHarmonic::Crest::DepthProbe::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthProbe*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthProbe::DepthProbe()   {
}
