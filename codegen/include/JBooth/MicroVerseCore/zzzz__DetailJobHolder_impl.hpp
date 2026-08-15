#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailJobHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailJobHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.get_detailIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::JBooth::MicroVerseCore::DetailJobHolder::*)()>(&::JBooth::MicroVerseCore::DetailJobHolder::get_detailIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"get_detailIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.set_detailIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailJobHolder::*)(int32_t)>(&::JBooth::MicroVerseCore::DetailJobHolder::set_detailIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"set_detailIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.get_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailJobHolder::*)()>(&::JBooth::MicroVerseCore::DetailJobHolder::get_canceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"get_canceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.set_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailJobHolder::*)(bool)>(&::JBooth::MicroVerseCore::DetailJobHolder::set_canceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"set_canceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::DetailJobHolder::*)()>(&::JBooth::MicroVerseCore::DetailJobHolder::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18141bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailJobHolder::*)()>(&::JBooth::MicroVerseCore::DetailJobHolder::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18141bc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.OnAsynComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailJobHolder::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::JBooth::MicroVerseCore::DetailJobHolder::OnAsynComplete)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18141bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"OnAsynComplete", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder.AddJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailJobHolder::*)(::UnityEngine::RenderTexture*, int32_t)>(&::JBooth::MicroVerseCore::DetailJobHolder::AddJob)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x18141b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"AddJob", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::DetailJobHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::DetailJobHolder::*)()>(&::JBooth::MicroVerseCore::DetailJobHolder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_gpuRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequest;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_gpuRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequest;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set_gpuRequest(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gpuRequest = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_detailLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailLayer;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_detailLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailLayer;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set_detailLayer(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailLayer = value;
}
constexpr int32_t& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get__detailIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detailIndex_k__BackingField;
}
constexpr int32_t const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get__detailIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detailIndex_k__BackingField;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set__detailIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detailIndex_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrain = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_rawData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawData;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_rawData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawData;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set_rawData(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawData = value;
}
constexpr int32_t& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr bool& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get__canceled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled_k__BackingField;
}
constexpr bool const& JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_get__canceled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled_k__BackingField;
}
constexpr void JBooth::MicroVerseCore::DetailJobHolder::__cordl_internal_set__canceled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canceled_k__BackingField = value;
}
inline void JBooth::MicroVerseCore::DetailJobHolder::setStaticF_resultValues(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "resultValues", ::JBooth::MicroVerseCore::DetailJobHolder*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* JBooth::MicroVerseCore::DetailJobHolder::getStaticF_resultValues()  {
return ::cordl_internals::getStaticField<::System::Object*, "resultValues", ::JBooth::MicroVerseCore::DetailJobHolder*>();
}
inline int32_t JBooth::MicroVerseCore::DetailJobHolder::get_detailIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"get_detailIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailJobHolder::set_detailIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"set_detailIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::DetailJobHolder::get_canceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"get_canceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailJobHolder::set_canceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"set_canceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool JBooth::MicroVerseCore::DetailJobHolder::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailJobHolder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::DetailJobHolder::OnAsynComplete(::UnityEngine::Rendering::AsyncGPUReadbackRequest  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"OnAsynComplete", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void JBooth::MicroVerseCore::DetailJobHolder::AddJob(::UnityEngine::RenderTexture*  detailLayer, int32_t  detailIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {"AddJob", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, detailLayer, detailIndex);
}
inline void JBooth::MicroVerseCore::DetailJobHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::DetailJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::DetailJobHolder* JBooth::MicroVerseCore::DetailJobHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::DetailJobHolder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::DetailJobHolder::DetailJobHolder()   {
}
