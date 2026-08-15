#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LogHistogram.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__LogHistogram_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LogHistogram.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ComputeBuffer* (::UnityEngine::Rendering::PostProcessing::LogHistogram::*)()>(&::UnityEngine::Rendering::PostProcessing::LogHistogram::get_data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LogHistogram.set_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LogHistogram::*)(::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::PostProcessing::LogHistogram::set_data)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"set_data", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LogHistogram.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LogHistogram::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::LogHistogram::Generate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181fc08f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"Generate", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LogHistogram.GetHistogramScaleOffsetRes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::PostProcessing::LogHistogram::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::LogHistogram::GetHistogramScaleOffsetRes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fc0be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"GetHistogramScaleOffsetRes", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LogHistogram.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LogHistogram::*)()>(&::UnityEngine::Rendering::PostProcessing::LogHistogram::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fc0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LogHistogram._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LogHistogram::*)()>(&::UnityEngine::Rendering::PostProcessing::LogHistogram::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::PostProcessing::LogHistogram::__cordl_internal_get__data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_k__BackingField;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::PostProcessing::LogHistogram::__cordl_internal_get__data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::LogHistogram::__cordl_internal_set__data_k__BackingField(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data_k__BackingField = value;
}
inline ::UnityEngine::ComputeBuffer* UnityEngine::Rendering::PostProcessing::LogHistogram::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::LogHistogram::set_data(::UnityEngine::ComputeBuffer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"set_data", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::PostProcessing::LogHistogram::Generate(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"Generate", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::PostProcessing::LogHistogram::GetHistogramScaleOffsetRes(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"GetHistogramScaleOffsetRes", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::LogHistogram::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::LogHistogram::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LogHistogram*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::LogHistogram* UnityEngine::Rendering::PostProcessing::LogHistogram::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::LogHistogram*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram::LogHistogram()   {
}
