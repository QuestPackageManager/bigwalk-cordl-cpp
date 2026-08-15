#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/PersistentLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PersistentLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperCompute_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::PersistentLod_ShaderIDs::setStaticF_s_SimDeltaTime(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SimDeltaTime", ::WaveHarmonic::Crest::PersistentLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::PersistentLod_ShaderIDs::getStaticF_s_SimDeltaTime()  {
return ::cordl_internals::getStaticField<int32_t, "s_SimDeltaTime", ::WaveHarmonic::Crest::PersistentLod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::PersistentLod_ShaderIDs::setStaticF_s_TemporaryPersistentTarget(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_TemporaryPersistentTarget", ::WaveHarmonic::Crest::PersistentLod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::PersistentLod_ShaderIDs::getStaticF_s_TemporaryPersistentTarget()  {
return ::cordl_internals::getStaticField<int32_t, "s_TemporaryPersistentTarget", ::WaveHarmonic::Crest::PersistentLod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PersistentLod_ShaderIDs::PersistentLod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::*)()>(&::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::__cordl_internal_get__PersistentData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersistentData;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::__cordl_internal_get__PersistentData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersistentData;
}
constexpr void WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::__cordl_internal_set__PersistentData(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PersistentData = value;
}
constexpr float_t& WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::__cordl_internal_get__TimeToSimulate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeToSimulate;
}
constexpr float_t const& WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::__cordl_internal_get__TimeToSimulate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeToSimulate;
}
constexpr void WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::__cordl_internal_set__TimeToSimulate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeToSimulate = value;
}
inline void WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData* WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData::PersistentLod_AdditionalCameraData()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_BufferCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_LastUpdateSubstepCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_LastUpdateSubstepCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"get_LastUpdateSubstepCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.set_LastUpdateSubstepCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(int32_t)>(&::WaveHarmonic::Crest::PersistentLod::set_LastUpdateSubstepCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"set_LastUpdateSubstepCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_Kernel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_Kernel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_SkipFlipBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_SkipFlipBuffers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_SimulationShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_SimulationShader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::Initialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1825794f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::Allocate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182578b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::Destroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1825793e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.BuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::PersistentLod::BuildCommandBuffer)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x182578c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.SetAdditionalSimulationParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(::WaveHarmonic::Crest::PropertyWrapperCompute)>(&::WaveHarmonic::Crest::PersistentLod::SetAdditionalSimulationParameters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.ReAllocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::ReAllocate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1825797a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.LoadCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::PersistentLod::LoadCameraData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825796a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.StoreCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::PersistentLod::StoreCameraData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182579ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.RemoveCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::PersistentLod::RemoveCameraData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182579a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.get_SimulationFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::get_SimulationFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"get_SimulationFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod.set_SimulationFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)(int32_t)>(&::WaveHarmonic::Crest::PersistentLod::set_SimulationFrequency)> {
  constexpr static std::size_t size = 0x2630;
  constexpr static std::size_t addrs = 0x180b9feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"set_SimulationFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::PersistentLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::PersistentLod::*)()>(&::WaveHarmonic::Crest::PersistentLod::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182579b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__SimulationFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationFrequency;
}
constexpr int32_t const& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__SimulationFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SimulationFrequency;
}
constexpr void WaveHarmonic::Crest::PersistentLod::__cordl_internal_set__SimulationFrequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SimulationFrequency = value;
}
constexpr bool& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__NeedsPrewarmingThisStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeedsPrewarmingThisStep;
}
constexpr bool const& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__NeedsPrewarmingThisStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeedsPrewarmingThisStep;
}
constexpr void WaveHarmonic::Crest::PersistentLod::__cordl_internal_set__NeedsPrewarmingThisStep(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NeedsPrewarmingThisStep = value;
}
constexpr float_t& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__TimeToSimulate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeToSimulate;
}
constexpr float_t const& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__TimeToSimulate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeToSimulate;
}
constexpr void WaveHarmonic::Crest::PersistentLod::__cordl_internal_set__TimeToSimulate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeToSimulate = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__PersistentDataTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersistentDataTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__PersistentDataTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PersistentDataTexture;
}
constexpr void WaveHarmonic::Crest::PersistentLod::__cordl_internal_set__PersistentDataTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PersistentDataTexture = value;
}
constexpr int32_t& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__LastUpdateSubstepCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdateSubstepCount_k__BackingField;
}
constexpr int32_t const& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__LastUpdateSubstepCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastUpdateSubstepCount_k__BackingField;
}
constexpr void WaveHarmonic::Crest::PersistentLod::__cordl_internal_set__LastUpdateSubstepCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastUpdateSubstepCount_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>*& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__AdditionalCameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalCameraData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>* const& WaveHarmonic::Crest::PersistentLod::__cordl_internal_get__AdditionalCameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalCameraData;
}
constexpr void WaveHarmonic::Crest::PersistentLod::__cordl_internal_set__AdditionalCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::PersistentLod_AdditionalCameraData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdditionalCameraData = value;
}
inline bool WaveHarmonic::Crest::PersistentLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::PersistentLod::get_BufferCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::PersistentLod::get_LastUpdateSubstepCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"get_LastUpdateSubstepCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::set_LastUpdateSubstepCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"set_LastUpdateSubstepCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::PersistentLod::get_Kernel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::PersistentLod::get_SkipFlipBuffers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> WaveHarmonic::Crest::PersistentLod::get_SimulationShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::Allocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, buffer);
}
inline void WaveHarmonic::Crest::PersistentLod::SetAdditionalSimulationParameters(::WaveHarmonic::Crest::PropertyWrapperCompute  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void WaveHarmonic::Crest::PersistentLod::ReAllocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::LoadCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::PersistentLod::StoreCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::PersistentLod::RemoveCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline int32_t WaveHarmonic::Crest::PersistentLod::get_SimulationFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"get_SimulationFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::PersistentLod::set_SimulationFrequency(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {"set_SimulationFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::PersistentLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::PersistentLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::PersistentLod* WaveHarmonic::Crest::PersistentLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::PersistentLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::PersistentLod::PersistentLod()   {
}
