#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PropertySheetFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheetFactory_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheet_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::*)()>(&::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fcb8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PropertySheet* (::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::*)(::StringW)>(&::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fcb790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PropertySheet* (::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::*)(::UnityEngine::Shader*)>(&::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::Get)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181fcb600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::*)()>(&::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::Release)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fcb810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>*& UnityEngine::Rendering::PostProcessing::PropertySheetFactory::__cordl_internal_get_m_Sheets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sheets;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>* const& UnityEngine::Rendering::PostProcessing::PropertySheetFactory::__cordl_internal_get_m_Sheets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sheets;
}
constexpr void UnityEngine::Rendering::PostProcessing::PropertySheetFactory::__cordl_internal_set_m_Sheets(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Shader>,::UnityEngine::Rendering::PostProcessing::PropertySheet*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sheets = value;
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheetFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::PropertySheetFactory::Get(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(this, ___internal_method, shaderName);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheet* UnityEngine::Rendering::PostProcessing::PropertySheetFactory::Get(::UnityEngine::Shader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PropertySheet*>(this, ___internal_method, shader);
}
inline void UnityEngine::Rendering::PostProcessing::PropertySheetFactory::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* UnityEngine::Rendering::PostProcessing::PropertySheetFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory::PropertySheetFactory()   {
}
