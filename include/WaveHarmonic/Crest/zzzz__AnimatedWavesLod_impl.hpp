#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AnimatedWavesLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionSource_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSampling_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__AnimatedWavesLod_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__AnimatedWavesLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__BakedWaveData_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionSource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterResources_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSampling_def.hpp"
inline void WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::setStaticF_s_WaveBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_WaveBuffer", ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::getStaticF_s_WaveBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "s_WaveBuffer", ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::setStaticF_s_DynamicWavesTarget(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DynamicWavesTarget", ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::getStaticF_s_DynamicWavesTarget()  {
return ::cordl_internals::getStaticField<int32_t, "s_DynamicWavesTarget", ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::setStaticF_s_AttenuationInShallows(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_AttenuationInShallows", ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::getStaticF_s_AttenuationInShallows()  {
return ::cordl_internals::getStaticField<int32_t, "s_AttenuationInShallows", ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AnimatedWavesLod_ShaderIDs::AnimatedWavesLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t, int32_t)>(&::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182563d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, water, slice, resolution);
}
// Ctor Parameters [CppParam { name: "_Minimum", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Maximum", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TransitionThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ViewerAltitudeLevelAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Slice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Slices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_HighQualityCombine", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter::AnimatedWavesLod_WavelengthFilter(float_t  _Minimum, float_t  _Maximum, float_t  _TransitionThreshold, float_t  _ViewerAltitudeLevelAlpha, int32_t  _Slice, int32_t  _Slices, bool  _HighQualityCombine) noexcept  {
this->_Minimum = _Minimum;
this->_Maximum = _Maximum;
this->_TransitionThreshold = _TransitionThreshold;
this->_ViewerAltitudeLevelAlpha = _ViewerAltitudeLevelAlpha;
this->_Slice = _Slice;
this->_Slices = _Slices;
this->_HighQualityCombine = _HighQualityCombine;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter::AnimatedWavesLod_WavelengthFilter()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182552670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182552680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182550900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182263110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_BufferCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182552640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825526e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_PreserveWaveQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_PreserveWaveQuality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182552690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_PreserveWaveQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825525a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::Initialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182552110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::Destroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182551e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.SetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(bool)>(&::WaveHarmonic::Crest::AnimatedWavesLod::SetGlobals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825523f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.BuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::AnimatedWavesLod::BuildCommandBuffer)> {
  constexpr static std::size_t size = 0x1310;
  constexpr static std::size_t addrs = 0x1825509f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.AfterExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::AfterExecute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825509d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.CreateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::ICollisionProvider* (::WaveHarmonic::Crest::AnimatedWavesLod::*)(bool)>(&::WaveHarmonic::Crest::AnimatedWavesLod::CreateProvider)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x182551d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.FilterByWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter, float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLod::FilterByWavelength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182552040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"FilterByWavelength", {}, {::i2c::type_of<::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.FilterByWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::AnimatedWavesLod::FilterByWavelength)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182551f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"FilterByWavelength", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182550940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182552300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.LoadCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::AnimatedWavesLod::LoadCameraData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182552210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.StoreCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::AnimatedWavesLod::StoreCameraData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182552490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.RemoveCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::AnimatedWavesLod::RemoveCameraData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182552350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.GetWaveResolutionMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::GetWaveResolutionMultiplier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825520b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"GetWaveResolutionMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_AttenuationInShallows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_AttenuationInShallows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804979a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_AttenuationInShallows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.set_AttenuationInShallows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLod::set_AttenuationInShallows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_AttenuationInShallows", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_CollisionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::CollisionLayers (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_CollisionLayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_CollisionLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.set_CollisionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::WaveHarmonic::Crest::CollisionLayers)>(&::WaveHarmonic::Crest::AnimatedWavesLod::set_CollisionLayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817eed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_CollisionLayers", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_CollisionSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::CollisionSource (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_CollisionSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_CollisionSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.set_CollisionSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::WaveHarmonic::Crest::CollisionSource)>(&::WaveHarmonic::Crest::AnimatedWavesLod::set_CollisionSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180cbfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_CollisionSource", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_ShallowsMaximumDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_ShallowsMaximumDepth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_ShallowsMaximumDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.set_ShallowsMaximumDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLod::set_ShallowsMaximumDepth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_ShallowsMaximumDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_WaveResolutionMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_WaveResolutionMultiplier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825520b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_WaveResolutionMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.set_WaveResolutionMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(float_t)>(&::WaveHarmonic::Crest::AnimatedWavesLod::set_WaveResolutionMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182552720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_WaveResolutionMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.get_WaveSampling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::WaveSampling (::WaveHarmonic::Crest::AnimatedWavesLod::*)()>(&::WaveHarmonic::Crest::AnimatedWavesLod::get_WaveSampling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813abaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_WaveSampling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AnimatedWavesLod.set_WaveSampling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AnimatedWavesLod::*)(::WaveHarmonic::Crest::WaveSampling)>(&::WaveHarmonic::Crest::AnimatedWavesLod::set_WaveSampling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_WaveSampling", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaveSampling>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::CollisionLayers& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__CollisionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollisionLayers;
}
constexpr ::WaveHarmonic::Crest::CollisionLayers const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__CollisionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollisionLayers;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__CollisionLayers(::WaveHarmonic::Crest::CollisionLayers  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CollisionLayers = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::BakedWaveData>& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__BakedWaveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BakedWaveData;
}
constexpr ::UnityW<::WaveHarmonic::Crest::BakedWaveData> const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__BakedWaveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BakedWaveData;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__BakedWaveData(::UnityW<::WaveHarmonic::Crest::BakedWaveData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BakedWaveData = value;
}
constexpr ::WaveHarmonic::Crest::WaveSampling& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__WaveSampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveSampling;
}
constexpr ::WaveHarmonic::Crest::WaveSampling const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__WaveSampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveSampling;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__WaveSampling(::WaveHarmonic::Crest::WaveSampling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveSampling = value;
}
constexpr float_t& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__WaveResolutionMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveResolutionMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__WaveResolutionMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveResolutionMultiplier;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__WaveResolutionMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveResolutionMultiplier = value;
}
constexpr float_t& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__AttenuationInShallows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttenuationInShallows;
}
constexpr float_t const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__AttenuationInShallows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AttenuationInShallows;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__AttenuationInShallows(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AttenuationInShallows = value;
}
constexpr float_t& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__ShallowsMaximumDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShallowsMaximumDepth;
}
constexpr float_t const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__ShallowsMaximumDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShallowsMaximumDepth;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__ShallowsMaximumDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShallowsMaximumDepth = value;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__CombineShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineShader;
}
constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute* const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__CombineShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CombineShader;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__CombineShader(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CombineShader = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__PersistentDataTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersistentDataTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__PersistentDataTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersistentDataTexture;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__PersistentDataTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PersistentDataTexture = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>*& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__AdditionalCameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalCameraData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>* const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__AdditionalCameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalCameraData;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__AdditionalCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdditionalCameraData = value;
}
constexpr ::WaveHarmonic::Crest::CollisionSource& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__CollisionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollisionSource;
}
constexpr ::WaveHarmonic::Crest::CollisionSource const& WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_get__CollisionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollisionSource;
}
constexpr void WaveHarmonic::Crest::AnimatedWavesLod::__cordl_internal_set__CollisionSource(::WaveHarmonic::Crest::CollisionSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CollisionSource = value;
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::AnimatedWavesLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AnimatedWavesLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::AnimatedWavesLod*>();
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::setStaticF_s_Combine(bool  value)  {
::cordl_internals::setStaticField<bool, "s_Combine", ::WaveHarmonic::Crest::AnimatedWavesLod*>(std::forward<bool>(value));
}
inline bool WaveHarmonic::Crest::AnimatedWavesLod::getStaticF_s_Combine()  {
return ::cordl_internals::getStaticField<bool, "s_Combine", ::WaveHarmonic::Crest::AnimatedWavesLod*>();
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::AnimatedWavesLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::AnimatedWavesLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::AnimatedWavesLod*>();
}
inline ::StringW WaveHarmonic::Crest::AnimatedWavesLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::AnimatedWavesLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AnimatedWavesLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AnimatedWavesLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::AnimatedWavesLod::get_BufferCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::AnimatedWavesLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::AnimatedWavesLod::get_PreserveWaveQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_PreserveWaveQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::SetGlobals(bool  enable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, buffer);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::AfterExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::AnimatedWavesLod::CreateProvider(bool  onEnable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::ICollisionProvider*>(this, ___internal_method, onEnable);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLod::FilterByWavelength(::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter  filter, float_t  wavelength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"FilterByWavelength", {}, {::i2c::type_of<::WaveHarmonic::Crest::AnimatedWavesLod_WavelengthFilter>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, filter, wavelength);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLod::FilterByWavelength(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice, float_t  wavelength, int32_t  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"FilterByWavelength", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, water, slice, wavelength, resolution);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::AnimatedWavesLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::LoadCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::StoreCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::RemoveCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLod::GetWaveResolutionMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"GetWaveResolutionMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLod::get_AttenuationInShallows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_AttenuationInShallows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::set_AttenuationInShallows(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_AttenuationInShallows", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::CollisionLayers WaveHarmonic::Crest::AnimatedWavesLod::get_CollisionLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_CollisionLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::CollisionLayers>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::set_CollisionLayers(::WaveHarmonic::Crest::CollisionLayers  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_CollisionLayers", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::CollisionSource WaveHarmonic::Crest::AnimatedWavesLod::get_CollisionSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_CollisionSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::CollisionSource>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::set_CollisionSource(::WaveHarmonic::Crest::CollisionSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_CollisionSource", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLod::get_ShallowsMaximumDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_ShallowsMaximumDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::set_ShallowsMaximumDepth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_ShallowsMaximumDepth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::AnimatedWavesLod::get_WaveResolutionMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_WaveResolutionMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::set_WaveResolutionMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_WaveResolutionMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::WaveSampling WaveHarmonic::Crest::AnimatedWavesLod::get_WaveSampling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"get_WaveSampling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::WaveSampling>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AnimatedWavesLod::set_WaveSampling(::WaveHarmonic::Crest::WaveSampling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AnimatedWavesLod*>(),
                        {"set_WaveSampling", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaveSampling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::AnimatedWavesLod* WaveHarmonic::Crest::AnimatedWavesLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AnimatedWavesLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AnimatedWavesLod::AnimatedWavesLod()   {
}
