#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PropertySheet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.get_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)()>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::get_properties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"get_properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.set_properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::set_properties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"set_properties", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.get_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)()>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::get_material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"get_material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)(::UnityEngine::Material*)>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::set_material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)(::UnityEngine::Material*)>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fcb9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.ClearKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)()>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::ClearKeywords)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcb940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"ClearKeywords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.EnableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)(::StringW)>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::EnableKeyword)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.DisableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)(::StringW)>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::DisableKeyword)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fcb950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"DisableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheet.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheet::*)()>(&::UnityEngine::Rendering::PostProcessing::PropertySheet::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fcb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::Rendering::PostProcessing::PropertySheet::__cordl_internal_get__properties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties_k__BackingField;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::Rendering::PostProcessing::PropertySheet::__cordl_internal_get__properties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PropertySheet::__cordl_internal_set__properties_k__BackingField(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::PostProcessing::PropertySheet::__cordl_internal_get__material_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::PostProcessing::PropertySheet::__cordl_internal_get__material_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material_k__BackingField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PropertySheet::__cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material_k__BackingField = value;
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Rendering::PostProcessing::PropertySheet::get_properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"get_properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::set_properties(::UnityEngine::MaterialPropertyBlock*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"set_properties", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::PostProcessing::PropertySheet::get_material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"get_material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::set_material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::_ctor(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::ClearKeywords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"ClearKeywords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::EnableKeyword(::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::DisableKeyword(::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"DisableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheet::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::PropertySheet::New_ctor(::UnityEngine::Material*  material)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(material));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheet::PropertySheet()   {
}
