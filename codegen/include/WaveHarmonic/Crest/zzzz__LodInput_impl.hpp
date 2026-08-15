#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputBlend_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportWaveDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsHeight_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputBlend_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputData_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::LodInput_ShaderIDs::setStaticF_s_Weight(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_Weight", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::LodInput_ShaderIDs::getStaticF_s_Weight()  {
return ::cordl_internals::getStaticField<int32_t, "s_Weight", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::LodInput_ShaderIDs::setStaticF_s_DisplacementAtInputPosition(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DisplacementAtInputPosition", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::LodInput_ShaderIDs::getStaticF_s_DisplacementAtInputPosition()  {
return ::cordl_internals::getStaticField<int32_t, "s_DisplacementAtInputPosition", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::LodInput_ShaderIDs::setStaticF_s_BlendSource(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BlendSource", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::LodInput_ShaderIDs::getStaticF_s_BlendSource()  {
return ::cordl_internals::getStaticField<int32_t, "s_BlendSource", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::LodInput_ShaderIDs::setStaticF_s_BlendTarget(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BlendTarget", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::LodInput_ShaderIDs::getStaticF_s_BlendTarget()  {
return ::cordl_internals::getStaticField<int32_t, "s_BlendTarget", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::LodInput_ShaderIDs::setStaticF_s_BlendOperation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_BlendOperation", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::LodInput_ShaderIDs::getStaticF_s_BlendOperation()  {
return ::cordl_internals::getStaticField<int32_t, "s_BlendOperation", ::WaveHarmonic::Crest::LodInput_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodInput_ShaderIDs::LodInput_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput_Input::*)(::WaveHarmonic::Crest::LodInput*)>(&::WaveHarmonic::Crest::LodInput_Input::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_Enabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182559c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_IsCompute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182559c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_Queue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182559cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_Pass)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182559c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_Rect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182559ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_HeightReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IReportsHeight* (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_HeightReporter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1817fe360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_HeightReporter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_DisplacementReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IReportsDisplacement* (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_DisplacementReporter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182559ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_DisplacementReporter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.get_WaveDisplacementReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IReportWaveDisplacement* (::WaveHarmonic::Crest::LodInput_Input::*)()>(&::WaveHarmonic::Crest::LodInput_Input::get_WaveDisplacementReporter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182559ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_WaveDisplacementReporter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::LodInput_Input::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::LodInput_Input::Filter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182559b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput_Input.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput_Input::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::LodInput_Input::Draw)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182559af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::LodInput>& WaveHarmonic::Crest::LodInput_Input::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::LodInput> const& WaveHarmonic::Crest::LodInput_Input::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::LodInput_Input::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::LodInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::LodInput_Input::_ctor(::WaveHarmonic::Crest::LodInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::LodInput_Input::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LodInput_Input::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::LodInput_Input::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::LodInput_Input::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::LodInput_Input::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::LodInput_Input::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IReportsHeight* WaveHarmonic::Crest::LodInput_Input::get_HeightReporter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_HeightReporter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IReportsHeight*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IReportsDisplacement* WaveHarmonic::Crest::LodInput_Input::get_DisplacementReporter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_DisplacementReporter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IReportsDisplacement*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IReportWaveDisplacement* WaveHarmonic::Crest::LodInput_Input::get_WaveDisplacementReporter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"get_WaveDisplacementReporter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IReportWaveDisplacement*>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::LodInput_Input::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::LodInput_Input::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput_Input*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slice);
}
inline ::WaveHarmonic::Crest::LodInput_Input* WaveHarmonic::Crest::LodInput_Input::New_ctor(::WaveHarmonic::Crest::LodInput*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LodInput_Input*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::LodInput_Input::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::LodInput_Input::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodInput_Input::LodInput_Input()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_GizmoColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_DefaultMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Inputs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_ForceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_ForceRenderingOff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_ForceRenderingOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_ForceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(bool)>(&::WaveHarmonic::Crest::LodInput::set_ForceRenderingOff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_ForceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputData* (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(::WaveHarmonic::Crest::LodInputData*)>(&::WaveHarmonic::Crest::LodInput::set_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Data", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInputData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_IsCompute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Rect)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18255aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Enabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_FollowHorizontalMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_FollowHorizontalMotion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255adf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255aa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18255aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255aa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255ae80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::LodInput::OnUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18255ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_OnLateUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_OnLateUpdateMethod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255ae30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::LodInput::OnLateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18255ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::Attach)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18255a7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.Detach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::Detach)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::LodInput::Draw)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18255a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::LodInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::LodInput::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.SetBlendFromPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::WaveHarmonic::Crest::LodInputBlend)>(&::WaveHarmonic::Crest::LodInput::SetBlendFromPreset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18255ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"SetBlendFromPreset", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::WaveHarmonic::Crest::LodInputBlend>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.SetQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(int32_t, int32_t)>(&::WaveHarmonic::Crest::LodInput::SetQueue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"SetQueue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.InferBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::InferBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c9c1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Blend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputBlend (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Blend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Blend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_Blend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(::WaveHarmonic::Crest::LodInputBlend)>(&::WaveHarmonic::Crest::LodInput::set_Blend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Blend", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInputBlend>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_FeatherWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_FeatherWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_FeatherWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_FeatherWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(float_t)>(&::WaveHarmonic::Crest::LodInput::set_FeatherWidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_FeatherWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_FollowHorizontalWaveMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_FollowHorizontalWaveMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182152290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_FollowHorizontalWaveMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_FollowHorizontalWaveMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(bool)>(&::WaveHarmonic::Crest::LodInput::set_FollowHorizontalWaveMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1821522c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_FollowHorizontalWaveMotion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Mode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(int32_t)>(&::WaveHarmonic::Crest::LodInput::set_Queue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Queue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput.set_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)(float_t)>(&::WaveHarmonic::Crest::LodInput::set_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodInput::*)()>(&::WaveHarmonic::Crest::LodInput::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18254fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::LodInputMode& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr ::WaveHarmonic::Crest::LodInputMode const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mode;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Mode(::WaveHarmonic::Crest::LodInputMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mode = value;
}
constexpr float_t& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
constexpr int32_t& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queue;
}
constexpr int32_t const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queue;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Queue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Queue = value;
}
constexpr ::WaveHarmonic::Crest::LodInputBlend& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Blend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blend;
}
constexpr ::WaveHarmonic::Crest::LodInputBlend const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Blend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blend;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Blend(::WaveHarmonic::Crest::LodInputBlend  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Blend = value;
}
constexpr float_t& WaveHarmonic::Crest::LodInput::__cordl_internal_get__FeatherWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FeatherWidth;
}
constexpr float_t const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__FeatherWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FeatherWidth;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__FeatherWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FeatherWidth = value;
}
constexpr bool& WaveHarmonic::Crest::LodInput::__cordl_internal_get__FollowHorizontalWaveMotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowHorizontalWaveMotion;
}
constexpr bool const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__FollowHorizontalWaveMotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowHorizontalWaveMotion;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__FollowHorizontalWaveMotion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FollowHorizontalWaveMotion = value;
}
constexpr ::WaveHarmonic::Crest::LodInputData*& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::WaveHarmonic::Crest::LodInputData* const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Data(::WaveHarmonic::Crest::LodInputData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
constexpr bool& WaveHarmonic::Crest::LodInput::__cordl_internal_get__DrawBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawBounds;
}
constexpr bool const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__DrawBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawBounds;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__DrawBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawBounds = value;
}
constexpr bool& WaveHarmonic::Crest::LodInput::__cordl_internal_get__ForceRenderingOff_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceRenderingOff_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__ForceRenderingOff_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceRenderingOff_k__BackingField;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__ForceRenderingOff_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceRenderingOff_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::LodInput::__cordl_internal_get__SampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__SampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelper = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Displacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Displacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Displacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Displacement = value;
}
constexpr bool& WaveHarmonic::Crest::LodInput::__cordl_internal_get__RecalculateBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr bool const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__RecalculateBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RecalculateBounds;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__RecalculateBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RecalculateBounds = value;
}
constexpr ::WaveHarmonic::Crest::LodInput_Input*& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::WaveHarmonic::Crest::LodInput_Input* const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__Input(::WaveHarmonic::Crest::LodInput_Input*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
constexpr ::WaveHarmonic::Crest::IReportsHeight*& WaveHarmonic::Crest::LodInput::__cordl_internal_get__HeightReporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightReporter;
}
constexpr ::WaveHarmonic::Crest::IReportsHeight* const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__HeightReporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightReporter;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__HeightReporter(::WaveHarmonic::Crest::IReportsHeight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HeightReporter = value;
}
constexpr ::WaveHarmonic::Crest::IReportsDisplacement*& WaveHarmonic::Crest::LodInput::__cordl_internal_get__DisplacementReporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplacementReporter;
}
constexpr ::WaveHarmonic::Crest::IReportsDisplacement* const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__DisplacementReporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisplacementReporter;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__DisplacementReporter(::WaveHarmonic::Crest::IReportsDisplacement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisplacementReporter = value;
}
constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement*& WaveHarmonic::Crest::LodInput::__cordl_internal_get__WaveDisplacementReporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveDisplacementReporter;
}
constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement* const& WaveHarmonic::Crest::LodInput::__cordl_internal_get__WaveDisplacementReporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveDisplacementReporter;
}
constexpr void WaveHarmonic::Crest::LodInput::__cordl_internal_set__WaveDisplacementReporter(::WaveHarmonic::Crest::IReportWaveDisplacement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveDisplacementReporter = value;
}
inline ::UnityEngine::Color WaveHarmonic::Crest::LodInput::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::LodInput::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::LodInput::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LodInput::get_ForceRenderingOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_ForceRenderingOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_ForceRenderingOff(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_ForceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::LodInputData* WaveHarmonic::Crest::LodInput::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputData*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_Data(::WaveHarmonic::Crest::LodInputData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Data", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInputData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T WaveHarmonic::Crest::LodInput::GetData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                    {"GetData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LodInput::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::LodInput::get_Pass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::LodInput::get_Rect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LodInput::get_Enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LodInput::get_FollowHorizontalMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::LodInput::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::LodInput::get_OnLateUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::LodInput::Attach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::Detach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline float_t WaveHarmonic::Crest::LodInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::LodInput::SetBlendFromPreset(::UnityEngine::Material*  material, ::WaveHarmonic::Crest::LodInputBlend  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"SetBlendFromPreset", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::WaveHarmonic::Crest::LodInputBlend>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, preset);
}
inline void WaveHarmonic::Crest::LodInput::SetQueue(int32_t  previous, int32_t  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"SetQueue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::LodInput::InferBlend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LodInputBlend WaveHarmonic::Crest::LodInput::get_Blend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Blend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputBlend>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_Blend(::WaveHarmonic::Crest::LodInputBlend  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Blend", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodInputBlend>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::LodInput::get_FeatherWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_FeatherWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_FeatherWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_FeatherWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::LodInput::get_FollowHorizontalWaveMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_FollowHorizontalWaveMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_FollowHorizontalWaveMotion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_FollowHorizontalWaveMotion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::LodInput::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::LodInput::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_Queue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Queue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::LodInput::get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LodInput::set_Weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::LodInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LodInput* WaveHarmonic::Crest::LodInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LodInput*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodInput::LodInput()   {
}
