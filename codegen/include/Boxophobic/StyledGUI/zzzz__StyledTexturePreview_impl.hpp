#pragma once
// IWYU pragma private; include "Boxophobic/StyledGUI/StyledTexturePreview.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledTexturePreview_def.hpp"
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledTexturePreview._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledTexturePreview::*)()>(&::Boxophobic::StyledGUI::StyledTexturePreview::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804bd7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledTexturePreview*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Boxophobic::StyledGUI::StyledTexturePreview._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::StyledGUI::StyledTexturePreview::*)(::StringW)>(&::Boxophobic::StyledGUI::StyledTexturePreview::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804bd310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledTexturePreview*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Boxophobic::StyledGUI::StyledTexturePreview::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& Boxophobic::StyledGUI::StyledTexturePreview::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void Boxophobic::StyledGUI::StyledTexturePreview::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
inline void Boxophobic::StyledGUI::StyledTexturePreview::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledTexturePreview*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Boxophobic::StyledGUI::StyledTexturePreview::_ctor(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::StyledGUI::StyledTexturePreview*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline ::Boxophobic::StyledGUI::StyledTexturePreview* Boxophobic::StyledGUI::StyledTexturePreview::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledTexturePreview*>());
}
inline ::Boxophobic::StyledGUI::StyledTexturePreview* Boxophobic::StyledGUI::StyledTexturePreview::New_ctor(::StringW  displayName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::StyledGUI::StyledTexturePreview*>(displayName));
}
// Ctor Parameters []
constexpr ::Boxophobic::StyledGUI::StyledTexturePreview::StyledTexturePreview()   {
}
