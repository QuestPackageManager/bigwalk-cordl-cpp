#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/OcclusionData.hpp"
#include "JBooth/MicroVerseCore/zzzz__StampData_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionData::*)(::UnityEngine::Terrain*, int32_t)>(&::JBooth::MicroVerseCore::OcclusionData::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1814453b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionData.RenderTreeSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionData::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*, bool)>(&::JBooth::MicroVerseCore::OcclusionData::RenderTreeSDF)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1814450f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {"RenderTreeSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionData.RenderObjectSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionData::*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*, bool)>(&::JBooth::MicroVerseCore::OcclusionData::RenderObjectSDF)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181444e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {"RenderObjectSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::OcclusionData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::OcclusionData::*)()>(&::JBooth::MicroVerseCore::OcclusionData::Dispose)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181444cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_terrainMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainMask;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_terrainMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainMask;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_terrainMask(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainMask = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_treeSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeSDF;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_treeSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeSDF;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_treeSDF(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeSDF = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentTreeMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTreeMask;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentTreeMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTreeMask;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_currentTreeMask(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTreeMask = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentTreeSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTreeSDF;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentTreeSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTreeSDF;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_currentTreeSDF(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTreeSDF = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_objectSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectSDF;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_objectSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectSDF;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_objectSDF(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectSDF = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentObjectMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObjectMask;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentObjectMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObjectMask;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_currentObjectMask(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObjectMask = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentObjectSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObjectSDF;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_currentObjectSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentObjectSDF;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_currentObjectSDF(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentObjectSDF = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_objectMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectMask;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::OcclusionData::__cordl_internal_get_objectMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectMask;
}
constexpr void JBooth::MicroVerseCore::OcclusionData::__cordl_internal_set_objectMask(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectMask = value;
}
inline void JBooth::MicroVerseCore::OcclusionData::setStaticF_combineSDFShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "combineSDFShader", ::JBooth::MicroVerseCore::OcclusionData*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::OcclusionData::getStaticF_combineSDFShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "combineSDFShader", ::JBooth::MicroVerseCore::OcclusionData*>();
}
inline void JBooth::MicroVerseCore::OcclusionData::_ctor(::UnityEngine::Terrain*  terrain, int32_t  maskSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, maskSize);
}
inline void JBooth::MicroVerseCore::OcclusionData::RenderTreeSDF(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  ods, bool  others)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {"RenderTreeSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, ods, others);
}
inline void JBooth::MicroVerseCore::OcclusionData::RenderObjectSDF(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  ods, bool  others)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {"RenderObjectSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, ods, others);
}
inline void JBooth::MicroVerseCore::OcclusionData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::OcclusionData*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::OcclusionData* JBooth::MicroVerseCore::OcclusionData::New_ctor(::UnityEngine::Terrain*  terrain, int32_t  maskSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::OcclusionData*>(terrain, maskSize));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::OcclusionData::OcclusionData()   {
}
