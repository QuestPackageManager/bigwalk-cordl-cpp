#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BufferCaptureTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__BufferCaptureTarget_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__BufferCaptureTarget_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::BufferCaptureTarget_BufferCapture(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::BufferCaptureTarget_BufferCapture()   {
}
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::None{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::CurvatureMap{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::FlowMap{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::TreeStampOcclusionMask{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::TreeStampSDF{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::CombinedOcclusionMask{static_cast<int32_t>(0x8)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::CombinedTreeSDF{static_cast<int32_t>(0x10)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::ObjectStampOcclusionMask{static_cast<int32_t>(0x20)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::ObjectStampSDF{static_cast<int32_t>(0x40)};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture::CombinedObjectStampSDF{static_cast<int32_t>(0x80)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::*)()>(&::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181417b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_curvatureMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curvatureMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_curvatureMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curvatureMap;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_curvatureMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curvatureMap = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_flowMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_flowMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowMap;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_flowMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_treeStampOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeStampOcclusion;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_treeStampOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeStampOcclusion;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_treeStampOcclusion(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeStampOcclusion = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_treeStampSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeStampSDF;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_treeStampSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeStampSDF;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_treeStampSDF(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeStampSDF = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_allTreeSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTreeSDF;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_allTreeSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTreeSDF;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_allTreeSDF(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allTreeSDF = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_occlusionMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionMask;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_occlusionMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionMask;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_occlusionMask(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionMask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_objectStampOcclusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectStampOcclusion;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_objectStampOcclusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectStampOcclusion;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_objectStampOcclusion(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectStampOcclusion = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_objectStampSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectStampSDF;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_objectStampSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectStampSDF;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_objectStampSDF(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectStampSDF = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_allObjectSDF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObjectSDF;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_get_allObjectSDF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObjectSDF;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::__cordl_internal_set_allObjectSDF(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allObjectSDF = value;
}
inline void JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList* JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList::BufferCaptureTarget_TextureList()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::*)()>(&::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181417a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TerrainData>& JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::__cordl_internal_get_terrainData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainData;
}
constexpr ::UnityW<::UnityEngine::TerrainData> const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::__cordl_internal_get_terrainData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainData;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::__cordl_internal_set_terrainData(::UnityW<::UnityEngine::TerrainData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainData = value;
}
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*& JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::__cordl_internal_get_textures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList* const& JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::__cordl_internal_get_textures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::__cordl_internal_set_textures(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textures = value;
}
inline void JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry* JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry::BufferCaptureTarget_TextureEntry()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::BufferCaptureTarget.IsOutputFlagSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::BufferCaptureTarget::*)(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture)>(&::JBooth::MicroVerseCore::BufferCaptureTarget::IsOutputFlagSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181405d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget*>(),
                        {"IsOutputFlagSet", {}, {::i2c::type_of<::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BufferCaptureTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BufferCaptureTarget::*)()>(&::JBooth::MicroVerseCore::BufferCaptureTarget::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181405d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture& JBooth::MicroVerseCore::BufferCaptureTarget::__cordl_internal_get_buffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffers;
}
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const& JBooth::MicroVerseCore::BufferCaptureTarget::__cordl_internal_get_buffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffers;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget::__cordl_internal_set_buffers(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffers = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>*& JBooth::MicroVerseCore::BufferCaptureTarget::__cordl_internal_get_textures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>* const& JBooth::MicroVerseCore::BufferCaptureTarget::__cordl_internal_get_textures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr void JBooth::MicroVerseCore::BufferCaptureTarget::__cordl_internal_set_textures(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textures = value;
}
inline bool JBooth::MicroVerseCore::BufferCaptureTarget::IsOutputFlagSet(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget*>(),
                        {"IsOutputFlagSet", {}, {::i2c::type_of<::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::BufferCaptureTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BufferCaptureTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BufferCaptureTarget* JBooth::MicroVerseCore::BufferCaptureTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BufferCaptureTarget*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget::BufferCaptureTarget()   {
}
