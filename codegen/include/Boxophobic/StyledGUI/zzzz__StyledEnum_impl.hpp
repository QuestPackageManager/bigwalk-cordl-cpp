#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledEnum.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledEnum_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledEnum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledEnum::*)(::StringW, ::StringW, int32_t, int32_t)>(&::Boxophobic::StyledGUI::StyledEnum::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804bd360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledEnum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledEnum::*)(::StringW, ::StringW, ::StringW, int32_t, int32_t)>(&::Boxophobic::StyledGUI::StyledEnum::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804bd420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_display()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_display() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display;
}
constexpr void Boxophobic::StyledGUI::StyledEnum::__cordl_internal_set_display(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___display = value;
}
constexpr ::StringW& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_file()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_file() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___file;
}
constexpr void Boxophobic::StyledGUI::StyledEnum::__cordl_internal_set_file(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___file = value;
}
constexpr ::StringW& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___options;
}
constexpr void Boxophobic::StyledGUI::StyledEnum::__cordl_internal_set_options(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___options = value;
}
constexpr int32_t& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr int32_t const& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr void Boxophobic::StyledGUI::StyledEnum::__cordl_internal_set_top(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___top = value;
}
constexpr int32_t& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr int32_t const& Boxophobic::StyledGUI::StyledEnum::__cordl_internal_get_down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___down;
}
constexpr void Boxophobic::StyledGUI::StyledEnum::__cordl_internal_set_down(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___down = value;
}
inline void Boxophobic::StyledGUI::StyledEnum::_ctor(::StringW  file, ::StringW  options, int32_t  top, int32_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file, options, top, down);
}
inline void Boxophobic::StyledGUI::StyledEnum::_ctor(::StringW  display, ::StringW  file, ::StringW  options, int32_t  top, int32_t  down)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, display, file, options, top, down);
}
inline ::Boxophobic::StyledGUI::StyledEnum* Boxophobic::StyledGUI::StyledEnum::New_ctor(::StringW  file, ::StringW  options, int32_t  top, int32_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledEnum*>(file, options, top, down));
}
inline ::Boxophobic::StyledGUI::StyledEnum* Boxophobic::StyledGUI::StyledEnum::New_ctor(::StringW  display, ::StringW  file, ::StringW  options, int32_t  top, int32_t  down)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledEnum*>(display, file, options, top, down));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledEnum::StyledEnum()   {
}
