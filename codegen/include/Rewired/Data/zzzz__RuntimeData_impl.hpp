#pragma once
// IWYU pragma private; include "Rewired/Data/RuntimeData.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_impl.hpp"
#include "Rewired/Platforms/zzzz__Platform_impl.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rewired/Data/zzzz__RuntimeData_def.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Rewired::Data::RuntimeData.SetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::RuntimeData::*)(::Rewired::Platforms::Platform, ::Rewired::Platforms::WebplayerPlatform, ::Rewired::Platforms::EditorPlatform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*)>(&::Rewired::Data::RuntimeData::SetPlatform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18188ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::RuntimeData*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::RuntimeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::RuntimeData::*)()>(&::Rewired::Data::RuntimeData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::RuntimeData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Platforms::Platform& Rewired::Data::RuntimeData::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::Rewired::Platforms::Platform const& Rewired::Data::RuntimeData::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void Rewired::Data::RuntimeData::__cordl_internal_set_platform(::Rewired::Platforms::Platform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::Rewired::Platforms::WebplayerPlatform& Rewired::Data::RuntimeData::__cordl_internal_get_webplayerPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webplayerPlatform;
}
constexpr ::Rewired::Platforms::WebplayerPlatform const& Rewired::Data::RuntimeData::__cordl_internal_get_webplayerPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webplayerPlatform;
}
constexpr void Rewired::Data::RuntimeData::__cordl_internal_set_webplayerPlatform(::Rewired::Platforms::WebplayerPlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webplayerPlatform = value;
}
constexpr ::Rewired::Platforms::EditorPlatform& Rewired::Data::RuntimeData::__cordl_internal_get_editorPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorPlatform;
}
constexpr ::Rewired::Platforms::EditorPlatform const& Rewired::Data::RuntimeData::__cordl_internal_get_editorPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorPlatform;
}
constexpr void Rewired::Data::RuntimeData::__cordl_internal_set_editorPlatform(::Rewired::Platforms::EditorPlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorPlatform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*& Rewired::Data::RuntimeData::__cordl_internal_get_libraries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___libraries;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>* const& Rewired::Data::RuntimeData::__cordl_internal_get_libraries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___libraries;
}
constexpr void Rewired::Data::RuntimeData::__cordl_internal_set_libraries(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___libraries = value;
}
inline void Rewired::Data::RuntimeData::SetPlatform(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, ::Rewired::Platforms::EditorPlatform  editorPlatform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  libraries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::RuntimeData*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, webplayerPlatform, editorPlatform, libraries);
}
inline void Rewired::Data::RuntimeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::RuntimeData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::RuntimeData* Rewired::Data::RuntimeData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::RuntimeData*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::RuntimeData::RuntimeData()   {
}
