#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DecoderPipelinePool.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderPipelinePool_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderPipelinePool_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderPipeline_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::*)()>(&::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0._GetPool_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::DecoderPipeline* (::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::*)()>(&::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::_GetPool_b__0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805ed310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>(),
                        {"<GetPool>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0._GetPool_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::*)(::Dissonance::Audio::Playback::DecoderPipeline*)>(&::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::_GetPool_b__1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805ed410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>(),
                        {"<GetPool>b__1", {}, {::i2c::type_of<::Dissonance::Audio::Playback::DecoderPipeline*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Audio::Playback::FrameFormat& Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::__cordl_internal_get_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr ::Dissonance::Audio::Playback::FrameFormat const& Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::__cordl_internal_get_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr void Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::__cordl_internal_set_format(::Dissonance::Audio::Playback::FrameFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___format = value;
}
constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*& Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>* const& Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::__cordl_internal_set___9__1(::System::Action_1<::Dissonance::Audio::Playback::DecoderPipeline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
inline void Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::DecoderPipeline* Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::_GetPool_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>(),
                        {"<GetPool>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::DecoderPipeline*>(this, ___internal_method);
}
inline void Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::_GetPool_b__1(::Dissonance::Audio::Playback::DecoderPipeline*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>(),
                        {"<GetPool>b__1", {}, {::i2c::type_of<::Dissonance::Audio::Playback::DecoderPipeline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0* Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DecoderPipelinePool___c__DisplayClass2_0::DecoderPipelinePool___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipelinePool.GetPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>* (*)(::Dissonance::Audio::Playback::FrameFormat)>(&::Dissonance::Audio::Playback::DecoderPipelinePool::GetPool)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1805dbae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool*>(),
                        {"GetPool", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipelinePool.GetDecoderPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::DecoderPipeline* (*)(::Dissonance::Audio::Playback::FrameFormat, ::Dissonance::Audio::Playback::IVolumeProvider*)>(&::Dissonance::Audio::Playback::DecoderPipelinePool::GetDecoderPipeline)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805dba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool*>(),
                        {"GetDecoderPipeline", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>(), ::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderPipelinePool.Recycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Dissonance::Audio::Playback::FrameFormat, ::Dissonance::Audio::Playback::DecoderPipeline*)>(&::Dissonance::Audio::Playback::DecoderPipelinePool::Recycle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805dbc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool*>(),
                        {"Recycle", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>(), ::i2c::type_of<::Dissonance::Audio::Playback::DecoderPipeline*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::DecoderPipelinePool::setStaticF_Pools(::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>*, "Pools", ::Dissonance::Audio::Playback::DecoderPipelinePool*>(std::forward<::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>* Dissonance::Audio::Playback::DecoderPipelinePool::getStaticF_Pools()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Dissonance::Audio::Playback::FrameFormat,::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>*, "Pools", ::Dissonance::Audio::Playback::DecoderPipelinePool*>();
}
inline void Dissonance::Audio::Playback::DecoderPipelinePool::setStaticF__nextPipelineId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_nextPipelineId", ::Dissonance::Audio::Playback::DecoderPipelinePool*>(std::forward<int32_t>(value));
}
inline int32_t Dissonance::Audio::Playback::DecoderPipelinePool::getStaticF__nextPipelineId()  {
return ::cordl_internals::getStaticField<int32_t, "_nextPipelineId", ::Dissonance::Audio::Playback::DecoderPipelinePool*>();
}
inline ::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>* Dissonance::Audio::Playback::DecoderPipelinePool::GetPool(::Dissonance::Audio::Playback::FrameFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool*>(),
                        {"GetPool", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Datastructures::ConcurrentPool_1<::Dissonance::Audio::Playback::DecoderPipeline*>*>(nullptr, ___internal_method, format);
}
inline ::Dissonance::Audio::Playback::DecoderPipeline* Dissonance::Audio::Playback::DecoderPipelinePool::GetDecoderPipeline(::Dissonance::Audio::Playback::FrameFormat  format, ::Dissonance::Audio::Playback::IVolumeProvider*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool*>(),
                        {"GetDecoderPipeline", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>(), ::i2c::type_of<::Dissonance::Audio::Playback::IVolumeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::DecoderPipeline*>(nullptr, ___internal_method, format, volume);
}
inline void Dissonance::Audio::Playback::DecoderPipelinePool::Recycle(::Dissonance::Audio::Playback::FrameFormat  format, ::Dissonance::Audio::Playback::DecoderPipeline*  pipeline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderPipelinePool*>(),
                        {"Recycle", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>(), ::i2c::type_of<::Dissonance::Audio::Playback::DecoderPipeline*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, format, pipeline);
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DecoderPipelinePool::DecoderPipelinePool()   {
}
