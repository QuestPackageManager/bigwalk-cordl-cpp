#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessProfile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessProfile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessProfile_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c._OnEnable_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::_OnEnable_b__2_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18143d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(),
                        {"<OnEnable>b__2_0", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(std::forward<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c* UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::setStaticF___9__2_0(::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*, "<>9__2_0", ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>* UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*, "<>9__2_0", ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::_OnEnable_b__2_0(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>(),
                        {"<OnEnable>b__2_0", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c* UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessProfile___c::PostProcessProfile___c()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessProfile::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fca1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile.AddSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> (::UnityEngine::Rendering::PostProcessing::PostProcessProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile::AddSettings)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fc9f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"AddSettings", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile.AddSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> (::UnityEngine::Rendering::PostProcessing::PostProcessProfile::*)(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile::AddSettings)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fca070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"AddSettings", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile.RemoveSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile::RemoveSettings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fca260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"RemoveSettings", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile.HasSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessProfile::*)(::System::Type*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile::HasSettings)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fca130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"HasSettings", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessProfile::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessProfile::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fca310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*& UnityEngine::Rendering::PostProcessing::PostProcessProfile::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>* const& UnityEngine::Rendering::PostProcessing::PostProcessProfile::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessProfile::__cordl_internal_set_settings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr bool& UnityEngine::Rendering::PostProcessing::PostProcessProfile::__cordl_internal_get_isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr bool const& UnityEngine::Rendering::PostProcessing::PostProcessProfile::__cordl_internal_get_isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessProfile::__cordl_internal_set_isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDirty = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::PostProcessProfile::AddSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                    {"AddSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> UnityEngine::Rendering::PostProcessing::PostProcessProfile::AddSettings(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"AddSettings", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>(this, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> UnityEngine::Rendering::PostProcessing::PostProcessProfile::AddSettings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  effect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"AddSettings", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>(this, ___internal_method, effect);
}
template<typename T>
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile::RemoveSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                    {"RemoveSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile::RemoveSettings(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"RemoveSettings", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
template<typename T>
inline bool UnityEngine::Rendering::PostProcessing::PostProcessProfile::HasSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                    {"HasSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessProfile::HasSettings(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {"HasSettings", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
template<typename T>
inline T UnityEngine::Rendering::PostProcessing::PostProcessProfile::GetSetting()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                    {"GetSetting", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Rendering::PostProcessing::PostProcessProfile::TryGetSettings(::by_ref<T>  outSetting)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                    {"TryGetSettings", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outSetting);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessProfile* UnityEngine::Rendering::PostProcessing::PostProcessProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessProfile::PostProcessProfile()   {
}
