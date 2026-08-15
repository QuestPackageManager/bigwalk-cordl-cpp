#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledCategory.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledCategory_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledCategory::*)(::StringW)>(&::Boxophobic::StyledGUI::StyledCategory::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804bd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledCategory::*)(::StringW, float_t, float_t)>(&::Boxophobic::StyledGUI::StyledCategory::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804bd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledCategory::*)(::StringW, bool, int32_t, int32_t)>(&::Boxophobic::StyledGUI::StyledCategory::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804bd170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledCategory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledCategory::*)(::StringW, bool, ::StringW, int32_t, int32_t)>(&::Boxophobic::StyledGUI::StyledCategory::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804bd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___category;
}
constexpr void Boxophobic::StyledGUI::StyledCategory::__cordl_internal_set_category(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___category = value;
}
constexpr bool& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_colapsable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colapsable;
}
constexpr bool const& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_colapsable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colapsable;
}
constexpr void Boxophobic::StyledGUI::StyledCategory::__cordl_internal_set_colapsable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colapsable = value;
}
constexpr ::StringW& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Boxophobic::StyledGUI::StyledCategory::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr void Boxophobic::StyledGUI::StyledCategory::__cordl_internal_set_top(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___top = value;
}
constexpr float_t& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr float_t const& Boxophobic::StyledGUI::StyledCategory::__cordl_internal_get_down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr void Boxophobic::StyledGUI::StyledCategory::__cordl_internal_set_down(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___down = value;
}
inline void Boxophobic::StyledGUI::StyledCategory::_ctor(::StringW  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline void Boxophobic::StyledGUI::StyledCategory::_ctor(::StringW  category, float_t  top, float_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, top, down);
}
inline void Boxophobic::StyledGUI::StyledCategory::_ctor(::StringW  category, bool  colapsable, int32_t  top, int32_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, colapsable, top, down);
}
inline void Boxophobic::StyledGUI::StyledCategory::_ctor(::StringW  category, bool  colapsable, ::StringW  message, int32_t  top, int32_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledCategory*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, colapsable, message, top, down);
}
inline ::Boxophobic::StyledGUI::StyledCategory* Boxophobic::StyledGUI::StyledCategory::New_ctor(::StringW  category)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledCategory*>(category));
}
inline ::Boxophobic::StyledGUI::StyledCategory* Boxophobic::StyledGUI::StyledCategory::New_ctor(::StringW  category, float_t  top, float_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledCategory*>(category, top, down));
}
inline ::Boxophobic::StyledGUI::StyledCategory* Boxophobic::StyledGUI::StyledCategory::New_ctor(::StringW  category, bool  colapsable, int32_t  top, int32_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledCategory*>(category, colapsable, top, down));
}
inline ::Boxophobic::StyledGUI::StyledCategory* Boxophobic::StyledGUI::StyledCategory::New_ctor(::StringW  category, bool  colapsable, ::StringW  message, int32_t  top, int32_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledCategory*>(category, colapsable, message, top, down));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledCategory::StyledCategory()   {
}
