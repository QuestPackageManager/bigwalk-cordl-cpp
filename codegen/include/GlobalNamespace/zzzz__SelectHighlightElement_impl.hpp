#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectHighlightElement.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SelectHighlightElement_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectHighlightElement.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectHighlightElement::*)()>(&::GlobalNamespace::SelectHighlightElement::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180428760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelectHighlightElement*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectHighlightElement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectHighlightElement::*)()>(&::GlobalNamespace::SelectHighlightElement::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804287b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelectHighlightElement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectHighlightElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectHighlightElement::*)()>(&::GlobalNamespace::SelectHighlightElement::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelectHighlightElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::SelectHighlightElement::__cordl_internal_get__inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::SelectHighlightElement::__cordl_internal_get__inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputField;
}
constexpr void GlobalNamespace::SelectHighlightElement::__cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SelectHighlightElement::__cordl_internal_get_targetElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetElement;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SelectHighlightElement::__cordl_internal_get_targetElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetElement;
}
constexpr void GlobalNamespace::SelectHighlightElement::__cordl_internal_set_targetElement(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetElement = value;
}
inline void GlobalNamespace::SelectHighlightElement::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelectHighlightElement*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectHighlightElement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelectHighlightElement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectHighlightElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SelectHighlightElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectHighlightElement* GlobalNamespace::SelectHighlightElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectHighlightElement*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectHighlightElement::SelectHighlightElement()   {
}
