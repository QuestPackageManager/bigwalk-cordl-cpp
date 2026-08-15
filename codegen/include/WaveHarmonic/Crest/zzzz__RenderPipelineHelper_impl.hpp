#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RenderPipelineHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipeline_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipelineHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderPipeline_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper.get_RenderPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::RenderPipeline (*)()>(&::WaveHarmonic::Crest::RenderPipelineHelper::get_RenderPipeline)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_RenderPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper.set_RenderPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::RenderPipeline)>(&::WaveHarmonic::Crest::RenderPipelineHelper::set_RenderPipeline)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18256d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"set_RenderPipeline", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderPipeline>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper.get_RenderPipelineAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::RenderPipeline (*)()>(&::WaveHarmonic::Crest::RenderPipelineHelper::get_RenderPipelineAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18256d480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_RenderPipelineAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper.get_IsLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::RenderPipelineHelper::get_IsLegacy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_IsLegacy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper.get_IsUniversal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::RenderPipelineHelper::get_IsUniversal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_IsUniversal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper.get_IsHighDefinition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::WaveHarmonic::Crest::RenderPipelineHelper::get_IsHighDefinition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18256d3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_IsHighDefinition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RenderPipelineHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RenderPipelineHelper::*)()>(&::WaveHarmonic::Crest::RenderPipelineHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::RenderPipelineHelper::setStaticF__RenderPipeline_k__BackingField(::WaveHarmonic::Crest::RenderPipeline  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::RenderPipeline, "<RenderPipeline>k__BackingField", ::WaveHarmonic::Crest::RenderPipelineHelper*>(std::forward<::WaveHarmonic::Crest::RenderPipeline>(value));
}
inline ::WaveHarmonic::Crest::RenderPipeline WaveHarmonic::Crest::RenderPipelineHelper::getStaticF__RenderPipeline_k__BackingField()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::RenderPipeline, "<RenderPipeline>k__BackingField", ::WaveHarmonic::Crest::RenderPipelineHelper*>();
}
inline void WaveHarmonic::Crest::RenderPipelineHelper::setStaticF_s_SkipRenderPipelineChange(bool  value)  {
::cordl_internals::setStaticField<bool, "s_SkipRenderPipelineChange", ::WaveHarmonic::Crest::RenderPipelineHelper*>(std::forward<bool>(value));
}
inline bool WaveHarmonic::Crest::RenderPipelineHelper::getStaticF_s_SkipRenderPipelineChange()  {
return ::cordl_internals::getStaticField<bool, "s_SkipRenderPipelineChange", ::WaveHarmonic::Crest::RenderPipelineHelper*>();
}
inline ::WaveHarmonic::Crest::RenderPipeline WaveHarmonic::Crest::RenderPipelineHelper::get_RenderPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_RenderPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::RenderPipeline>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::RenderPipelineHelper::set_RenderPipeline(::WaveHarmonic::Crest::RenderPipeline  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"set_RenderPipeline", {}, {::i2c::type_of<::WaveHarmonic::Crest::RenderPipeline>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::RenderPipeline WaveHarmonic::Crest::RenderPipelineHelper::get_RenderPipelineAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_RenderPipelineAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::RenderPipeline>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::RenderPipelineHelper::get_IsLegacy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_IsLegacy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::RenderPipelineHelper::get_IsUniversal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_IsUniversal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool WaveHarmonic::Crest::RenderPipelineHelper::get_IsHighDefinition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {"get_IsHighDefinition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::RenderPipelineHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RenderPipelineHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::RenderPipelineHelper* WaveHarmonic::Crest::RenderPipelineHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::RenderPipelineHelper*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RenderPipelineHelper::RenderPipelineHelper()   {
}
