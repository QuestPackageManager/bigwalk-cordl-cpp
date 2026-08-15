#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledText.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledText_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledText::*)()>(&::Boxophobic::StyledGUI::StyledText::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804bd6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledText::*)(::UnityEngine::TextAnchor)>(&::Boxophobic::StyledGUI::StyledText::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804bd6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledText*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TextAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledText::*)(::UnityEngine::TextAnchor, float_t, float_t)>(&::Boxophobic::StyledGUI::StyledText::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bd730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledText*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TextAnchor>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Boxophobic::StyledGUI::StyledText::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityEngine::TextAnchor& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_alignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignment;
}
constexpr ::UnityEngine::TextAnchor const& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_alignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignment;
}
constexpr void Boxophobic::StyledGUI::StyledText::__cordl_internal_set_alignment(::UnityEngine::TextAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignment = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr void Boxophobic::StyledGUI::StyledText::__cordl_internal_set_top(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___top = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledText::__cordl_internal_get_down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr void Boxophobic::StyledGUI::StyledText::__cordl_internal_set_down(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___down = value;
}
inline void Boxophobic::StyledGUI::StyledText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::StyledGUI::StyledText::_ctor(::UnityEngine::TextAnchor  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledText*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TextAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alignment);
}
inline void Boxophobic::StyledGUI::StyledText::_ctor(::UnityEngine::TextAnchor  alignment, float_t  top, float_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledText*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::TextAnchor>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alignment, top, down);
}
inline ::Boxophobic::StyledGUI::StyledText* Boxophobic::StyledGUI::StyledText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledText*>());
}
inline ::Boxophobic::StyledGUI::StyledText* Boxophobic::StyledGUI::StyledText::New_ctor(::UnityEngine::TextAnchor  alignment)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledText*>(alignment));
}
inline ::Boxophobic::StyledGUI::StyledText* Boxophobic::StyledGUI::StyledText::New_ctor(::UnityEngine::TextAnchor  alignment, float_t  top, float_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledText*>(alignment, top, down));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledText::StyledText()   {
}
