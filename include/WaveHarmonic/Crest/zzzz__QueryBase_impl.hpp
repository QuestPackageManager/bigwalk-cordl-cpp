#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__PropertyWrapperCompute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryableLod_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryBase_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::QueryBase_ShaderIDs::setStaticF_s_QueryPositions_MinimumGridSizes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_QueryPositions_MinimumGridSizes", ::WaveHarmonic::Crest::QueryBase_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::QueryBase_ShaderIDs::getStaticF_s_QueryPositions_MinimumGridSizes()  {
return ::cordl_internals::getStaticField<int32_t, "s_QueryPositions_MinimumGridSizes", ::WaveHarmonic::Crest::QueryBase_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBase_ShaderIDs::QueryBase_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrar::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrar::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18257ea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*& WaveHarmonic::Crest::QueryBase_SegmentRegistrar::__cordl_internal_get__Segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Segments;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>* const& WaveHarmonic::Crest::QueryBase_SegmentRegistrar::__cordl_internal_get__Segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Segments;
}
constexpr void WaveHarmonic::Crest::QueryBase_SegmentRegistrar::__cordl_internal_set__Segments(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Segments = value;
}
constexpr int32_t& WaveHarmonic::Crest::QueryBase_SegmentRegistrar::__cordl_internal_get__QueryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryCount;
}
constexpr int32_t const& WaveHarmonic::Crest::QueryBase_SegmentRegistrar::__cordl_internal_get__QueryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryCount;
}
constexpr void WaveHarmonic::Crest::QueryBase_SegmentRegistrar::__cordl_internal_set__QueryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryCount = value;
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar* WaveHarmonic::Crest::QueryBase_SegmentRegistrar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar::QueryBase_SegmentRegistrar()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar* (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::get_Current)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18257ea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18257e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer.AcquireNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::AcquireNew)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18257e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"AcquireNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer.ReleaseLast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::ReleaseLast)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x18110fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"ReleaseLast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer.RemoveRegistrations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)(int32_t)>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::RemoveRegistrations)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18257e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"RemoveRegistrations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer.ClearAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::ClearAvailable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18257e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"ClearAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer.ClearAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::*)()>(&::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::ClearAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18257e710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"ClearAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>& WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_get__Segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Segments;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*> const& WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_get__Segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Segments;
}
constexpr void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_set__Segments(::ArrayW<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Segments = value;
}
constexpr int32_t& WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_get__SegmentRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SegmentRelease;
}
constexpr int32_t const& WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_get__SegmentRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SegmentRelease;
}
constexpr void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_set__SegmentRelease(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SegmentRelease = value;
}
constexpr int32_t& WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_get__SegmentAcquire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SegmentAcquire;
}
constexpr int32_t const& WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_get__SegmentAcquire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SegmentAcquire;
}
constexpr void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::__cordl_internal_set__SegmentAcquire(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SegmentAcquire = value;
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::setStaticF_s_PoolSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_PoolSize", ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::getStaticF_s_PoolSize()  {
return ::cordl_internals::getStaticField<int32_t, "s_PoolSize", ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>();
}
inline ::WaveHarmonic::Crest::QueryBase_SegmentRegistrar* WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::QueryBase_SegmentRegistrar*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::AcquireNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"AcquireNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::ReleaseLast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"ReleaseLast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::RemoveRegistrations(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"RemoveRegistrations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::ClearAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"ClearAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>(),
                        {"ClearAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer* WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer::QueryBase_SegmentRegistrarRingBuffer()   {
}
// Ctor Parameters [CppParam { name: "_Request", ty: "::UnityEngine::Rendering::AsyncGPUReadbackRequest", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DataTimestamp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Segments", ty: "::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::QueryBase_ReadbackRequest::QueryBase_ReadbackRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest  _Request, float_t  _DataTimestamp, ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  _Segments) noexcept  {
this->_Request = _Request;
this->_DataTimestamp = _DataTimestamp;
this->_Segments = _Segments;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBase_ReadbackRequest::QueryBase_ReadbackRequest()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus::QueryBase_QueryStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus::QueryBase_QueryStatus()   {
}
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus  WaveHarmonic::Crest::QueryBase_QueryStatus::OK{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus  WaveHarmonic::Crest::QueryBase_QueryStatus::RetrieveFailed{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus  WaveHarmonic::Crest::QueryBase_QueryStatus::PostFailed{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus  WaveHarmonic::Crest::QueryBase_QueryStatus::NotEnoughDataForVels{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus  WaveHarmonic::Crest::QueryBase_QueryStatus::VelocityDataInvalidated{static_cast<int32_t>(0x8)};
constexpr ::WaveHarmonic::Crest::QueryBase_QueryStatus  WaveHarmonic::Crest::QueryBase_QueryStatus::InvalidDtForVelocity{static_cast<int32_t>(0x10)};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.get_Kernel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::get_Kernel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*)>(&::WaveHarmonic::Crest::QueryBase::_ctor)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x18257b2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.LogMaximumQueryCountExceededError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::LogMaximumQueryCountExceededError)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18257a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"LogMaximumQueryCountExceededError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.UpdateQueryPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryBase::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::QueryBase::UpdateQueryPoints)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x18257ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"UpdateQueryPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.RemoveQueryPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)(int32_t)>(&::WaveHarmonic::Crest::QueryBase::RemoveQueryPoints)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18257a4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"RemoveQueryPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.CompactQueryStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::CompactQueryStorage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182579f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"CompactQueryStorage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.RetrieveResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryBase::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<float_t>, ::ArrayW<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::QueryBase::RetrieveResults)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18257a570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"RetrieveResults", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.CalculateVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QueryBase::*)(int32_t, ::ArrayW<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::QueryBase::CalculateVelocities)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x182579c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"CalculateVelocities", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryBase::UpdateQueries)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18257ad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.SendReadBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryBase::SendReadBack)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18257a930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.ExecuteQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::ExecuteQueries)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18257a270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"ExecuteQueries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.DataArrived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::WaveHarmonic::Crest::QueryBase::DataArrived)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x182579fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"DataArrived", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::CleanUp)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182579e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"CleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryBase::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryBase::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.get_ResultGuidCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::get_ResultGuidCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18257b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"get_ResultGuidCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.get_RequestCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::get_RequestCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18257b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"get_RequestCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryBase.get_QueryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QueryBase::*)()>(&::WaveHarmonic::Crest::QueryBase::get_QueryCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18257b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"get_QueryCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr ::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Lod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Lod;
}
constexpr ::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Lod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Lod;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__Lod(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Lod = value;
}
constexpr ::WaveHarmonic::Crest::PropertyWrapperCompute& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Wrapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wrapper;
}
constexpr ::WaveHarmonic::Crest::PropertyWrapperCompute const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Wrapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wrapper;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__Wrapper(::WaveHarmonic::Crest::PropertyWrapperCompute  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Wrapper = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__DataArrivedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataArrivedAction;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__DataArrivedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataArrivedAction;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__DataArrivedAction(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DataArrivedAction = value;
}
constexpr ::UnityEngine::ComputeBuffer*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ComputeBufferQueries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComputeBufferQueries;
}
constexpr ::UnityEngine::ComputeBuffer* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ComputeBufferQueries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComputeBufferQueries;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__ComputeBufferQueries(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ComputeBufferQueries = value;
}
constexpr ::UnityEngine::ComputeBuffer*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ComputeBufferResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComputeBufferResults;
}
constexpr ::UnityEngine::ComputeBuffer* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ComputeBufferResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ComputeBufferResults;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__ComputeBufferResults(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ComputeBufferResults = value;
}
constexpr int32_t& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__MaximumQueryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumQueryCount;
}
constexpr int32_t const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__MaximumQueryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumQueryCount;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__MaximumQueryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumQueryCount = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryPositionXZ_MinimumGridSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryPositionXZ_MinimumGridSize;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryPositionXZ_MinimumGridSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryPositionXZ_MinimumGridSize;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__QueryPositionXZ_MinimumGridSize(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryPositionXZ_MinimumGridSize = value;
}
constexpr ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__SegmentRegistrarRingBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SegmentRegistrarRingBuffer;
}
constexpr ::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__SegmentRegistrarRingBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SegmentRegistrarRingBuffer;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__SegmentRegistrarRingBuffer(::WaveHarmonic::Crest::QueryBase_SegmentRegistrarRingBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SegmentRegistrarRingBuffer = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResults;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResults;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__QueryResults(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResults = value;
}
constexpr float_t& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResultsTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultsTime;
}
constexpr float_t const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResultsTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultsTime;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__QueryResultsTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultsTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ResultSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultSegments;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ResultSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultSegments;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__ResultSegments(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultSegments = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResultsLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultsLast;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResultsLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultsLast;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__QueryResultsLast(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultsLast = value;
}
constexpr float_t& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResultsTimeLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultsTimeLast;
}
constexpr float_t const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__QueryResultsTimeLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultsTimeLast;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__QueryResultsTimeLast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultsTimeLast = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ResultSegmentsLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultSegmentsLast;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__ResultSegmentsLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultSegmentsLast;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__ResultSegmentsLast(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Vector3Int>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultSegmentsLast = value;
}
constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>*& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Requests;
}
constexpr ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>* const& WaveHarmonic::Crest::QueryBase::__cordl_internal_get__Requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Requests;
}
constexpr void WaveHarmonic::Crest::QueryBase::__cordl_internal_set__Requests(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::QueryBase_ReadbackRequest>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Requests = value;
}
inline int32_t WaveHarmonic::Crest::QueryBase::get_Kernel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase::_ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod);
}
inline void WaveHarmonic::Crest::QueryBase::LogMaximumQueryCountExceededError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"LogMaximumQueryCountExceededError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::QueryBase::UpdateQueryPoints(int32_t  ownerHash, float_t  minSpatialLength, ::ArrayW<::UnityEngine::Vector3>  queryPoints, ::ArrayW<::UnityEngine::Vector3>  queryNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"UpdateQueryPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ownerHash, minSpatialLength, queryPoints, queryNormals);
}
inline void WaveHarmonic::Crest::QueryBase::RemoveQueryPoints(int32_t  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"RemoveQueryPoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline void WaveHarmonic::Crest::QueryBase::CompactQueryStorage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"CompactQueryStorage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::QueryBase::RetrieveResults(int32_t  guid, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"RetrieveResults", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, guid, displacements, heights, normals);
}
inline int32_t WaveHarmonic::Crest::QueryBase::CalculateVelocities(int32_t  ownerHash, ::ArrayW<::UnityEngine::Vector3>  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"CalculateVelocities", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ownerHash, results);
}
inline void WaveHarmonic::Crest::QueryBase::UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::QueryBase::SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::QueryBase::ExecuteQueries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"ExecuteQueries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase::DataArrived(::UnityEngine::Rendering::AsyncGPUReadbackRequest  req)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"DataArrived", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void WaveHarmonic::Crest::QueryBase::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryBase::Initialize(::WaveHarmonic::Crest::WaterRenderer*  water)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline int32_t WaveHarmonic::Crest::QueryBase::get_ResultGuidCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"get_ResultGuidCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::QueryBase::get_RequestCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"get_RequestCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::QueryBase::get_QueryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryBase*>(),
                        {"get_QueryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::QueryBase* WaveHarmonic::Crest::QueryBase::New_ctor(::WaveHarmonic::Crest::IQueryableLod_1<::WaveHarmonic::Crest::IQueryProvider*>*  lod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryBase*>(lod));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr  WaveHarmonic::Crest::QueryBase::operator ::WaveHarmonic::Crest::IQueryable*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::QueryBase::i___WaveHarmonic__Crest__IQueryable() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryBase::QueryBase()   {
}
