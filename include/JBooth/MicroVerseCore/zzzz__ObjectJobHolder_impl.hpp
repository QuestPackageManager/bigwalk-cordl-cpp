#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectJobHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__half4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectStamp_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectJobHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectJobHolder::*)(::JBooth::MicroVerseCore::ObjectStamp*, ::Unity::Collections::NativeArray_1<uint32_t>, ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*, int32_t)>(&::JBooth::MicroVerseCore::ObjectJobHolder::_ctor)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181409fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {".ctor", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectStamp*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectJobHolder.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectJobHolder::*)()>(&::JBooth::MicroVerseCore::ObjectJobHolder::IsDone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181409f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectJobHolder.get_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::ObjectJobHolder::*)()>(&::JBooth::MicroVerseCore::ObjectJobHolder::get_canceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"get_canceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectJobHolder.set_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectJobHolder::*)(bool)>(&::JBooth::MicroVerseCore::ObjectJobHolder::set_canceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"set_canceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectJobHolder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectJobHolder::*)()>(&::JBooth::MicroVerseCore::ObjectJobHolder::Dispose)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181409e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::ObjectStamp>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_stamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stamp;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::ObjectStamp> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_stamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stamp;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_stamp(::UnityW<::JBooth::MicroVerseCore::ObjectStamp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stamp = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_positionWeightData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionWeightData;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_positionWeightData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionWeightData;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_positionWeightData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionWeightData = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_rotationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationData;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_rotationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationData;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_rotationData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationData = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_scaleIndexData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleIndexData;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_scaleIndexData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleIndexData;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_scaleIndexData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleIndexData = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_gpuRequestPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestPlacement;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_gpuRequestPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestPlacement;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_gpuRequestPlacement(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gpuRequestPlacement = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_gpuRequestRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestRotation;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_gpuRequestRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestRotation;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_gpuRequestRotation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gpuRequestRotation = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_gpuRequestScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestScale;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_gpuRequestScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestScale;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_gpuRequestScale(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gpuRequestScale = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_objectIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectIndexes;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_objectIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectIndexes;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_objectIndexes(::Unity::Collections::NativeArray_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectIndexes = value;
}
constexpr ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::JBooth::MicroVerseCore::ObjectStamp_ReturnData* const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_buffer(::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr int32_t& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_unpackIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpackIndex;
}
constexpr int32_t const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_unpackIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpackIndex;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_unpackIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unpackIndex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_positionTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_positionTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionTex;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_positionTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_rotationTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_rotationTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationTex;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_rotationTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_scaleTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get_scaleTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleTex;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set_scaleTex(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleTex = value;
}
constexpr bool& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get__canceled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled_k__BackingField;
}
constexpr bool const& JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_get__canceled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled_k__BackingField;
}
constexpr void JBooth::MicroVerseCore::ObjectJobHolder::__cordl_internal_set__canceled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canceled_k__BackingField = value;
}
inline void JBooth::MicroVerseCore::ObjectJobHolder::_ctor(::JBooth::MicroVerseCore::ObjectStamp*  stamp, ::Unity::Collections::NativeArray_1<uint32_t>  objIndexes, ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  buffer, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {".ctor", {}, {::i2c::type_of<::JBooth::MicroVerseCore::ObjectStamp*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<::JBooth::MicroVerseCore::ObjectStamp_ReturnData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stamp, objIndexes, buffer, maxCount);
}
inline bool JBooth::MicroVerseCore::ObjectJobHolder::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::ObjectJobHolder::get_canceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"get_canceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::ObjectJobHolder::set_canceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"set_canceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::ObjectJobHolder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectJobHolder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::ObjectJobHolder* JBooth::MicroVerseCore::ObjectJobHolder::New_ctor(::JBooth::MicroVerseCore::ObjectStamp*  stamp, ::Unity::Collections::NativeArray_1<uint32_t>  objIndexes, ::JBooth::MicroVerseCore::ObjectStamp_ReturnData*  buffer, int32_t  maxCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::ObjectJobHolder*>(stamp, objIndexes, buffer, maxCount));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectJobHolder::ObjectJobHolder()   {
}
