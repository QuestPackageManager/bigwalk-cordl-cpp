#pragma once
// IWYU pragma private; include "GlobalNamespace/TextFitter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextFitter_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextFitter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextFitter::*)()>(&::GlobalNamespace::TextFitter::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180440c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFitter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextFitter::*)()>(&::GlobalNamespace::TextFitter::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180440d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFitter.MessageWillFit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TMP_Text*, ::StringW)>(&::GlobalNamespace::TextFitter::MessageWillFit)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180440ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"MessageWillFit", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFitter.OnValidateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::TextFitter::*)(::StringW, int32_t, char16_t)>(&::GlobalNamespace::TextFitter::OnValidateInput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180440e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"OnValidateInput", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextFitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextFitter::*)()>(&::GlobalNamespace::TextFitter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TextFitter::__cordl_internal_get_ignoreWhenCheating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreWhenCheating;
}
constexpr bool const& GlobalNamespace::TextFitter::__cordl_internal_get_ignoreWhenCheating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreWhenCheating;
}
constexpr void GlobalNamespace::TextFitter::__cordl_internal_set_ignoreWhenCheating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreWhenCheating = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::TextFitter::__cordl_internal_get__inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::TextFitter::__cordl_internal_get__inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr void GlobalNamespace::TextFitter::__cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputField = value;
}
inline void GlobalNamespace::TextFitter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextFitter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TextFitter::MessageWillFit(::TMPro::TMP_Text*  text, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"MessageWillFit", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, message);
}
inline char16_t GlobalNamespace::TextFitter::OnValidateInput(::StringW  text, int32_t  charIndex, char16_t  addedChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {"OnValidateInput", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, text, charIndex, addedChar);
}
inline void GlobalNamespace::TextFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextFitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextFitter* GlobalNamespace::TextFitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextFitter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextFitter::TextFitter()   {
}
