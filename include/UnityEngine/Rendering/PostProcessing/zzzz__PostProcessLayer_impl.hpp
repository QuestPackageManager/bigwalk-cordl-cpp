#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessLayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_impl.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Dithering_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FastApproximateAntialiasing_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Fog_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__LogHistogram_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessBundle_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessDebugLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheetFactory_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__SubpixelMorphologicalAntialiasing_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TargetPool_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TemporalAntialiasing_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing::PostProcessLayer_Antialiasing(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing::PostProcessLayer_Antialiasing()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing::FastApproximateAntialiasing{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing::SubpixelMorphologicalAntialiasing{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing::TemporalAntialiasing{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::__cordl_internal_get_assemblyQualifiedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assemblyQualifiedName;
}
constexpr ::StringW const& UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::__cordl_internal_get_assemblyQualifiedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assemblyQualifiedName;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::__cordl_internal_set_assemblyQualifiedName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assemblyQualifiedName = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessBundle*& UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::__cordl_internal_get_bundle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundle;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::__cordl_internal_get_bundle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundle;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::__cordl_internal_set_bundle(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundle = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef* UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef::PostProcessLayer_SerializedBundleRef()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c._UpdateBundleSortList_b__54_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessBundle* (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::_UpdateBundleSortList_b__54_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dc0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(),
                        {"<UpdateBundleSortList>b__54_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(std::forward<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::setStaticF___9__54_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*, "<>9__54_1", ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::getStaticF___9__54_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*, "<>9__54_1", ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::_UpdateBundleSortList_b__54_1(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>  kvp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>(),
                        {"<UpdateBundleSortList>b__54_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(this, ___internal_method, kvp);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c::PostProcessLayer___c()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0._UpdateBundleSortList_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::_UpdateBundleSortList_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fd0500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>(),
                        {"<UpdateBundleSortList>b__0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0._UpdateBundleSortList_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::_UpdateBundleSortList_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fd0530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>(),
                        {"<UpdateBundleSortList>b__2", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::__cordl_internal_get_evt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evt;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent const& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::__cordl_internal_get_evt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evt;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::__cordl_internal_set_evt(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___evt = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::__cordl_internal_get_effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::__cordl_internal_get_effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::__cordl_internal_set_effects(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effects = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::_UpdateBundleSortList_b__0(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>  kvp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>(),
                        {"<UpdateBundleSortList>b__0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, kvp);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::_UpdateBundleSortList_b__2(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>(),
                        {"<UpdateBundleSortList>b__2", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_0::PostProcessLayer___c__DisplayClass54_0()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1._UpdateBundleSortList_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::*)(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::_UpdateBundleSortList_b__3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fd05b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*>(),
                        {"<UpdateBundleSortList>b__3", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::__cordl_internal_get_searchStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchStr;
}
constexpr ::StringW const& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::__cordl_internal_get_searchStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchStr;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::__cordl_internal_set_searchStr(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchStr = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::_UpdateBundleSortList_b__3(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*>(),
                        {"<UpdateBundleSortList>b__3", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_1::PostProcessLayer___c__DisplayClass54_1()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2._UpdateBundleSortList_b__4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::_UpdateBundleSortList_b__4)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fd0600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*>(),
                        {"<UpdateBundleSortList>b__4", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::__cordl_internal_get_typeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeName;
}
constexpr ::StringW const& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::__cordl_internal_get_typeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeName;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::__cordl_internal_set_typeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeName = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::_UpdateBundleSortList_b__4(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*>(),
                        {"<UpdateBundleSortList>b__4", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_2::PostProcessLayer___c__DisplayClass54_2()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3._UpdateBundleSortList_b__5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::*)(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::_UpdateBundleSortList_b__5)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fd05b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*>(),
                        {"<UpdateBundleSortList>b__5", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::__cordl_internal_get_typeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeName;
}
constexpr ::StringW const& UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::__cordl_internal_get_typeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeName;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::__cordl_internal_set_typeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeName = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::_UpdateBundleSortList_b__5(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*>(),
                        {"<UpdateBundleSortList>b__5", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3* UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer___c__DisplayClass54_3::PostProcessLayer___c__DisplayClass54_3()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.get_sortedBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>* (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::get_sortedBundles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"get_sortedBundles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.set_sortedBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::set_sortedBundles)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18163ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"set_sortedBundles", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.get_cameraDepthFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::DepthTextureMode (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::get_cameraDepthFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"get_cameraDepthFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.set_cameraDepthFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::DepthTextureMode)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::set_cameraDepthFlags)> {
  constexpr static std::size_t size = 0x2630;
  constexpr static std::size_t addrs = 0x180b9feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"set_cameraDepthFlags", {}, {::i2c::type_of<::UnityEngine::DepthTextureMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.get_haveBundlesBeenInited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::get_haveBundlesBeenInited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fc8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"get_haveBundlesBeenInited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.set_haveBundlesBeenInited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::set_haveBundlesBeenInited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fc8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"set_haveBundlesBeenInited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnEnable)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181fc4820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.InitLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::InitLegacy)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181fc4260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"InitLegacy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.DynamicResolutionAllowsFinalBlitToCameraTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::DynamicResolutionAllowsFinalBlitToCameraTarget)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fc3e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"DynamicResolutionAllowsFinalBlitToCameraTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OnRenderImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnRenderImage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fc5160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnRenderImage", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessResources*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fc4430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.InitBundles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::InitBundles)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181fc3fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"InitBundles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.UpdateBundleSortList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::UpdateBundleSortList)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181fc7be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"UpdateBundleSortList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnDisable)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x181fc44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fc7680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OnPreCull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnPreCull)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181fc4c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnPreCull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OnPreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnPreRender)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fc5110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnPreRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.RequiresInitialBlit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::RequiresInitialBlit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RequiresInitialBlit", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.UpdateSrcDstForOpaqueOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::UpdateSrcDstForOpaqueOnly)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181fc7f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"UpdateSrcDstForOpaqueOnly", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.BuildCommandBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::BuildCommandBuffers)> {
  constexpr static std::size_t size = 0xe60;
  constexpr static std::size_t addrs = 0x181fc2fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"BuildCommandBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OnPostRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnPostRender)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fc4b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnPostRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.GetBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessBundle* (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::System::Type*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::GetBundle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fc3e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"GetBundle", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.BakeMSVOMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::BakeMSVOMap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fc2e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"BakeMSVOMap", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.OverrideSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*, float_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::OverrideSettings)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181fc51c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OverrideSettings", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.SetLegacyCameraFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::SetLegacyCameraFlags)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181fc76b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"SetLegacyCameraFlags", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.ResetHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::ResetHistory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fc75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ResetHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.HasOpaqueOnlyEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::HasOpaqueOnlyEffects)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fc3f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"HasOpaqueOnlyEffects", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.HasActiveEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEvent, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::HasActiveEffects)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fc3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"HasActiveEffects", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.SetupContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::SetupContext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181fc7870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"SetupContext", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.UpdateVolumeSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::UpdateVolumeSystem)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fc8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"UpdateVolumeSystem", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.RenderOpaqueOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderOpaqueOnly)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fc6a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderOpaqueOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::Render)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0x181fc6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.RenderInjectionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEvent, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::StringW, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderInjectionPoint)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181fc6410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderInjectionPoint", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.RenderList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::StringW)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderList)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x181fc65d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.ApplyFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::ApplyFlip)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fc2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ApplyFlip", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.ApplyDefaultFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::ApplyDefaultFlip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fc2d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ApplyDefaultFlip", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.RenderBuiltins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, bool, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderBuiltins)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x181fc5330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderBuiltins", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.RenderFinalPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderFinalPass)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x181fc5cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderFinalPass", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer.ShouldGenerateLogHistogram
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::ShouldGenerateLogHistogram)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fc7b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ShouldGenerateLogHistogram", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessLayer::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessLayer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fc8170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_volumeTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeTrigger;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_volumeTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeTrigger;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_volumeTrigger(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeTrigger = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_volumeLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeLayer;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_volumeLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeLayer;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_volumeLayer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeLayer = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_stopNaNPropagation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopNaNPropagation;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_stopNaNPropagation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopNaNPropagation;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_stopNaNPropagation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopNaNPropagation = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_finalBlitToCameraTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalBlitToCameraTarget;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_finalBlitToCameraTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalBlitToCameraTarget;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_finalBlitToCameraTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalBlitToCameraTarget = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_antialiasingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antialiasingMode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_antialiasingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antialiasingMode;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_antialiasingMode(::UnityEngine::Rendering::PostProcessing::PostProcessLayer_Antialiasing  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antialiasingMode = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_temporalAntialiasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporalAntialiasing;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_temporalAntialiasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporalAntialiasing;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_temporalAntialiasing(::UnityEngine::Rendering::PostProcessing::TemporalAntialiasing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporalAntialiasing = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_subpixelMorphologicalAntialiasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subpixelMorphologicalAntialiasing;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_subpixelMorphologicalAntialiasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subpixelMorphologicalAntialiasing;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subpixelMorphologicalAntialiasing = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_fastApproximateAntialiasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastApproximateAntialiasing;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_fastApproximateAntialiasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastApproximateAntialiasing;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_fastApproximateAntialiasing(::UnityEngine::Rendering::PostProcessing::FastApproximateAntialiasing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastApproximateAntialiasing = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Fog*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_fog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fog;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Fog* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_fog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fog;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_fog(::UnityEngine::Rendering::PostProcessing::Fog*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fog = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Dithering*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_dithering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dithering;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Dithering* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_dithering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dithering;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_dithering(::UnityEngine::Rendering::PostProcessing::Dithering*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dithering = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_debugLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLayer;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_debugLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLayer;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_debugLayer(::UnityEngine::Rendering::PostProcessing::PostProcessDebugLayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLayer = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Resources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Resources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resources = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_OldResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OldResources;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_OldResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OldResources;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_OldResources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OldResources = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_ShowToolkit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowToolkit;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_ShowToolkit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowToolkit;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_ShowToolkit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShowToolkit = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_ShowCustomSorter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowCustomSorter;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_ShowCustomSorter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowCustomSorter;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_ShowCustomSorter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShowCustomSorter = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_breakBeforeColorGrading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakBeforeColorGrading;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_breakBeforeColorGrading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakBeforeColorGrading;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_breakBeforeColorGrading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakBeforeColorGrading = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_BeforeTransparentBundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeforeTransparentBundles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_BeforeTransparentBundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeforeTransparentBundles;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_BeforeTransparentBundles(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BeforeTransparentBundles = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_BeforeStackBundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeforeStackBundles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_BeforeStackBundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeforeStackBundles;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_BeforeStackBundles(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BeforeStackBundles = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_AfterStackBundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AfterStackBundles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_AfterStackBundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AfterStackBundles;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_AfterStackBundles(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AfterStackBundles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get__sortedBundles_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortedBundles_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get__sortedBundles_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortedBundles_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set__sortedBundles_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sortedBundles_k__BackingField = value;
}
constexpr ::UnityEngine::DepthTextureMode& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get__cameraDepthFlags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraDepthFlags_k__BackingField;
}
constexpr ::UnityEngine::DepthTextureMode const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get__cameraDepthFlags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraDepthFlags_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set__cameraDepthFlags_k__BackingField(::UnityEngine::DepthTextureMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraDepthFlags_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get__haveBundlesBeenInited_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haveBundlesBeenInited_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get__haveBundlesBeenInited_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haveBundlesBeenInited_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set__haveBundlesBeenInited_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____haveBundlesBeenInited_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Bundles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bundles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Bundles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Bundles;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_Bundles(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Bundles = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_PropertySheetFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheetFactory;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_PropertySheetFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheetFactory;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_PropertySheetFactory(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertySheetFactory = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBufferBeforeReflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBufferBeforeReflections;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBufferBeforeReflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBufferBeforeReflections;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_LegacyCmdBufferBeforeReflections(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyCmdBufferBeforeReflections = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBufferBeforeLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBufferBeforeLighting;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBufferBeforeLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBufferBeforeLighting;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_LegacyCmdBufferBeforeLighting(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyCmdBufferBeforeLighting = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBufferOpaque()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBufferOpaque;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBufferOpaque() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBufferOpaque;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_LegacyCmdBufferOpaque(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyCmdBufferOpaque = value;
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LegacyCmdBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyCmdBuffer;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_LegacyCmdBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyCmdBuffer = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Camera = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_CurrentContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentContext;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_CurrentContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentContext;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_CurrentContext(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentContext = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LogHistogram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LogHistogram;
}
constexpr ::UnityEngine::Rendering::PostProcessing::LogHistogram* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_LogHistogram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LogHistogram;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_LogHistogram(::UnityEngine::Rendering::PostProcessing::LogHistogram*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LogHistogram = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_SettingsUpdateNeeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SettingsUpdateNeeded;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_SettingsUpdateNeeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SettingsUpdateNeeded;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_SettingsUpdateNeeded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SettingsUpdateNeeded = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_IsRenderingInSceneView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRenderingInSceneView;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_IsRenderingInSceneView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRenderingInSceneView;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_IsRenderingInSceneView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsRenderingInSceneView = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TargetPool*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_TargetPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPool;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TargetPool* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_TargetPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPool;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_TargetPool(::UnityEngine::Rendering::PostProcessing::TargetPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPool = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_NaNKilled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NaNKilled;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_NaNKilled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NaNKilled;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_NaNKilled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NaNKilled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_ActiveEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveEffects;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_ActiveEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveEffects;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_ActiveEffects(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveEffects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>*& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Targets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>* const& UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_get_m_Targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Targets;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessLayer::__cordl_internal_set_m_Targets(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Targets = value;
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>* UnityEngine::Rendering::PostProcessing::PostProcessLayer::get_sortedBundles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"get_sortedBundles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::set_sortedBundles(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"set_sortedBundles", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::PostProcessing::PostProcessEvent,::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::DepthTextureMode UnityEngine::Rendering::PostProcessing::PostProcessLayer::get_cameraDepthFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"get_cameraDepthFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::DepthTextureMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::set_cameraDepthFlags(::UnityEngine::DepthTextureMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"set_cameraDepthFlags", {}, {::i2c::type_of<::UnityEngine::DepthTextureMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer::get_haveBundlesBeenInited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"get_haveBundlesBeenInited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::set_haveBundlesBeenInited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"set_haveBundlesBeenInited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::InitLegacy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"InitLegacy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer::DynamicResolutionAllowsFinalBlitToCameraTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"DynamicResolutionAllowsFinalBlitToCameraTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnRenderImage", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::Init(::UnityEngine::Rendering::PostProcessing::PostProcessResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::InitBundles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"InitBundles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::UpdateBundleSortList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  sortedList, ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"UpdateBundleSortList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortedList, evt);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnPreCull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnPreCull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnPreRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnPreRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer::RequiresInitialBlit(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RequiresInitialBlit", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::UpdateSrcDstForOpaqueOnly(::by_ref<int32_t>  src, ::by_ref<int32_t>  dst, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::Rendering::RenderTargetIdentifier  cameraTarget, int32_t  opaqueOnlyEffectsRemaining)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"UpdateSrcDstForOpaqueOnly", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, context, cameraTarget, opaqueOnlyEffectsRemaining);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::BuildCommandBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"BuildCommandBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OnPostRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OnPostRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* UnityEngine::Rendering::PostProcessing::PostProcessLayer::GetBundle()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                    {"GetBundle", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* UnityEngine::Rendering::PostProcessing::PostProcessLayer::GetBundle(::System::Type*  settingsType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"GetBundle", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessBundle*>(this, ___internal_method, settingsType);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::PostProcessLayer::GetSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                    {"GetSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::BakeMSVOMap(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>  depthMap, bool  invert, bool  isMSAA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"BakeMSVOMap", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera, destination, depthMap, invert, isMSAA);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::OverrideSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  baseSettings, float_t  interpFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"OverrideSettings", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseSettings, interpFactor);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::SetLegacyCameraFlags(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"SetLegacyCameraFlags", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::ResetHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ResetHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer::HasOpaqueOnlyEffects(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"HasOpaqueOnlyEffects", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer::HasActiveEffects(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"HasActiveEffects", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::SetupContext(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"SetupContext", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::UpdateVolumeSystem(::UnityEngine::Camera*  cam, ::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"UpdateVolumeSystem", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, cmd);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderOpaqueOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderOpaqueOnly", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderInjectionPoint(::UnityEngine::Rendering::PostProcessing::PostProcessEvent  evt, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::StringW  marker, int32_t  releaseTargetAfterUse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderInjectionPoint", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEvent>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, evt, context, marker, releaseTargetAfterUse);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*  list, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::StringW  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::PostProcessing::PostProcessLayer_SerializedBundleRef*>*>(), ::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, context, marker);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::ApplyFlip(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ApplyFlip", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, properties);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::ApplyDefaultFlip(::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ApplyDefaultFlip", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderBuiltins(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, bool  isFinalPass, int32_t  releaseTargetAfterUse, int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderBuiltins", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, context, isFinalPass, releaseTargetAfterUse, eye);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderFinalPass(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, int32_t  releaseTargetAfterUse, int32_t  eye)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"RenderFinalPass", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, releaseTargetAfterUse, eye);
}
template<typename T>
inline int32_t UnityEngine::Rendering::PostProcessing::PostProcessLayer::RenderEffect(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, bool  useTempTarget)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                    {"RenderEffect", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, context, useTempTarget);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessLayer::ShouldGenerateLogHistogram(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {"ShouldGenerateLogHistogram", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessLayer* UnityEngine::Rendering::PostProcessing::PostProcessLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessLayer::PostProcessLayer()   {
}
