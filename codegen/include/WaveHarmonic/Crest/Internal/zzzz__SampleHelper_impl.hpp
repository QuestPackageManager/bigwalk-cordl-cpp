#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/SampleHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::SampleHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Internal::SampleHelper::*)(int32_t)>(&::WaveHarmonic::Crest::Internal::SampleHelper::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1825a32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::SampleHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::SampleHelper.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Internal::SampleHelper::*)(bool, int32_t)>(&::WaveHarmonic::Crest::Internal::SampleHelper::Validate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1825a3120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::SampleHelper*>(),
                        {"Validate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Internal::SampleHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Internal::SampleHelper::*)(::UnityEngine::Vector3, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::Internal::SampleHelper::Sample)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::SampleHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_get__QueryPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryPosition;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_get__QueryPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryPosition;
}
constexpr void WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_set__QueryPosition(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryPosition = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_get__QueryResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResult;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_get__QueryResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResult;
}
constexpr void WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_set__QueryResult(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResult = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_get__LastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastFrame;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_get__LastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastFrame;
}
constexpr void WaveHarmonic::Crest::Internal::SampleHelper::__cordl_internal_set__LastFrame(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastFrame = value;
}
inline void WaveHarmonic::Crest::Internal::SampleHelper::_ctor(int32_t  queryCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::SampleHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queryCount);
}
inline void WaveHarmonic::Crest::Internal::SampleHelper::Validate(bool  allowMultipleCallsPerFrame, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::SampleHelper*>(),
                        {"Validate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowMultipleCallsPerFrame, id);
}
inline bool WaveHarmonic::Crest::Internal::SampleHelper::Sample(::UnityEngine::Vector3  position, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::SampleHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, minimumLength, layer);
}
inline ::WaveHarmonic::Crest::Internal::SampleHelper* WaveHarmonic::Crest::Internal::SampleHelper::New_ctor(int32_t  queryCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Internal::SampleHelper*>(queryCount));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Internal::SampleHelper::SampleHelper()   {
}
