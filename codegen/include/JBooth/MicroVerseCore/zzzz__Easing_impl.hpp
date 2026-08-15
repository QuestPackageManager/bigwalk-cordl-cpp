#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Easing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Easing_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Easing_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape::Easing_BlendShape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape::Easing_BlendShape()   {
}
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape  JBooth::MicroVerseCore::Easing_BlendShape::Linear{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape  JBooth::MicroVerseCore::Easing_BlendShape::Smoothstep{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape  JBooth::MicroVerseCore::Easing_BlendShape::EaseIn{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape  JBooth::MicroVerseCore::Easing_BlendShape::EaseOut{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape  JBooth::MicroVerseCore::Easing_BlendShape::EaseInOut{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Easing.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Easing::*)(::UnityEngine::Material*, ::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::Easing::PrepareMaterial)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18142c010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Easing*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Easing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Easing::*)()>(&::JBooth::MicroVerseCore::Easing::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Easing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape& JBooth::MicroVerseCore::Easing::__cordl_internal_get_blend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blend;
}
constexpr ::JBooth::MicroVerseCore::Easing_BlendShape const& JBooth::MicroVerseCore::Easing::__cordl_internal_get_blend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blend;
}
constexpr void JBooth::MicroVerseCore::Easing::__cordl_internal_set_blend(::JBooth::MicroVerseCore::Easing_BlendShape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blend = value;
}
inline void JBooth::MicroVerseCore::Easing::PrepareMaterial(::UnityEngine::Material*  mat, ::StringW  key, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Easing*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, key, keywords);
}
inline void JBooth::MicroVerseCore::Easing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Easing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Easing* JBooth::MicroVerseCore::Easing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Easing*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Easing::Easing()   {
}
