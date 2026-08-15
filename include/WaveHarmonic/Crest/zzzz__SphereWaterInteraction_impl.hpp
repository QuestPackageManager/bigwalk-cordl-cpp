#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SphereWaterInteraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SphereWaterInteraction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleFlowHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SphereWaterInteraction_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::setStaticF_s_Velocity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Velocity", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::getStaticF_s_Velocity()  {
return ::cordl_internals::getStaticField<int32_t, "s_Velocity", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::setStaticF_s_Weight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Weight", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::getStaticF_s_Weight()  {
return ::cordl_internals::getStaticField<int32_t, "s_Weight", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::setStaticF_s_Radius(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Radius", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::getStaticF_s_Radius()  {
return ::cordl_internals::getStaticField<int32_t, "s_Radius", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::setStaticF_s_InnerSphereOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InnerSphereOffset", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::getStaticF_s_InnerSphereOffset()  {
return ::cordl_internals::getStaticField<int32_t, "s_InnerSphereOffset", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::setStaticF_s_InnerSphereMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_InnerSphereMultiplier", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::getStaticF_s_InnerSphereMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "s_InnerSphereMultiplier", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::setStaticF_s_LargeWaveMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LargeWaveMultiplier", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::getStaticF_s_LargeWaveMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "s_LargeWaveMultiplier", ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs::SphereWaterInteraction_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)(::WaveHarmonic::Crest::SphereWaterInteraction*)>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::SphereWaterInteraction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Enabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182575a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Rect)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182575aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction_Input.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction_Input::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction_Input::Draw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182575a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction>& WaveHarmonic::Crest::SphereWaterInteraction_Input::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction> const& WaveHarmonic::Crest::SphereWaterInteraction_Input::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction_Input::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_Input::_ctor(::WaveHarmonic::Crest::SphereWaterInteraction*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::SphereWaterInteraction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::SphereWaterInteraction_Input::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::SphereWaterInteraction_Input::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction_Input::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction_Input::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slice);
}
inline ::WaveHarmonic::Crest::SphereWaterInteraction_Input* WaveHarmonic::Crest::SphereWaterInteraction_Input::New_ctor(::WaveHarmonic::Crest::SphereWaterInteraction*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SphereWaterInteraction_Input*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::SphereWaterInteraction_Input::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::SphereWaterInteraction_Input::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SphereWaterInteraction_Input::SphereWaterInteraction_Input()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_ComputeShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_ComputeShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18257fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_ComputeShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_Rect)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18257fc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18257fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::SphereWaterInteraction::OnUpdate)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18257f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.LateUpdateComputeVel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::SphereWaterInteraction::LateUpdateComputeVel)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18257f270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"LateUpdateComputeVel", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.LateUpdateSphereWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::SphereWaterInteraction::LateUpdateSphereWeight)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"LateUpdateSphereWeight", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::Initialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18257f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::Draw)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x18257ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_BoostLargeWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_BoostLargeWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180407540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_BoostLargeWaves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_BoostLargeWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(bool)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_BoostLargeWaves)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18257fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_BoostLargeWaves", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_CompensateForWaveMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_CompensateForWaveMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_CompensateForWaveMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_CompensateForWaveMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_CompensateForWaveMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_CompensateForWaveMotion", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_InnerSphereMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_InnerSphereMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_InnerSphereMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_InnerSphereMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_InnerSphereMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_InnerSphereMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_InnerSphereOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_InnerSphereOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_InnerSphereOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_InnerSphereOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_InnerSphereOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_InnerSphereOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_MaximumSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_MaximumSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_MaximumSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_MaximumSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_MaximumSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18230ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_MaximumSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_Radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_Radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_TeleportSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_TeleportSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_TeleportSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_TeleportSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_TeleportSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_TeleportSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_VelocityOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_VelocityOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_VelocityOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_VelocityOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_VelocityOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_VelocityOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_WarnOnSpeedClamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_WarnOnSpeedClamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ece20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_WarnOnSpeedClamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_WarnOnSpeedClamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(bool)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_WarnOnSpeedClamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_WarnOnSpeedClamp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_WarnOnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_WarnOnTeleport)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_WarnOnTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_WarnOnTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(bool)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_WarnOnTeleport)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_WarnOnTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.get_WeightVerticalMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::get_WeightVerticalMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_WeightVerticalMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction.set_WeightVerticalMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)(float_t)>(&::WaveHarmonic::Crest::SphereWaterInteraction::set_WeightVerticalMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_WeightVerticalMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SphereWaterInteraction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SphereWaterInteraction::*)()>(&::WaveHarmonic::Crest::SphereWaterInteraction::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18257fa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Radius;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Radius;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Radius = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WeightVerticalMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeightVerticalMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WeightVerticalMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeightVerticalMultiplier;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__WeightVerticalMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WeightVerticalMultiplier = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__InnerSphereMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerSphereMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__InnerSphereMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerSphereMultiplier;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__InnerSphereMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InnerSphereMultiplier = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__InnerSphereOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerSphereOffset;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__InnerSphereOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InnerSphereOffset;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__InnerSphereOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InnerSphereOffset = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__VelocityOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityOffset;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__VelocityOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityOffset;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__VelocityOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VelocityOffset = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__CompensateForWaveMotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompensateForWaveMotion;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__CompensateForWaveMotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompensateForWaveMotion;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__CompensateForWaveMotion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompensateForWaveMotion = value;
}
constexpr bool& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__BoostLargeWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoostLargeWaves;
}
constexpr bool const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__BoostLargeWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BoostLargeWaves;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__BoostLargeWaves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BoostLargeWaves = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__TeleportSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportSpeed;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__TeleportSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TeleportSpeed;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__TeleportSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TeleportSpeed = value;
}
constexpr bool& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WarnOnTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WarnOnTeleport;
}
constexpr bool const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WarnOnTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WarnOnTeleport;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__WarnOnTeleport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WarnOnTeleport = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__MaximumSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumSpeed;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__MaximumSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumSpeed;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__MaximumSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumSpeed = value;
}
constexpr bool& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WarnOnSpeedClamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WarnOnSpeedClamp;
}
constexpr bool const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WarnOnSpeedClamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WarnOnSpeedClamp;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__WarnOnSpeedClamp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WarnOnSpeedClamp = value;
}
constexpr bool& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__DebugSubsteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugSubsteps;
}
constexpr bool const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__DebugSubsteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugSubsteps;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__DebugSubsteps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DebugSubsteps = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Velocity;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Velocity;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__Velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Velocity = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__VelocityClamped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityClamped;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__VelocityClamped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VelocityClamped;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__VelocityClamped(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VelocityClamped = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__PreviousPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousPosition;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__PreviousPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousPosition;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__PreviousPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousPosition = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__RelativeVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RelativeVelocity;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__RelativeVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RelativeVelocity;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__RelativeVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RelativeVelocity = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Displacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Displacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__Displacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Displacement = value;
}
constexpr float_t& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WeightThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeightThisFrame;
}
constexpr float_t const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__WeightThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WeightThisFrame;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__WeightThisFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WeightThisFrame = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__SampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__SampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelper = value;
}
constexpr ::WaveHarmonic::Crest::SampleFlowHelper*& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__SampleFlowHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleFlowHelper;
}
constexpr ::WaveHarmonic::Crest::SampleFlowHelper* const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__SampleFlowHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleFlowHelper;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__SampleFlowHelper(::WaveHarmonic::Crest::SampleFlowHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleFlowHelper = value;
}
constexpr ::WaveHarmonic::Crest::SphereWaterInteraction_Input*& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::WaveHarmonic::Crest::SphereWaterInteraction_Input* const& WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::SphereWaterInteraction::__cordl_internal_set__Input(::WaveHarmonic::Crest::SphereWaterInteraction_Input*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::SphereWaterInteraction::get_ComputeShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_ComputeShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::SphereWaterInteraction::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::SphereWaterInteraction::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::LateUpdateComputeVel(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"LateUpdateComputeVel", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::LateUpdateSphereWeight(float_t  waterHeight, ::by_ref<float_t>  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"LateUpdateSphereWeight", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waterHeight, weight);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slices);
}
inline bool WaveHarmonic::Crest::SphereWaterInteraction::get_BoostLargeWaves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_BoostLargeWaves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_BoostLargeWaves(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_BoostLargeWaves", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_CompensateForWaveMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_CompensateForWaveMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_CompensateForWaveMotion(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_CompensateForWaveMotion", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_InnerSphereMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_InnerSphereMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_InnerSphereMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_InnerSphereMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_InnerSphereOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_InnerSphereOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_InnerSphereOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_InnerSphereOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_MaximumSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_MaximumSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_MaximumSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_MaximumSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_TeleportSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_TeleportSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_TeleportSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_TeleportSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_VelocityOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_VelocityOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_VelocityOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_VelocityOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SphereWaterInteraction::get_WarnOnSpeedClamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_WarnOnSpeedClamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_WarnOnSpeedClamp(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_WarnOnSpeedClamp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::SphereWaterInteraction::get_WarnOnTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_WarnOnTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_WarnOnTeleport(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_WarnOnTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_Weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::SphereWaterInteraction::get_WeightVerticalMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"get_WeightVerticalMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::set_WeightVerticalMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {"set_WeightVerticalMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::SphereWaterInteraction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SphereWaterInteraction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SphereWaterInteraction* WaveHarmonic::Crest::SphereWaterInteraction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SphereWaterInteraction*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SphereWaterInteraction::SphereWaterInteraction()   {
}
