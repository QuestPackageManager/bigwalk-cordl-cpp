#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappedText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FontMappedText_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FontMappedText.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappedText::*)()>(&::GlobalNamespace::FontMappedText::Initialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803e6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappedText.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappedText::*)()>(&::GlobalNamespace::FontMappedText::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappedText.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappedText::*)()>(&::GlobalNamespace::FontMappedText::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803e6ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappedText.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappedText::*)()>(&::GlobalNamespace::FontMappedText::Refresh)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803e6e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappedText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappedText::*)()>(&::GlobalNamespace::FontMappedText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::FontMappedText::__cordl_internal_get__textElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textElement;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::FontMappedText::__cordl_internal_get__textElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textElement;
}
constexpr void GlobalNamespace::FontMappedText::__cordl_internal_set__textElement(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textElement = value;
}
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::FontMappedText::__cordl_internal_get__inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::FontMappedText::__cordl_internal_get__inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr void GlobalNamespace::FontMappedText::__cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputField = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& GlobalNamespace::FontMappedText::__cordl_internal_get__originalFont()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalFont;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& GlobalNamespace::FontMappedText::__cordl_internal_get__originalFont() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalFont;
}
constexpr void GlobalNamespace::FontMappedText::__cordl_internal_set__originalFont(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalFont = value;
}
constexpr bool& GlobalNamespace::FontMappedText::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::FontMappedText::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::FontMappedText::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void GlobalNamespace::FontMappedText::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontMappedText::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontMappedText::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontMappedText::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FontMappedText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappedText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FontMappedText* GlobalNamespace::FontMappedText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FontMappedText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontMappedText::FontMappedText()   {
}
